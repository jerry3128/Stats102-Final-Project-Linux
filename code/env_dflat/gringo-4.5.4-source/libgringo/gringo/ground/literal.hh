// {{{ GPL License 

// This file is part of gringo - a grounder for logic programs.
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

#ifndef _GRINGO_GROUND_LITERAL_HH
#define _GRINGO_GROUND_LITERAL_HH

#include <gringo/domain.hh>
#include <gringo/ground/dependency.hh>
#include <gringo/ground/instantiation.hh>

namespace Gringo { 

namespace Output { struct Literal; }

struct Scripts;

namespace Ground {

// {{{ declaration of HeadOccurrence

struct HeadOccurrence {
    virtual void defines(IndexUpdater &update, Instantiator *inst) = 0;
    virtual ~HeadOccurrence() { }
};

// }}}

// {{{ declaration of Literal

typedef BodyOccurrence<HeadOccurrence> BodyOcc;
struct Literal : Printable {
    using SValVec = Instantiator::SValVec;
    using Score   = double;
    virtual bool isRecursive() const = 0;
    virtual UIdx index(Scripts &scripts, BinderType type, Term::VarSet &bound) = 0;
    virtual BodyOcc *occurrence() = 0;
    virtual void collect(VarTermBoundVec &vars) const = 0;
    virtual void collectImportant(Term::VarSet &vars);
    virtual std::pair<Output::Literal*,bool> toOutput() = 0;
    virtual Score score(Term::VarSet const &bound) = 0;
    virtual ~Literal() { }
};
typedef std::unique_ptr<Literal> ULit;
typedef std::vector<ULit> ULitVec;

// }}}

} } // namespace Ground Gringo

#endif // _GRINGO_GROUND_LITERAL_HH

