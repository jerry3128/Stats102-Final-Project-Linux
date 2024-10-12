// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Take the name prefix into account.
#define yylex   GringoNonGroundGrammar_lex

// First part of user declarations.
#line 52 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:404


#include "gringo/input/nongroundparser.hh"
#include "gringo/input/programbuilder.hh"
#include <climits> 

#define BUILDER (lexer->builder())
#define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do {                                                               \
        if (N) {                                                       \
            (Current).beginFilename = YYRHSLOC (Rhs, 1).beginFilename; \
            (Current).beginLine     = YYRHSLOC (Rhs, 1).beginLine;     \
            (Current).beginColumn   = YYRHSLOC (Rhs, 1).beginColumn;   \
            (Current).endFilename   = YYRHSLOC (Rhs, N).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, N).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, N).endColumn;     \
        }                                                              \
        else {                                                         \
            (Current).beginFilename = YYRHSLOC (Rhs, 0).endFilename; \
            (Current).beginLine     = YYRHSLOC (Rhs, 0).endLine;     \
            (Current).beginColumn   = YYRHSLOC (Rhs, 0).endColumn;   \
            (Current).endFilename   = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, 0).endColumn;     \
        }                                                              \
    }                                                                  \
    while (false)

using namespace Gringo;
using namespace Gringo::Input;

int GringoNonGroundGrammar_lex(void *value, Gringo::Location* loc, NonGroundParser *lexer) {
    return lexer->lex(value, *loc);
}


#line 75 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "grammar.hh"

// User implementation prologue.

#line 89 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 89 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:413


void NonGroundGrammar::parser::error(DefaultLocation const &l, std::string const &msg) {
    lexer->parseError(l, msg);
}


#line 99 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 23 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:479
namespace Gringo { namespace Input { namespace NonGroundGrammar {
#line 185 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser (Gringo::Input::NonGroundParser *lexer_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      lexer (lexer_yyarg)
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  parser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, lexer));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 7:
#line 302 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = (yystack_[0].value.uid); }
#line 665 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 8:
#line 310 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::XOR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 671 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 9:
#line 311 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::OR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 677 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 10:
#line 312 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::AND, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 683 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 11:
#line 313 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::ADD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 689 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 12:
#line 314 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::SUB, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 695 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 13:
#line 315 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MUL, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 701 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 14:
#line 316 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::DIV, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 707 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 15:
#line 317 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MOD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 713 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 16:
#line 318 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::POW, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 719 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 17:
#line 319 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NEG, (yystack_[0].value.term)); }
#line 725 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 18:
#line 320 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NOT, (yystack_[0].value.term)); }
#line 731 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 19:
#line 321 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), false); }
#line 737 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 20:
#line 322 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), true); }
#line 743 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 21:
#line 323 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[1].value.termvec), false); }
#line 749 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 22:
#line 324 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[2].value.termvec), true); }
#line 755 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 23:
#line 325 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[3].value.uid), (yystack_[1].value.termvecvec), false); }
#line 761 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 24:
#line 326 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[3].value.uid), (yystack_[1].value.termvecvec), true); }
#line 767 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 25:
#line 327 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::ABS, (yystack_[1].value.term)); }
#line 773 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 26:
#line 328 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createId(FWString((yystack_[0].value.uid)))); }
#line 779 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 27:
#line 329 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createNum((yystack_[0].value.num))); }
#line 785 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 28:
#line 330 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createStr(FWString((yystack_[0].value.uid)))); }
#line 791 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 29:
#line 331 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createInf()); }
#line 797 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 30:
#line 332 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createSup()); }
#line 803 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 31:
#line 338 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term));  }
#line 809 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 32:
#line 339 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term));  }
#line 815 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 33:
#line 343 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), (yystack_[0].value.termvec));  }
#line 821 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 34:
#line 344 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec();  }
#line 827 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 35:
#line 352 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 833 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 36:
#line 353 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::XOR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 839 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 37:
#line 354 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::OR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 845 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 38:
#line 355 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::AND, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 851 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 39:
#line 356 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::ADD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 857 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 40:
#line 357 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::SUB, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 863 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 41:
#line 358 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MUL, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 869 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 42:
#line 359 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::DIV, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 875 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 43:
#line 360 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MOD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 881 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 44:
#line 361 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::POW, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 887 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 45:
#line 362 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NEG, (yystack_[0].value.term)); }
#line 893 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 46:
#line 363 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NOT, (yystack_[0].value.term)); }
#line 899 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 47:
#line 364 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.pool(yylhs.location, (yystack_[1].value.termvec)); }
#line 905 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 48:
#line 365 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[3].value.uid), (yystack_[1].value.termvecvec), false); }
#line 911 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 49:
#line 366 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[3].value.uid), (yystack_[1].value.termvecvec), true); }
#line 917 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 50:
#line 367 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::ABS, (yystack_[1].value.termvec)); }
#line 923 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 51:
#line 368 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createId(FWString((yystack_[0].value.uid)))); }
#line 929 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 52:
#line 369 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createNum((yystack_[0].value.num))); }
#line 935 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 53:
#line 370 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createStr(FWString((yystack_[0].value.uid)))); }
#line 941 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 54:
#line 371 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createInf()); }
#line 947 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 55:
#line 372 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Value::createSup()); }
#line 953 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 56:
#line 373 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, FWString((yystack_[0].value.uid))); }
#line 959 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 57:
#line 374 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, FWString("_")); }
#line 965 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 58:
#line 380 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 971 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 59:
#line 381 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term)); }
#line 977 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 60:
#line 388 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 983 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 61:
#line 389 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term)); }
#line 989 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 62:
#line 393 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = (yystack_[0].value.termvec); }
#line 995 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 63:
#line 394 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(); }
#line 1001 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 64:
#line 398 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[1].value.termvec), true); }
#line 1007 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 65:
#line 399 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[0].value.termvec), false); }
#line 1013 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 66:
#line 400 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), true); }
#line 1019 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 67:
#line 401 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), false); }
#line 1025 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 68:
#line 404 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[1].value.term)); }
#line 1031 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 69:
#line 405 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[1].value.term)); }
#line 1037 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 70:
#line 408 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1043 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 71:
#line 409 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[1].value.termvec), (yystack_[0].value.term)); }
#line 1049 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 72:
#line 412 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), (yystack_[0].value.termvec)); }
#line 1055 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 73:
#line 413 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec((yystack_[2].value.termvecvec), (yystack_[0].value.termvec)); }
#line 1061 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 74:
#line 426 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GT; }
#line 1067 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 75:
#line 427 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LT; }
#line 1073 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 76:
#line 428 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GEQ; }
#line 1079 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 77:
#line 429 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LEQ; }
#line 1085 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 78:
#line 430 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::EQ; }
#line 1091 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 79:
#line 431 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::NEQ; }
#line 1097 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 80:
#line 435 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.pair) = { (yystack_[0].value.uid), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()) << 1u }; }
#line 1103 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 81:
#line 436 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.pair) = { (yystack_[3].value.uid), (yystack_[1].value.termvecvec) << 1u }; }
#line 1109 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 82:
#line 437 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.pair) = { (yystack_[0].value.uid), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()) << 1u | 1u }; }
#line 1115 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 83:
#line 438 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.pair) = { (yystack_[3].value.uid), (yystack_[1].value.termvecvec) << 1u | 1u }; }
#line 1121 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 84:
#line 442 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1127 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 85:
#line 443 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1133 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 86:
#line 444 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1139 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 87:
#line 445 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1145 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 88:
#line 446 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1151 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 89:
#line 447 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1157 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 90:
#line 448 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::POS, (yystack_[0].value.pair).second & 1, FWString((yystack_[0].value.pair).first), TermVecVecUid((yystack_[0].value.pair).second >> 1u)); }
#line 1163 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 91:
#line 449 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::NOT, (yystack_[0].value.pair).second & 1, FWString((yystack_[0].value.pair).first), TermVecVecUid((yystack_[0].value.pair).second >> 1u)); }
#line 1169 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 92:
#line 450 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::NOTNOT, (yystack_[0].value.pair).second & 1, FWString((yystack_[0].value.pair).first), TermVecVecUid((yystack_[0].value.pair).second >> 1u)); }
#line 1175 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 93:
#line 451 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, (yystack_[1].value.rel), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1181 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 94:
#line 452 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, neg((yystack_[1].value.rel)), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1187 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 95:
#line 453 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, (yystack_[1].value.rel), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1193 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 96:
#line 454 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.csplit((yystack_[0].value.csplit)); }
#line 1199 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 97:
#line 458 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[0].value.term),                     (yystack_[2].value.term)); }
#line 1205 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 98:
#line 459 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[3].value.term),                     (yystack_[0].value.term)); }
#line 1211 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 99:
#line 460 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, BUILDER.term(yylhs.location, Value::createNum(1)), (yystack_[0].value.term)); }
#line 1217 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 100:
#line 461 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[0].value.term)); }
#line 1223 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 101:
#line 465 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[2].value.cspaddterm), (yystack_[0].value.cspmulterm), true); }
#line 1229 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 102:
#line 466 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[2].value.cspaddterm), (yystack_[0].value.cspmulterm), false); }
#line 1235 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 103:
#line 467 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[0].value.cspmulterm)); }
#line 1241 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 104:
#line 471 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GT; }
#line 1247 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 105:
#line 472 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LT; }
#line 1253 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 106:
#line 473 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GEQ; }
#line 1259 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 107:
#line 474 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LEQ; }
#line 1265 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 108:
#line 475 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::EQ; }
#line 1271 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 109:
#line 476 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::NEQ; }
#line 1277 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 110:
#line 480 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.csplit) = BUILDER.csplit(yylhs.location, (yystack_[2].value.csplit), (yystack_[1].value.rel), (yystack_[0].value.cspaddterm)); }
#line 1283 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 111:
#line 481 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.csplit) = BUILDER.csplit(yylhs.location, (yystack_[2].value.cspaddterm),   (yystack_[1].value.rel), (yystack_[0].value.cspaddterm)); }
#line 1289 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 112:
#line 489 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(BUILDER.litvec(), (yystack_[0].value.lit)); }
#line 1295 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 113:
#line 490 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec((yystack_[2].value.litvec), (yystack_[0].value.lit)); }
#line 1301 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 114:
#line 494 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1307 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 115:
#line 495 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1313 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 116:
#line 499 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1319 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 117:
#line 500 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1325 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 118:
#line 504 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1331 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 119:
#line 505 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1337 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 120:
#line 509 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::SUM; }
#line 1343 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 121:
#line 510 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::SUMP; }
#line 1349 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 122:
#line 511 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::MIN; }
#line 1355 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 123:
#line 512 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::MAX; }
#line 1361 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 124:
#line 513 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::COUNT; }
#line 1367 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 125:
#line 521 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelem) = { BUILDER.termvec(), (yystack_[0].value.litvec) }; }
#line 1373 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 126:
#line 522 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelem) = { (yystack_[1].value.termvec), (yystack_[0].value.litvec) }; }
#line 1379 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 127:
#line 526 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelemvec) = BUILDER.bodyaggrelemvec(BUILDER.bodyaggrelemvec(), (yystack_[0].value.bodyaggrelem).first, (yystack_[0].value.bodyaggrelem).second); }
#line 1385 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 128:
#line 527 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelemvec) = BUILDER.bodyaggrelemvec((yystack_[2].value.bodyaggrelemvec), (yystack_[0].value.bodyaggrelem).first, (yystack_[0].value.bodyaggrelem).second); }
#line 1391 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 129:
#line 533 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lbodyaggrelem) = { (yystack_[1].value.lit), (yystack_[0].value.litvec) }; }
#line 1397 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 130:
#line 537 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[0].value.lbodyaggrelem).first, (yystack_[0].value.lbodyaggrelem).second); }
#line 1403 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 131:
#line 538 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[0].value.lbodyaggrelem).first, (yystack_[0].value.lbodyaggrelem).second); }
#line 1409 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 132:
#line 544 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, BUILDER.condlitvec() }; }
#line 1415 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 133:
#line 545 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, (yystack_[1].value.condlitlist) }; }
#line 1421 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 134:
#line 546 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[2].value.fun), false, BUILDER.bodyaggrelemvec() }; }
#line 1427 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 135:
#line 547 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[3].value.fun), false, (yystack_[1].value.bodyaggrelemvec) }; }
#line 1433 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 136:
#line 551 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { Relation::LEQ, (yystack_[0].value.term) }; }
#line 1439 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 137:
#line 552 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { (yystack_[1].value.rel), (yystack_[0].value.term) }; }
#line 1445 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 138:
#line 553 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { Relation::LEQ, TermUid(-1) }; }
#line 1451 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 139:
#line 557 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, (yystack_[2].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1457 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 140:
#line 558 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec((yystack_[2].value.rel), (yystack_[3].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1463 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 141:
#line 559 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, TermUid(-1), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1469 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 142:
#line 567 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.headaggrelemvec) = BUILDER.headaggrelemvec((yystack_[5].value.headaggrelemvec), (yystack_[3].value.termvec), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1475 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 143:
#line 568 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.headaggrelemvec) = BUILDER.headaggrelemvec(BUILDER.headaggrelemvec(), (yystack_[3].value.termvec), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1481 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 144:
#line 572 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1487 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 145:
#line 573 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[3].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1493 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 146:
#line 579 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[2].value.fun), false, BUILDER.headaggrelemvec() }; }
#line 1499 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 147:
#line 580 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[3].value.fun), false, (yystack_[1].value.headaggrelemvec) }; }
#line 1505 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 148:
#line 581 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, BUILDER.condlitvec()}; }
#line 1511 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 149:
#line 582 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, (yystack_[1].value.condlitlist)}; }
#line 1517 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 150:
#line 586 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, (yystack_[2].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1523 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 151:
#line 587 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec((yystack_[2].value.rel), (yystack_[3].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1529 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 152:
#line 588 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, TermUid(-1), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1535 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 153:
#line 595 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec(BUILDER.cspelemvec(), yylhs.location, (yystack_[3].value.termvec), (yystack_[1].value.cspaddterm), (yystack_[0].value.litvec)); }
#line 1541 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 154:
#line 596 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec((yystack_[5].value.cspelemvec), yylhs.location, (yystack_[3].value.termvec), (yystack_[1].value.cspaddterm), (yystack_[0].value.litvec)); }
#line 1547 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 155:
#line 600 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = (yystack_[0].value.cspelemvec); }
#line 1553 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 156:
#line 601 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec(); }
#line 1559 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 157:
#line 605 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::POS, (yystack_[1].value.cspelemvec) }; }
#line 1565 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 158:
#line 606 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::NOT, (yystack_[1].value.cspelemvec) }; }
#line 1571 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 159:
#line 607 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::NOTNOT, (yystack_[1].value.cspelemvec) }; }
#line 1577 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 160:
#line 614 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lbodyaggrelem) = { (yystack_[2].value.lit), (yystack_[0].value.litvec) }; }
#line 1583 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 163:
#line 626 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1589 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 164:
#line 627 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[3].value.condlitlist), (yystack_[2].value.lit), (yystack_[1].value.litvec)); }
#line 1595 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 165:
#line 628 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(); }
#line 1601 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 166:
#line 633 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)), (yystack_[4].value.lit), BUILDER.litvec()); }
#line 1607 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 167:
#line 634 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)), (yystack_[4].value.lit), BUILDER.litvec()); }
#line 1613 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 168:
#line 635 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)), (yystack_[6].value.lit), (yystack_[4].value.litvec)); }
#line 1619 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 169:
#line 636 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[2].value.lit), (yystack_[0].value.litvec)); }
#line 1625 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 170:
#line 645 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1631 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 171:
#line 646 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1637 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 172:
#line 647 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1643 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 173:
#line 648 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1649 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 174:
#line 649 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1655 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 175:
#line 650 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1661 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 176:
#line 651 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1667 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 177:
#line 652 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1673 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 178:
#line 653 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.conjunction((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.lbodyaggrelem).first, (yystack_[1].value.lbodyaggrelem).second); }
#line 1679 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 179:
#line 654 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.disjoint((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.disjoint).first, (yystack_[1].value.disjoint).second); }
#line 1685 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 180:
#line 655 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1691 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 181:
#line 659 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1697 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 182:
#line 660 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1703 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 183:
#line 661 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1709 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 184:
#line 662 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1715 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 185:
#line 663 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.conjunction((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.lbodyaggrelem).first, (yystack_[1].value.lbodyaggrelem).second); }
#line 1721 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 186:
#line 664 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.disjoint((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.disjoint).first, (yystack_[1].value.disjoint).second); }
#line 1727 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 187:
#line 668 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = BUILDER.headlit((yystack_[0].value.lit)); }
#line 1733 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 188:
#line 669 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = BUILDER.disjunction(yylhs.location, (yystack_[0].value.condlitlist)); }
#line 1739 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 189:
#line 670 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = lexer->headaggregate(yylhs.location, (yystack_[0].value.uid)); }
#line 1745 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 190:
#line 674 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, (yystack_[1].value.head)); }
#line 1751 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 191:
#line 675 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, (yystack_[2].value.head), (yystack_[0].value.body)); }
#line 1757 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 192:
#line 676 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yylhs.location, false)), (yystack_[0].value.body)); }
#line 1763 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 193:
#line 677 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yylhs.location, false)), BUILDER.body()); }
#line 1769 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 194:
#line 684 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[2].location, false)), BUILDER.disjoint((yystack_[0].value.body), yystack_[2].location, inv((yystack_[2].value.disjoint).first), (yystack_[2].value.disjoint).second)); }
#line 1775 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 195:
#line 685 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[2].location, false)), BUILDER.disjoint(BUILDER.body(), yystack_[2].location, inv((yystack_[2].value.disjoint).first), (yystack_[2].value.disjoint).second)); }
#line 1781 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 196:
#line 686 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[1].location, false)), BUILDER.disjoint(BUILDER.body(), yystack_[1].location, inv((yystack_[1].value.disjoint).first), (yystack_[1].value.disjoint).second)); }
#line 1787 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 197:
#line 693 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = (yystack_[0].value.termvec); }
#line 1793 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 198:
#line 694 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(); }
#line 1799 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 199:
#line 698 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termpair) = {(yystack_[2].value.term), (yystack_[0].value.term)}; }
#line 1805 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 200:
#line 699 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termpair) = {(yystack_[0].value.term), BUILDER.term(yylhs.location, Value::createNum(0))}; }
#line 1811 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 201:
#line 703 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit(BUILDER.body(), (yystack_[0].value.lit)); }
#line 1817 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 202:
#line 704 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[0].value.lit)); }
#line 1823 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 203:
#line 708 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = (yystack_[0].value.body); }
#line 1829 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 204:
#line 709 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1835 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 205:
#line 710 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1841 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 206:
#line 714 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[4].value.body)); }
#line 1847 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 207:
#line 715 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), BUILDER.body()); }
#line 1853 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 208:
#line 719 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, BUILDER.term(yystack_[2].location, UnOp::NEG, (yystack_[2].value.termpair).first), (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1859 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 209:
#line 720 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, BUILDER.term(yystack_[2].location, UnOp::NEG, (yystack_[2].value.termpair).first), (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1865 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 210:
#line 724 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1871 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 211:
#line 725 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1877 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 216:
#line 739 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, FWSignature((yystack_[3].value.uid), (yystack_[1].value.num), false), false); }
#line 1883 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 217:
#line 740 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, FWSignature(FWString((yystack_[3].value.uid)), (yystack_[1].value.num), true), false); }
#line 1889 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 218:
#line 741 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, FWSignature("", 0, false), false); }
#line 1895 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 219:
#line 742 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), false); }
#line 1901 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 220:
#line 743 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[1].value.term), BUILDER.body(), false); }
#line 1907 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 221:
#line 744 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, FWSignature((yystack_[3].value.uid), (yystack_[1].value.num), false), true); }
#line 1913 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 222:
#line 745 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), true); }
#line 1919 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 223:
#line 746 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[1].value.term), BUILDER.body(), true); }
#line 1925 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 224:
#line 753 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    {  BUILDER.define(yylhs.location, (yystack_[2].value.uid), (yystack_[0].value.term), false); }
#line 1931 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 225:
#line 757 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    {  BUILDER.define(yylhs.location, (yystack_[3].value.uid), (yystack_[1].value.term), true); }
#line 1937 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 226:
#line 764 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.python(yylhs.location, (yystack_[1].value.uid)); }
#line 1943 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 227:
#line 765 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.lua(yylhs.location, (yystack_[1].value.uid)); }
#line 1949 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 228:
#line 772 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->include((yystack_[1].value.uid), yylhs.location, false); }
#line 1955 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 229:
#line 773 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->include((yystack_[2].value.uid), yylhs.location, true); }
#line 1961 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 230:
#line 780 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec((yystack_[2].value.idlist), yystack_[0].location, (yystack_[0].value.uid)); }
#line 1967 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 231:
#line 781 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec(BUILDER.idvec(), yystack_[0].location, (yystack_[0].value.uid)); }
#line 1973 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 232:
#line 785 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec(); }
#line 1979 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 233:
#line 786 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = (yystack_[0].value.idlist); }
#line 1985 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 234:
#line 790 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.block(yylhs.location, (yystack_[4].value.uid), (yystack_[2].value.idlist)); }
#line 1991 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 235:
#line 791 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.block(yylhs.location, (yystack_[1].value.uid), BUILDER.idvec()); }
#line 1997 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 236:
#line 798 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, BUILDER.predlit(yystack_[2].location, NAF::POS, (yystack_[2].value.pair).second & 1, FWString((yystack_[2].value.pair).first), TermVecVecUid((yystack_[2].value.pair).second >> 1u)), (yystack_[0].value.body)); }
#line 2003 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 237:
#line 799 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, BUILDER.predlit(yystack_[2].location, NAF::POS, (yystack_[2].value.pair).second & 1, FWString((yystack_[2].value.pair).first), TermVecVecUid((yystack_[2].value.pair).second >> 1u)), BUILDER.body()); }
#line 2009 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 238:
#line 800 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, BUILDER.predlit(yystack_[1].location, NAF::POS, (yystack_[1].value.pair).second & 1, FWString((yystack_[1].value.pair).first), TermVecVecUid((yystack_[1].value.pair).second >> 1u)), BUILDER.body()); }
#line 2015 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;


#line 2019 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int parser::yypact_ninf_ = -325;

  const signed char parser::yytable_ninf_ = -84;

  const short int
  parser::yypact_[] =
  {
     -19,  -325,     1,    54,   689,  -325,    88,  -325,  -325,    90,
       1,  1272,     1,  -325,  1272,    89,    -9,  -325,   124,    -4,
    -325,   761,  1152,  -325,   120,  -325,   141,  1053,    25,  1272,
    -325,  -325,  -325,  -325,    95,  1272,   153,  -325,  -325,   157,
     204,  -325,  -325,   842,  -325,    50,  1362,  -325,    70,  -325,
     233,   618,   175,   612,  -325,    19,  -325,    66,  1312,  -325,
     200,  1272,   203,  -325,   244,   382,   464,     1,   220,    76,
    -325,   473,  -325,   202,   257,  -325,   897,   313,   292,    58,
    -325,  1567,   295,   255,  1152,   258,  1161,  1192,  1272,  -325,
     768,   236,   238,   256,   407,  -325,    23,  1567,   -12,   278,
     279,  -325,  -325,   284,  -325,  -325,   969,  1502,  -325,  1272,
    1272,  1272,  -325,   300,  1272,  -325,  -325,  -325,  -325,  1272,
    1272,  -325,  1272,  1272,  1272,  1272,  1272,   979,   612,   851,
    -325,  -325,  -325,  -325,  1201,  1201,  -325,  -325,  -325,  -325,
    -325,  -325,  1201,  1201,  1232,  1567,  1272,  -325,  -325,   296,
    -325,  -325,     1,  1312,  -325,  1100,  1312,  -325,  1312,  -325,
    -325,   285,   280,  1272,  1272,  1312,  1272,   312,   317,  -325,
      59,   293,  1272,   308,  -325,   770,   552,  1409,   152,   299,
     612,    67,     3,    20,   309,  -325,  1077,  1272,   851,  -325,
    -325,   851,  1272,  -325,   289,  -325,   320,  1534,   344,    77,
     330,   344,   146,  1517,  -325,  -325,   301,   315,   297,  1272,
    -325,   303,  1272,  -325,  1272,  1272,   464,   336,  -325,  -325,
    1502,  -325,  1272,  -325,   114,   125,   180,  1272,  1588,   325,
     325,   325,   663,   325,   125,   558,  1567,   612,  -325,  -325,
      57,   851,   851,  1550,  -325,  -325,   173,   173,  -325,   367,
     154,  1567,  -325,  -325,  -325,   339,  -325,   331,  -325,   280,
      27,  -325,  1582,  1312,  1312,  1312,  1312,  1312,  1312,  1312,
    1312,  1312,  1312,   145,   192,    39,  1567,  1272,  1201,  -325,
    1272,  1272,   205,  -325,  -325,  -325,   292,  -325,   156,   924,
    1456,   127,  1018,   612,   851,  -325,  -325,  -325,  1112,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,   370,   397,  -325,
     292,  1567,  -325,  -325,  1272,  1272,   383,   384,  1272,  -325,
     383,   385,  1272,  -325,  -325,  -325,   348,   351,   400,   221,
    -325,   418,   380,  1567,   344,   344,   179,   464,  1272,  1567,
    1593,  1272,  1567,  -325,   851,  -325,   267,   267,   851,  -325,
    1272,  1312,  -325,  1281,  -325,  -325,   423,   389,   147,   334,
     388,   388,   388,   735,   388,   147,   630,  -325,  -325,  -325,
     132,   427,   227,  -325,  -325,  -325,   851,  1456,   133,  1018,
    -325,  -325,  -325,   612,  -325,  -325,   851,  -325,   276,  -325,
     181,  -325,  -325,  1567,   312,   851,  -325,  -325,   344,  -325,
    -325,   344,  -325,   416,   417,  -325,  1599,   372,   421,   398,
     401,  -325,   185,  1567,  -325,  -325,   851,   851,  -325,    -6,
      -6,   292,   438,   399,  -325,   280,  1312,  -325,  -325,  1201,
    -325,  -325,  1018,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    1241,  -325,   445,   383,   383,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,   267,   397,  -325,  -325,   851,  -325,   132,  -325,
     851,  -325,  -325,    -6,   292,  -325,  -325,  -325
  };

  const unsigned char
  parser::yydefact_[] =
  {
       0,     5,     0,     0,     0,     7,     0,     3,     1,     0,
       0,     0,     0,   124,     0,     0,     0,    87,   180,     0,
      54,     0,    67,   123,     0,   122,     0,     0,     0,     0,
     120,   121,    55,    84,     0,     0,   180,    52,    57,     0,
       0,    53,    56,     0,     4,    51,   100,    90,   187,   103,
       0,    96,     0,   138,   189,     0,   188,     0,     0,     6,
       0,     0,    51,    46,     0,    99,   156,     0,    80,     0,
     193,     0,   192,     0,     0,   148,     0,   100,   117,     0,
      66,    60,    65,    70,    67,     0,     0,     0,     0,   218,
       0,     0,     0,     0,    51,    45,     0,    58,     0,     0,
       0,   226,   227,     0,    88,    85,     0,     0,    91,    63,
       0,     0,    78,     0,     0,    76,    74,    77,    75,     0,
       0,    79,     0,     0,     0,     0,     0,     0,   138,     0,
     165,   161,   162,   165,     0,     0,   107,   105,   104,   106,
     108,   109,     0,     0,    63,   136,     0,   152,   196,   180,
     190,   180,     0,     0,    29,     0,     0,    30,     0,    27,
      28,    26,   224,    63,    63,     0,     0,    62,     0,   155,
       0,    82,    63,   180,   238,     0,     0,   100,     0,     0,
     138,     0,     0,     0,     0,   228,     0,     0,   115,   144,
     149,     0,    64,    68,    71,    47,     0,   200,   198,     0,
       0,   198,     0,     0,   180,   220,     0,     0,     0,    63,
     235,   232,     0,    50,     0,     0,   156,     0,    89,    86,
       0,    92,     0,    72,     0,    39,    38,     0,    35,    43,
      41,    44,    37,    42,    40,    36,    93,   138,   150,   112,
     169,     0,     0,   100,   101,   102,   111,   110,   146,     0,
       0,   137,   195,   194,   191,     0,    18,     0,    19,    31,
       0,    17,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,   157,
      63,    63,     0,   237,   236,   132,   117,   130,     0,     0,
       0,     0,     0,   138,   115,   170,   181,   171,     0,   141,
     172,   182,   173,   186,   179,   185,   178,     0,   114,   116,
     117,    61,    69,   213,     0,     0,   205,     0,     0,   212,
     205,     0,     0,   180,   223,   219,     0,     0,     0,     0,
     231,   233,     0,    59,   198,   198,     0,   156,     0,    94,
      48,    63,    98,   151,     0,   165,   119,   119,     0,   147,
      63,    34,    20,     0,    21,    25,    33,     0,    11,    10,
      15,    13,    16,     9,    14,    12,     8,    49,    48,   225,
     117,     0,     0,    81,   129,   133,     0,     0,     0,     0,
     174,   183,   175,   138,   139,   160,   115,   134,   117,   127,
       0,   229,   145,   199,   197,   204,   208,   215,   198,   210,
     214,   198,   222,     0,     0,   216,    48,     0,     0,     0,
       0,   158,     0,    95,    73,   113,     0,     0,   163,   166,
     167,   117,     0,     0,    22,    32,     0,    23,   153,     0,
      83,   131,     0,   176,   184,   177,   140,   125,   126,   135,
       0,   201,   203,   205,   205,   221,   217,   230,   234,   207,
     206,   159,   119,   118,   164,   143,     0,    24,   117,   128,
       0,   209,   211,   168,   117,   154,   202,   142
  };

  const short int
  parser::yypgoto_[] =
  {
    -325,  -325,  -325,  -325,    -2,   -53,   305,   110,   277,  -325,
     -18,   -48,   378,  -325,  -325,  -139,   -45,    14,    18,   161,
    -130,   415,  -325,  -123,  -263,  -257,  -324,    30,    35,  -325,
      91,  -325,  -157,  -112,  -159,  -325,  -325,   -10,  -325,  -325,
    -201,   405,  -325,   -41,  -124,  -325,  -325,   -33,  -325,  -175,
     -76,  -325,  -299,  -325,  -325,  -325,  -325,  -325
  };

  const short int
  parser::yydefgoto_[] =
  {
      -1,     3,     4,    44,    62,   259,   356,   357,    81,    98,
     167,   223,    83,    84,    85,   224,   146,    47,   239,    49,
      50,   142,    51,   308,   309,   189,   419,   179,   389,   390,
     287,   288,   180,   147,   181,   250,    79,    53,    54,   169,
     170,    55,   183,   454,   241,    56,    71,    72,    57,   316,
     198,   442,   396,   199,   202,     7,   331,   332
  };

  const short int
  parser::yytable_[] =
  {
       6,   127,    45,   100,    82,   162,   240,   133,    60,   242,
      64,   201,   246,   247,    68,   336,   238,   291,   168,    45,
     293,   399,    48,   420,   273,   274,   320,    94,   303,   374,
      69,   385,   187,   282,    52,    73,   128,   353,    91,    78,
     212,    45,   264,   265,   148,   305,   131,    67,   210,     1,
       2,   149,   213,   392,     8,   304,   161,   108,   132,   -80,
     -80,   211,   222,     5,   369,   171,    82,   344,   299,    45,
     329,    74,   306,     5,    45,   -80,    52,   300,   354,   129,
     130,    92,   -80,   266,   267,   173,   268,   269,   109,   178,
     108,   150,   301,    58,   270,   271,   249,    93,   151,   -80,
     256,   174,   -80,   261,    45,   262,   272,   190,   279,   131,
     191,   280,   275,   428,   -80,    59,   253,   237,   254,   302,
     221,   132,   131,   437,    66,   343,   317,    45,   463,   318,
     378,   438,   292,   293,   132,   383,   412,   380,   334,   335,
     284,   188,   372,   433,   461,   462,   134,   135,   370,    70,
     255,   161,   381,   161,   161,    86,   161,    52,   434,   409,
     410,   294,   295,   161,   455,   340,   341,    96,   168,   119,
     120,   325,   122,    45,    45,   338,    87,   296,    99,   382,
     124,   384,   101,   110,    45,   435,    45,   134,   135,    45,
     108,   266,   267,   286,   268,   321,   367,   341,   322,   345,
     221,   465,   270,   349,   297,   375,   350,   467,   376,   310,
     144,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     293,   416,   383,   443,   119,   120,   444,   122,   411,   102,
     439,   280,   371,   440,   451,   124,   125,   280,   163,    45,
      45,   164,   398,   368,   341,   379,   401,   134,   135,   165,
     136,   137,   138,   139,   140,   141,   373,   341,   172,   346,
     347,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   436,   406,   341,   184,   383,   417,   418,   430,   341,
     388,    46,   185,   264,   265,   188,   277,    45,    63,   168,
     402,    65,    45,   414,   453,   244,   245,   394,    77,   458,
     425,   188,   422,   221,    90,   192,    95,   193,   206,   195,
     207,   208,    97,   227,   214,   215,   110,   111,   112,   216,
     107,   252,   277,   263,   266,   267,   278,   268,   269,   113,
     145,   281,   432,   283,   298,   270,   271,   264,    95,   114,
     307,   312,    45,   115,   116,   313,    45,   272,   177,   161,
     117,   161,   118,   107,   315,   319,   326,   119,   120,   121,
     122,   123,   415,   197,   197,   203,   421,   328,   124,   125,
     327,   337,   122,   425,    45,   330,   348,   351,   266,   267,
     126,   268,   352,   220,    45,   110,   111,   225,   226,   270,
     271,   228,   395,    45,   286,   391,   229,   230,   166,   231,
     232,   233,   234,   235,   236,   145,    77,   344,   114,   397,
     400,   243,   243,   441,    45,    45,   -82,   -82,   403,   243,
     243,   404,   388,   251,   161,   405,   119,   120,   407,   122,
     123,   408,   -82,   426,   452,   268,   429,   124,   125,   -82,
     427,   445,   446,   276,   447,   209,   448,   456,   449,   126,
     457,   450,    77,   290,    45,   460,   -82,   145,    45,   -82,
     260,   423,   194,   220,   236,    77,   143,   431,    77,   311,
      10,   -82,    11,   -63,   464,   459,   182,     0,   466,    10,
       0,    11,     0,     0,     0,    13,    14,     0,     0,   333,
       0,   197,   197,     0,     0,     0,     0,    15,    20,   339,
       0,    17,    22,     0,   342,     0,     0,    20,   175,     0,
       0,    22,     0,    23,   145,    25,     0,     0,    77,    77,
      61,     0,     0,    32,     0,     0,     0,     0,    35,    29,
      30,    31,    32,    33,    37,    38,     5,    35,     0,    41,
      42,     0,     0,    37,    38,     5,     0,     0,    41,    42,
     176,     0,     0,     0,   311,   243,     0,     0,    10,     0,
      11,   110,   111,     0,    13,     0,   377,     0,     0,   236,
     145,    77,     0,     0,     0,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,    20,   175,     0,     0,
      22,   393,    23,     0,    25,   197,     0,     0,     0,   197,
       0,     0,   119,   120,     0,   122,   123,     0,    29,    30,
      31,    32,   105,   124,   125,   413,    35,   112,    10,     0,
      11,    77,    37,    38,     5,    77,     0,    41,    42,   289,
       0,     0,     0,   264,   265,   136,   137,   138,   139,   140,
     141,     0,   115,   116,     0,     0,    20,     0,     0,   117,
      22,   118,     0,    77,     0,     0,   339,     0,   121,     0,
     145,     0,     0,    77,     0,     0,   110,   111,    61,     0,
       0,    32,    77,     0,   266,   267,    35,   268,   269,     0,
       0,     0,    37,    38,     5,   270,   271,    41,    42,    -2,
       9,     0,     0,    77,    77,    10,     0,    11,     0,     0,
      12,    13,    14,     0,     0,     0,   243,   119,   120,   413,
     122,     0,     0,    15,     0,     0,    16,    17,   124,   125,
       0,    18,    19,    20,    21,     0,     0,    22,     0,    23,
      24,    25,    26,    77,     0,     0,     0,    77,   264,   265,
       0,     0,    27,    28,     0,    29,    30,    31,    32,    33,
      34,     0,     0,    35,     0,    36,     0,     0,     0,    37,
      38,     5,    39,    40,    41,    42,    43,    10,     0,    11,
       0,   110,   111,     0,    14,     0,    10,   204,    11,   266,
     267,     0,   268,    14,     0,     0,     0,     0,     0,    17,
     270,   271,     0,   205,   114,    20,     0,     0,    17,    22,
       0,     0,     0,     0,    20,     0,     0,     0,    22,     0,
      75,     0,   119,   120,     0,   122,   123,    29,     0,   285,
      32,    33,     0,   124,   125,    35,    29,     0,     0,    32,
      33,    37,    38,     5,    35,   126,    41,    42,    76,     0,
      37,    38,     5,     0,     0,    41,    42,    76,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    10,     0,    11,
       0,     0,     0,     0,    14,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,    20,     0,     0,    17,
      22,     0,     0,     0,     0,    20,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,   105,    10,     0,    11,    35,    29,     0,     0,
      32,    33,    37,    38,     5,    35,     0,    41,    42,   106,
       0,    37,    38,     5,     0,   104,    41,    42,    76,     0,
      10,    20,    11,     0,     0,    22,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,   218,    29,     0,     0,    32,   105,    20,   175,
       0,    35,    22,     0,    23,     0,    25,    37,    38,     5,
       0,     0,    41,    42,   186,    10,     0,    11,     0,     0,
      29,    30,    31,    32,   219,    10,     0,    11,    35,     0,
       0,    13,     0,   217,    37,    38,     5,   218,     0,    41,
      42,     0,     0,    20,     0,     0,     0,    22,     0,     0,
       0,     0,     0,    20,    21,     0,     0,    22,     0,    23,
       0,    25,     0,     0,    10,    29,    11,     0,    32,   219,
      13,     0,     0,    35,     0,    61,    30,    31,    32,    37,
      38,     5,     0,    35,    41,    42,     0,     0,     0,    37,
      38,     5,    20,   175,    41,    42,    22,     0,    23,    10,
      25,    11,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    61,    30,    31,    32,    89,     0,
       0,     0,    35,    10,     0,    11,     0,    20,    37,    38,
       5,    22,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   152,     0,   153,    61,
     257,    20,    32,     0,     0,    22,     0,    35,    10,     0,
      11,   386,     0,    37,    38,     5,     0,     0,    41,    42,
       0,     0,     0,    29,   154,     0,    32,   219,   155,     0,
       0,    35,     0,     0,     0,     0,    20,    37,    38,     5,
      22,   258,    41,    42,     0,     0,   156,     0,    10,   157,
      11,   387,    80,     0,   158,     0,     0,    10,    61,    11,
     159,    32,     5,     0,     0,   160,    35,     0,     0,     0,
       0,     0,    37,    38,     5,     0,    20,    41,    42,     0,
      22,     0,     0,     0,     0,    20,     0,     0,    10,    22,
      11,     0,     0,     0,     0,     0,     0,    10,    61,    11,
     196,    32,     0,     0,    14,     0,    35,    61,     0,     0,
      32,     0,    37,    38,     5,    35,    20,    41,    42,     0,
      22,    37,    38,     5,     0,    20,    41,    42,    10,    22,
      11,   200,     0,     0,     0,     0,     0,    10,    61,    11,
     386,    32,     0,     0,     0,     0,    35,    61,     0,     0,
      32,     0,    37,    38,     5,    35,    20,    41,    42,     0,
      22,    37,    38,     5,     0,    20,    41,    42,    10,    22,
      11,   248,     0,     0,     0,     0,     0,   152,    61,   153,
       0,    32,     0,     0,     0,     0,    35,    61,     0,     0,
      32,     0,    37,    38,     5,    35,    20,    41,    42,     0,
      22,    37,    38,     5,     0,   154,    41,    42,   152,   155,
     153,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,    32,   424,     0,     0,     0,    35,   156,     0,     0,
     157,     0,    37,    38,     5,   158,   154,    41,    42,     0,
     155,   159,     0,     5,     0,     0,   160,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   112,   156,     0,
       0,   157,     0,     0,    13,     0,   158,     0,   113,     0,
       0,     0,   159,     0,     5,     0,     0,   160,   114,     0,
       0,     0,   115,   116,     0,     0,     0,    21,     0,   117,
       0,   118,    23,     0,    25,     0,   119,   120,   121,   122,
     123,     0,   110,   111,   112,     0,     0,   124,   125,    30,
      31,    13,     0,     0,     0,   113,     0,     0,     0,   126,
       0,     0,     0,     0,     0,   114,     0,     0,     0,   115,
     116,     0,     0,     0,   175,     0,   117,     0,   118,    23,
       0,    25,     0,   119,   120,   121,   122,   123,     0,   110,
     111,   112,     0,     0,   124,   125,    30,    31,    13,     0,
       0,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,   114,     0,     0,     0,   115,   116,     0,     0,
       0,   175,     0,   117,     0,   118,    23,     0,    25,     0,
     119,   120,   121,   122,   123,   110,   111,   112,     0,     0,
       0,   124,   125,    30,    31,     0,     0,     0,     0,     0,
     110,   111,     0,   126,     0,     0,   323,     0,   114,     0,
       0,     0,   115,   116,     0,     0,     0,   110,   111,   117,
     314,   118,   324,   114,     0,     0,   119,   120,   121,   122,
     123,     0,     0,   110,   111,     0,     0,   124,   125,     0,
     114,   119,   120,     0,   122,   123,   113,     0,     0,   126,
     110,   111,   124,   125,     0,     0,   114,     0,   119,   120,
       0,   122,   123,     0,   126,   264,   265,     0,     0,   124,
     125,   110,   111,   114,   119,   120,     0,   122,   123,     0,
       0,   126,   -81,   -81,     0,   124,   125,     0,   -83,   -83,
       0,   119,   120,     0,   122,   123,     0,   126,   -81,     0,
       0,     0,   124,   125,   -83,   -81,   266,   267,     0,   268,
     269,   -83,   119,   120,   126,   122,   123,   270,   271,     0,
       0,     0,   -81,   124,   125,   -81,   355,     0,   -83,   272,
       0,   -83,     0,     0,     0,   126,     0,   -81,     0,     0,
       0,     0,     0,   -83
  };

  const short int
  parser::yycheck_[] =
  {
       2,    46,     4,    36,    22,    58,   129,    48,    10,   133,
      12,    87,   142,   143,    16,   216,   128,   176,    66,    21,
     177,   320,     4,   347,   163,   164,   201,    29,    25,   286,
      16,   294,    77,   172,     4,    39,    46,    10,    13,    21,
      52,    43,     3,     4,    25,    25,    52,    56,    25,    68,
      69,    32,    64,   310,     0,    52,    58,    43,    64,     9,
      10,    38,   107,    72,    25,    67,    84,    10,   180,    71,
     209,    75,    52,    72,    76,    25,    46,    10,    51,     9,
      10,    56,    32,    44,    45,     9,    47,    48,    38,    71,
      76,    25,    25,     5,    55,    56,   144,    72,    32,    49,
     153,    25,    52,   156,   106,   158,    67,    49,    49,    52,
      52,    52,   165,   370,    64,    25,   149,   127,   151,    52,
     106,    64,    52,   386,    35,   237,    49,   129,   452,    52,
     289,   388,   177,   290,    64,   292,   337,    10,   214,   215,
     173,     9,   281,    10,   443,   444,    14,    15,   278,    25,
     152,   153,    25,   155,   156,    35,   158,   127,    25,   334,
     335,     9,    10,   165,   421,    51,    52,    72,   216,    44,
      45,   204,    47,   175,   176,   220,    35,    25,    25,    52,
      55,   293,    25,     3,   186,    52,   188,    14,    15,   191,
     176,    44,    45,   175,    47,    49,    51,    52,    52,   240,
     186,   458,    55,    49,    52,    49,    52,   464,    52,   191,
      35,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     377,   345,   379,   398,    44,    45,   401,    47,    49,    25,
      49,    52,   280,    52,    49,    55,    56,    52,    38,   241,
     242,    38,   318,    51,    52,   290,   322,    14,    15,     5,
      17,    18,    19,    20,    21,    22,    51,    52,    38,   241,
     242,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   383,    51,    52,    72,   432,     9,    10,    51,    52,
     298,     4,    25,     3,     4,     9,    10,   289,    11,   337,
     323,    14,   294,   341,   417,   134,   135,   315,    21,   429,
     353,     9,   350,   289,    27,    10,    29,    52,    72,    51,
      72,    55,    35,    13,    36,    36,     3,     4,     5,    35,
      43,    25,    10,    38,    44,    45,     9,    47,    48,    16,
      53,    38,   377,    25,    35,    55,    56,     3,    61,    26,
      31,    52,   344,    30,    31,    25,   348,    67,    71,   351,
      37,   353,    39,    76,    10,    25,    55,    44,    45,    46,
      47,    48,   344,    86,    87,    88,   348,    70,    55,    56,
      55,    35,    47,   426,   376,    72,     9,    38,    44,    45,
      67,    47,    51,   106,   386,     3,     4,   110,   111,    55,
      56,   114,     9,   395,   376,    25,   119,   120,    16,   122,
     123,   124,   125,   126,   127,   128,   129,    10,    26,    25,
      25,   134,   135,   395,   416,   417,     9,    10,    70,   142,
     143,    70,   440,   146,   426,    25,    44,    45,    10,    47,
      48,    51,    25,    10,   416,    47,     9,    55,    56,    32,
      51,    25,    25,   166,    72,    38,    25,     9,    50,    67,
      51,    50,   175,   176,   456,    10,    49,   180,   460,    52,
     155,   351,    84,   186,   187,   188,    51,   376,   191,   192,
       6,    64,     8,     9,   456,   440,    71,    -1,   460,     6,
      -1,     8,    -1,    -1,    -1,    12,    13,    -1,    -1,   212,
      -1,   214,   215,    -1,    -1,    -1,    -1,    24,    34,   222,
      -1,    28,    38,    -1,   227,    -1,    -1,    34,    35,    -1,
      -1,    38,    -1,    40,   237,    42,    -1,    -1,   241,   242,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    56,
      57,    58,    59,    60,    70,    71,    72,    64,    -1,    75,
      76,    -1,    -1,    70,    71,    72,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,   277,   278,    -1,    -1,     6,    -1,
       8,     3,     4,    -1,    12,    -1,   289,    -1,    -1,   292,
     293,   294,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      38,   314,    40,    -1,    42,   318,    -1,    -1,    -1,   322,
      -1,    -1,    44,    45,    -1,    47,    48,    -1,    56,    57,
      58,    59,    60,    55,    56,   338,    64,     5,     6,    -1,
       8,   344,    70,    71,    72,   348,    -1,    75,    76,    77,
      -1,    -1,    -1,     3,     4,    17,    18,    19,    20,    21,
      22,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,    37,
      38,    39,    -1,   376,    -1,    -1,   379,    -1,    46,    -1,
     383,    -1,    -1,   386,    -1,    -1,     3,     4,    56,    -1,
      -1,    59,   395,    -1,    44,    45,    64,    47,    48,    -1,
      -1,    -1,    70,    71,    72,    55,    56,    75,    76,     0,
       1,    -1,    -1,   416,   417,     6,    -1,     8,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,   429,    44,    45,   432,
      47,    -1,    -1,    24,    -1,    -1,    27,    28,    55,    56,
      -1,    32,    33,    34,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,   456,    -1,    -1,    -1,   460,     3,     4,
      -1,    -1,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,     6,    -1,     8,
      -1,     3,     4,    -1,    13,    -1,     6,     9,     8,    44,
      45,    -1,    47,    13,    -1,    -1,    -1,    -1,    -1,    28,
      55,    56,    -1,    25,    26,    34,    -1,    -1,    28,    38,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,
      49,    -1,    44,    45,    -1,    47,    48,    56,    -1,    49,
      59,    60,    -1,    55,    56,    64,    56,    -1,    -1,    59,
      60,    70,    71,    72,    64,    67,    75,    76,    77,    -1,
      70,    71,    72,    -1,    -1,    75,    76,    77,     6,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,     8,
      -1,    -1,    -1,    -1,    13,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    28,
      38,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    59,    60,     6,    -1,     8,    64,    56,    -1,    -1,
      59,    60,    70,    71,    72,    64,    -1,    75,    76,    77,
      -1,    70,    71,    72,    -1,    28,    75,    76,    77,    -1,
       6,    34,     8,    -1,    -1,    38,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    56,    -1,    -1,    59,    60,    34,    35,
      -1,    64,    38,    -1,    40,    -1,    42,    70,    71,    72,
      -1,    -1,    75,    76,    77,     6,    -1,     8,    -1,    -1,
      56,    57,    58,    59,    60,     6,    -1,     8,    64,    -1,
      -1,    12,    -1,    24,    70,    71,    72,    28,    -1,    75,
      76,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    -1,    -1,     6,    56,     8,    -1,    59,    60,
      12,    -1,    -1,    64,    -1,    56,    57,    58,    59,    70,
      71,    72,    -1,    64,    75,    76,    -1,    -1,    -1,    70,
      71,    72,    34,    35,    75,    76,    38,    -1,    40,     6,
      42,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    25,    -1,
      -1,    -1,    64,     6,    -1,     8,    -1,    34,    70,    71,
      72,    38,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,     6,    -1,     8,    56,
      10,    34,    59,    -1,    -1,    38,    -1,    64,     6,    -1,
       8,     9,    -1,    70,    71,    72,    -1,    -1,    75,    76,
      -1,    -1,    -1,    56,    34,    -1,    59,    60,    38,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    34,    70,    71,    72,
      38,    51,    75,    76,    -1,    -1,    56,    -1,     6,    59,
       8,    49,    10,    -1,    64,    -1,    -1,     6,    56,     8,
      70,    59,    72,    -1,    -1,    75,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    34,    75,    76,    -1,
      38,    -1,    -1,    -1,    -1,    34,    -1,    -1,     6,    38,
       8,    -1,    -1,    -1,    -1,    -1,    -1,     6,    56,     8,
      49,    59,    -1,    -1,    13,    -1,    64,    56,    -1,    -1,
      59,    -1,    70,    71,    72,    64,    34,    75,    76,    -1,
      38,    70,    71,    72,    -1,    34,    75,    76,     6,    38,
       8,    49,    -1,    -1,    -1,    -1,    -1,     6,    56,     8,
       9,    59,    -1,    -1,    -1,    -1,    64,    56,    -1,    -1,
      59,    -1,    70,    71,    72,    64,    34,    75,    76,    -1,
      38,    70,    71,    72,    -1,    34,    75,    76,     6,    38,
       8,    49,    -1,    -1,    -1,    -1,    -1,     6,    56,     8,
      -1,    59,    -1,    -1,    -1,    -1,    64,    56,    -1,    -1,
      59,    -1,    70,    71,    72,    64,    34,    75,    76,    -1,
      38,    70,    71,    72,    -1,    34,    75,    76,     6,    38,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    59,    51,    -1,    -1,    -1,    64,    56,    -1,    -1,
      59,    -1,    70,    71,    72,    64,    34,    75,    76,    -1,
      38,    70,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    56,    -1,
      -1,    59,    -1,    -1,    12,    -1,    64,    -1,    16,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    75,    26,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    37,
      -1,    39,    40,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,     3,     4,     5,    -1,    -1,    55,    56,    57,
      58,    12,    -1,    -1,    -1,    16,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,
      -1,    42,    -1,    44,    45,    46,    47,    48,    -1,     3,
       4,     5,    -1,    -1,    55,    56,    57,    58,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    37,    -1,    39,    40,    -1,    42,    -1,
      44,    45,    46,    47,    48,     3,     4,     5,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    67,    -1,    -1,     9,    -1,    26,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,     3,     4,    37,
       6,    39,    25,    26,    -1,    -1,    44,    45,    46,    47,
      48,    -1,    -1,     3,     4,    -1,    -1,    55,    56,    -1,
      26,    44,    45,    -1,    47,    48,    16,    -1,    -1,    67,
       3,     4,    55,    56,    -1,    -1,    26,    -1,    44,    45,
      -1,    47,    48,    -1,    67,     3,     4,    -1,    -1,    55,
      56,     3,     4,    26,    44,    45,    -1,    47,    48,    -1,
      -1,    67,     9,    10,    -1,    55,    56,    -1,     9,    10,
      -1,    44,    45,    -1,    47,    48,    -1,    67,    25,    -1,
      -1,    -1,    55,    56,    25,    32,    44,    45,    -1,    47,
      48,    32,    44,    45,    67,    47,    48,    55,    56,    -1,
      -1,    -1,    49,    55,    56,    52,    64,    -1,    49,    67,
      -1,    52,    -1,    -1,    -1,    67,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    64
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    68,    69,    79,    80,    72,    82,   133,     0,     1,
       6,     8,    11,    12,    13,    24,    27,    28,    32,    33,
      34,    35,    38,    40,    41,    42,    43,    53,    54,    56,
      57,    58,    59,    60,    61,    64,    66,    70,    71,    73,
      74,    75,    76,    77,    81,    82,    86,    95,    96,    97,
      98,   100,   105,   115,   116,   119,   123,   126,     5,    25,
      82,    56,    82,    86,    82,    86,    35,    56,    82,    95,
      25,   124,   125,    39,    75,    49,    77,    86,    96,   114,
      10,    86,    88,    90,    91,    92,    35,    35,    13,    25,
      86,    13,    56,    72,    82,    86,    72,    86,    87,    25,
     125,    25,    25,    24,    28,    60,    77,    86,    95,    38,
       3,     4,     5,    16,    26,    30,    31,    37,    39,    44,
      45,    46,    47,    48,    55,    56,    67,    94,   115,     9,
      10,    52,    64,   121,    14,    15,    17,    18,    19,    20,
      21,    22,    99,    99,    35,    86,    94,   111,    25,    32,
      25,    32,     6,     8,    34,    38,    56,    59,    64,    70,
      75,    82,    83,    38,    38,     5,    16,    88,    89,   117,
     118,    82,    38,     9,    25,    35,    77,    86,    96,   105,
     110,   112,   119,   120,    72,    25,    77,    94,     9,   103,
      49,    52,    10,    52,    90,    51,    49,    86,   128,   131,
      49,   128,   132,    86,     9,    25,    72,    72,    55,    38,
      25,    38,    52,    64,    36,    36,    35,    24,    28,    60,
      86,    95,    94,    89,    93,    86,    86,    13,    86,    86,
      86,    86,    86,    86,    86,    86,    86,   115,   111,    96,
     101,   122,   122,    86,    97,    97,    98,    98,    49,    89,
     113,    86,    25,   125,   125,    82,    83,    10,    51,    83,
      84,    83,    83,    38,     3,     4,    44,    45,    47,    48,
      55,    56,    67,    93,    93,    83,    86,    10,     9,    49,
      52,    38,    93,    25,   125,    49,    96,   108,   109,    77,
      86,   112,    94,   110,     9,    10,    25,    52,    35,   111,
      10,    25,    52,    25,    52,    25,    52,    31,   101,   102,
      96,    86,    52,    25,     6,    10,   127,    49,    52,    25,
     127,    49,    52,     9,    25,   125,    55,    55,    70,    93,
      72,   134,   135,    86,   128,   128,   118,    35,    94,    86,
      51,    52,    86,   111,    10,   121,    96,    96,     9,    49,
      52,    38,    51,    10,    51,    64,    84,    85,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    51,    51,    25,
      98,    89,    93,    51,   103,    49,    52,    86,   112,    94,
      10,    25,    52,   110,   111,   102,     9,    49,    88,   106,
     107,    25,   103,    86,    88,     9,   130,    25,   128,   130,
      25,   128,   125,    70,    70,    25,    51,    10,    51,   127,
     127,    49,   118,    86,    89,    96,   122,     9,    10,   104,
     104,    96,    89,    85,    51,    83,    10,    51,   103,     9,
      51,   108,    94,    10,    25,    52,   111,   102,   103,    49,
      52,    96,   129,   127,   127,    25,    25,    72,    25,    50,
      50,    49,    96,   101,   121,   103,     9,    51,    98,   106,
      10,   130,   130,   104,    96,   103,    96,   103
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    78,    79,    79,    80,    80,    81,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    97,
      97,    98,    98,    98,    99,    99,    99,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   106,   106,   107,   107,   108,
     109,   109,   110,   110,   110,   110,   111,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   118,   118,   119,   119,   119,
     120,   121,   121,   122,   122,   122,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   126,   126,   126,
      81,    81,    81,    81,    81,    81,    81,   127,   127,   128,
     128,   129,   129,   130,   130,   130,    81,    81,   131,   131,
     132,   132,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,   133,    81,    81,    81,    81,    81,
     134,   134,   135,   135,    81,    81,    81,    81,    81
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     2,     2,     2,     0,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     3,     4,     4,     5,     3,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     4,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     0,     2,     1,     1,     0,     2,     3,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     5,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     3,     4,     5,     1,     4,     4,     2,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     1,     0,     2,     0,     2,     0,
       1,     1,     1,     1,     1,     2,     2,     1,     3,     2,
       1,     3,     2,     3,     3,     4,     1,     2,     0,     3,
       4,     2,     6,     4,     2,     4,     3,     4,     2,     3,
       3,     4,     2,     4,     6,     1,     0,     4,     5,     6,
       3,     1,     1,     3,     4,     0,     5,     5,     7,     3,
       3,     3,     3,     3,     4,     4,     5,     5,     3,     3,
       0,     3,     3,     4,     5,     3,     3,     1,     1,     1,
       2,     3,     2,     2,     3,     3,     2,     2,     0,     3,
       1,     1,     3,     2,     1,     0,     6,     6,     3,     5,
       3,     5,     4,     4,     5,     5,     5,     6,     2,     4,
       3,     6,     5,     4,     3,     5,     2,     2,     3,     5,
       3,     1,     0,     1,     6,     3,     4,     4,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"<EOF>\"", "error", "$undefined", "\"+\"", "\"&\"", "\"=\"", "\"@\"",
  "\"#base\"", "\"~\"", "\":\"", "\",\"", "\"#const\"", "\"#count\"",
  "\"$\"", "\"$+\"", "\"$-\"", "\"$*\"", "\"$<=\"", "\"$<\"", "\"$>\"",
  "\"$>=\"", "\"$=\"", "\"$!=\"", "\"#cumulative\"", "\"#disjoint\"",
  "\".\"", "\"..\"", "\"#external\"", "\"#false\"", "\"#forget\"",
  "\">=\"", "\">\"", "\":-\"", "\"#include\"", "\"#inf\"", "\"{\"",
  "\"[\"", "\"<=\"", "\"(\"", "\"<\"", "\"#max\"", "\"#maximize\"",
  "\"#min\"", "\"#minimize\"", "\"\\\\\"", "\"*\"", "\"!=\"", "\"**\"",
  "\"?\"", "\"}\"", "\"]\"", "\")\"", "\";\"", "\"#show\"", "\"#showsig\"",
  "\"/\"", "\"-\"", "\"#sum\"", "\"#sum+\"", "\"#sup\"", "\"#true\"",
  "\"#program\"", "UBNOT", "UMINUS", "\"|\"", "\"#volatile\"", "\":~\"",
  "\"^\"", "\"<program>\"", "\"<define>\"", "\"<NUMBER>\"",
  "\"<ANONYMOUS>\"", "\"<IDENTIFIER>\"", "\"<PYTHON>\"", "\"<LUA>\"",
  "\"<STRING>\"", "\"<VARIABLE>\"", "\"not\"", "$accept", "start",
  "program", "statement", "identifier", "constterm", "consttermvec",
  "constargvec", "term", "unaryargvec", "ntermvec", "termvec", "tuple",
  "tuplevec_sem", "tuplevec", "argvec", "cmp", "atom", "literal",
  "csp_mul_term", "csp_add_term", "csp_rel", "csp_literal", "nlitvec",
  "litvec", "optcondition", "noptcondition", "aggregatefunction",
  "bodyaggrelem", "bodyaggrelemvec", "altbodyaggrelem",
  "altbodyaggrelemvec", "bodyaggregate", "upper", "lubodyaggregate",
  "headaggrelemvec", "altheadaggrelemvec", "headaggregate",
  "luheadaggregate", "ncspelemvec", "cspelemvec", "disjoint",
  "conjunction", "dsym", "disjunctionsep", "disjunction", "bodycomma",
  "bodydot", "head", "optimizetuple", "optimizeweight", "optimizelitvec",
  "optimizecond", "maxelemlist", "minelemlist", "define", "nidlist",
  "idlist", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,   286,   286,   287,   291,   292,   298,   302,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   338,   339,   343,   344,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   380,   381,
     388,   389,   393,   394,   398,   399,   400,   401,   404,   405,
     408,   409,   412,   413,   426,   427,   428,   429,   430,   431,
     435,   436,   437,   438,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   458,   459,   460,
     461,   465,   466,   467,   471,   472,   473,   474,   475,   476,
     480,   481,   489,   490,   494,   495,   499,   500,   504,   505,
     509,   510,   511,   512,   513,   521,   522,   526,   527,   533,
     537,   538,   544,   545,   546,   547,   551,   552,   553,   557,
     558,   559,   567,   568,   572,   573,   579,   580,   581,   582,
     586,   587,   588,   595,   596,   600,   601,   605,   606,   607,
     614,   621,   622,   626,   627,   628,   633,   634,   635,   636,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   659,   660,   661,   662,   663,   664,   668,   669,   670,
     674,   675,   676,   677,   684,   685,   686,   693,   694,   698,
     699,   703,   704,   708,   709,   710,   714,   715,   719,   720,
     724,   725,   729,   730,   731,   732,   739,   740,   741,   742,
     743,   744,   745,   746,   753,   757,   764,   765,   772,   773,
     780,   781,   785,   786,   790,   791,   798,   799,   800
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77
    };
    const unsigned int user_token_number_max_ = 332;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 23 "libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:1167
} } } // Gringo::Input::NonGroundGrammar
#line 3010 "build/release/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:1167
