// {{{ GPL License 

// This file is part of gringo - a grounder for logic programs.
// Copyright (C) 2013  Benjamin Kaufmann
// Copyright (C) 2013  Roland Kaminski

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// }}}

#ifdef WITH_PYTHON
#  include <Python.h>
#endif
#ifdef WITH_LUA
#  include <lua.h>
#endif
#include "clingo_app.hh"
#include <clasp/parser.h>
#include <climits>
#include <unistd.h>

using namespace Clasp;
using namespace Clasp::Cli;

// {{{ declaration of ClingoApp

ClingoApp::ClingoApp() { }

static bool parseConst(const std::string& str, std::vector<std::string>& out) {
    out.push_back(str);
    return true;
}

void ClingoApp::initOptions(ProgramOptions::OptionContext& root) {
    using namespace ProgramOptions;
    BaseType::initOptions(root);
    grOpts_.defines.clear();
    grOpts_.verbose = false;
    OptionGroup gringo("Gringo Options");
    gringo.addOptions()
        ("text"                     , flag(grOpts_.text = false)     , "Print plain text format")
        ("const,c"                  , storeTo(grOpts_.defines, parseConst)->composing()->arg("<id>=<term>"), "Replace term occurrences of <id> with <term>")
        ("lparse-rewrite"           , flag(grOpts_.lpRewrite = false), "Use together with --text to inspect lparse rewriting")
        ("lparse-debug"             , storeTo(grOpts_.lparseDebug = Gringo::Output::LparseDebug::NONE, values<Gringo::Output::LparseDebug>()
          ("none"  , Gringo::Output::LparseDebug::NONE)
          ("plain" , Gringo::Output::LparseDebug::PLAIN)
          ("lparse", Gringo::Output::LparseDebug::LPARSE)
          ("all"   , Gringo::Output::LparseDebug::ALL)), "Debug information during lparse rewriting:\n"
         "      none  : no additional info\n"
         "      plain : print rules as in plain output (prefix %%)\n"
         "      lparse: print rules as in lparse output (prefix %%%%)\n"
         "      all   : combines plain and lparse\n")
        ("warn,W"                   , storeTo(grOpts_, parseWarning)->arg("<warn>")->composing(), "Enable/disable warnings:\n"
         "      [no-]atom-undefined:        a :- b.\n"
         "      [no-]file-included:         #include \"a.lp\". #include \"a.lp\".\n"
         "      [no-]operation-undefined:   p(1/0).\n"
         "      [no-]variable-unbounded:    $x > 10.\n"
         "      [no-]global-variable:       :- #count { X } = 1, X = 1.\n")
        ("rewrite-minimize"         , flag(grOpts_.rewriteMinimize = false), "Rewrite minimize constraints into rules")
        ("keep-facts"               , flag(grOpts_.keepFacts = false), "Do not remove facts from normal rules")
        ("foobar,@4"                , storeTo(grOpts_.foobar, parseFoobar) , "Foobar")
        ;
    root.add(gringo);

    OptionGroup basic("Basic Options");
    basic.addOptions()
        ("mode", storeTo(mode_ = mode_clingo, values<Mode>()("clingo", mode_clingo)("clasp", mode_clasp)("gringo", mode_gringo)), "Run in {clingo|clasp|gringo} mode\n")
        ;
    root.add(basic);
}

void ClingoApp::validateOptions(const ProgramOptions::OptionContext& root, const ProgramOptions::ParsedOptions& parsed, const ProgramOptions::ParsedValues& vals) {
    BaseType::validateOptions(root, parsed, vals);
    if (grOpts_.text) {
        if (mode_ == mode_clasp) { error("'--text' and '--mode=clasp' are mutually exclusive!"); exit(E_NO_RUN); }
        mode_ = mode_gringo;
    }
}

ProblemType ClingoApp::getProblemType() {
    if (mode_ != mode_clasp) return Problem_t::ASP;
    InputFormat input = Input_t::detectFormat(getStream());
    return Problem_t::format2Type(input);
}
Output* ClingoApp::createOutput(ProblemType f) {
    if (mode_ == mode_gringo) return 0;
    return BaseType::createOutput(f);
}

void ClingoApp::printHelp(const ProgramOptions::OptionContext& root) {
    BaseType::printHelp(root);
    printf("\nclingo is part of Potassco: %s\n", "http://potassco.sourceforge.net/#clingo");
    printf("Get help/report bugs via : http://sourceforge.net/projects/potassco/support\n");
    fflush(stdout);
}

void ClingoApp::printVersion() {
    ProgramOptions::Application::printVersion();
    printf("\n");
    printf("libgringo version " GRINGO_VERSION "\n");
    printf("Configuration: "
#ifdef WITH_PYTHON
        "with Python " PY_VERSION
#else
        "without Python"
#endif
        ", "
#ifdef WITH_LUA
        "with " LUA_RELEASE
#else
        "without Lua"
#endif
        "\n");
    printf("Copyright (C) Roland Kaminski\n");
    printf("License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\n");
    printf("Gringo is free software: you are free to change and redistribute it.\n");
    printf("There is NO WARRANTY, to the extent permitted by law.\n");
    printf("\n");   
    BaseType::printLibClaspVersion();
}
bool ClingoApp::onModel(Clasp::Solver const& s, Clasp::Model const& m) {
    bool ret = !grd || grd->onModel(m);
    return BaseType::onModel(s, m) && ret;
}
void ClingoApp::shutdown() {
    // TODO: can be removed in future...
    //       or could be bound differently given the new interface...
#if WITH_THREADS
    if (grd) {
        grd->solveIter_   = nullptr;
        grd->solveFuture_ = nullptr;
    }
#endif
    Clasp::Cli::ClaspAppBase::shutdown();
}
void ClingoApp::onEvent(Event const& ev) {
#if WITH_THREADS
    Clasp::ClaspFacade::StepReady const *r = Clasp::event_cast<Clasp::ClaspFacade::StepReady>(ev);
    if (r && grd) { grd->onFinish(r->summary->result); }
#endif
    BaseType::onEvent(ev);
}
void ClingoApp::run(Clasp::ClaspFacade& clasp) {
    using namespace std::placeholders;
    if (mode_ != mode_clasp) {
        ProblemType     pt  = getProblemType();
        ProgramBuilder* prg = &clasp.start(claspConfig_, pt);
        grOpts_.verbose = verbose() == UINT_MAX;
        Asp::LogicProgram* lp = mode_ != mode_gringo ? static_cast<Asp::LogicProgram*>(prg) : 0;
        grd = Gringo::gringo_make_unique<ClingoControl>(module.scripts, mode_ == mode_clingo, clasp_.get(), claspConfig_, std::bind(&ClingoApp::handlePostGroundOptions, this, _1), std::bind(&ClingoApp::handlePreSolveOptions, this, _1));
        grd->parse(claspAppOpts_.input, grOpts_, lp);
        grd->main();
    }
    else {
        ClaspAppBase::run(clasp);
    }
}

// }}}

