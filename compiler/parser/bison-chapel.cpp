/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0




/* Copy the first part of user declarations.  */

#line 67 "bison-chapel.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison-chapel.h".  */
#ifndef YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
# define YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "chapel.ypp" /* yacc.c:355  */

  extern int  captureTokens;
  extern char captureString[1024];
#line 44 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);
  void stringBufferInit();

  #endif
#line 64 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_1_
  #define _BISON_CHAPEL_DEFINES_1_

  #include "symbol.h"

  #include <cstdio>

  class ArgSymbol;
  class BlockStmt;
  class CallExpr;
  class DefExpr;
  class EnumType;
  class Expr;
  class FnSymbol;
  class Type;

  enum   ProcIter {
    ProcIter_PROC,
    ProcIter_ITER
  };

  struct IntentExpr {
    Expr*  first;
    Expr*  second;
  };

  // The lexer only uses pch.
  // The remaining types are for parser productions
  union  YYSTYPE {
    const char*       pch;

    Vec<const char*>* vpch;
    RetTag            retTag;
    bool              b;
    IntentTag         pt;
    Expr*             pexpr;
    DefExpr*          pdefexpr;
    CallExpr*         pcallexpr;
    BlockStmt*        pblockstmt;
    Type*             ptype;
    EnumType*         penumtype;
    FnSymbol*         pfnsymbol;
    Flag              flag;
    ProcIter          procIter;
    FlagSet*          flagSet;
    IntentExpr        pIntentExpr;
  };

  #endif
#line 120 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_2_
  #define _BISON_CHAPEL_DEFINES_2_

  struct YYLTYPE {
    int         first_line;
    int         first_column;
    int         last_line;
    int         last_column;
    const char* comment;
  };

  #define YYLTYPE_IS_DECLARED 1
  #define YYLTYPE_IS_TRIVIAL  1

  #endif
#line 142 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_3_
  #define _BISON_CHAPEL_DEFINES_3_

  class ParserContext {
  public:
    ParserContext()
    {
      scanner       = 0;
      latestComment = 0;
      generatedStmt = 0;
    }

    ParserContext(yyscan_t scannerIn)
    {
      scanner       = scannerIn;
      latestComment = 0;
      generatedStmt = 0;
    }

    yyscan_t    scanner;
    const char* latestComment;
    BaseAST*    generatedStmt;
  };

  #endif

#line 212 "bison-chapel.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TIDENT = 258,
    INTLITERAL = 259,
    REALLITERAL = 260,
    IMAGLITERAL = 261,
    STRINGLITERAL = 262,
    CSTRINGLITERAL = 263,
    EXTERNCODE = 264,
    TALIGN = 265,
    TATOMIC = 266,
    TBEGIN = 267,
    TBREAK = 268,
    TBY = 269,
    TCLASS = 270,
    TCOBEGIN = 271,
    TCOFORALL = 272,
    TCONFIG = 273,
    TCONST = 274,
    TCONTINUE = 275,
    TDELETE = 276,
    TDMAPPED = 277,
    TDO = 278,
    TDOMAIN = 279,
    TELSE = 280,
    TENUM = 281,
    TEXPORT = 282,
    TEXTERN = 283,
    TFOR = 284,
    TFORALL = 285,
    TIF = 286,
    TIN = 287,
    TINDEX = 288,
    TINLINE = 289,
    TINOUT = 290,
    TITER = 291,
    TLABEL = 292,
    TLAMBDA = 293,
    TLET = 294,
    TLOCAL = 295,
    TMINUSMINUS = 296,
    TMODULE = 297,
    TNEW = 298,
    TNIL = 299,
    TNOINIT = 300,
    TON = 301,
    TOTHERWISE = 302,
    TOUT = 303,
    TPARAM = 304,
    TPLUSPLUS = 305,
    TPRAGMA = 306,
    TPRIMITIVE = 307,
    TPRIVATE = 308,
    TPROC = 309,
    TPUBLIC = 310,
    TRECORD = 311,
    TREDUCE = 312,
    TREF = 313,
    TREQUIRE = 314,
    TRETURN = 315,
    TSCAN = 316,
    TSELECT = 317,
    TSERIAL = 318,
    TSINGLE = 319,
    TSPARSE = 320,
    TSUBDOMAIN = 321,
    TSYNC = 322,
    TTHEN = 323,
    TTYPE = 324,
    TUNDERSCORE = 325,
    TUNION = 326,
    TUSE = 327,
    TVAR = 328,
    TWHEN = 329,
    TWHERE = 330,
    TWHILE = 331,
    TWITH = 332,
    TYIELD = 333,
    TZIP = 334,
    TALIAS = 335,
    TAND = 336,
    TASSIGN = 337,
    TASSIGNBAND = 338,
    TASSIGNBOR = 339,
    TASSIGNBXOR = 340,
    TASSIGNDIVIDE = 341,
    TASSIGNEXP = 342,
    TASSIGNLAND = 343,
    TASSIGNLOR = 344,
    TASSIGNMINUS = 345,
    TASSIGNMOD = 346,
    TASSIGNMULTIPLY = 347,
    TASSIGNPLUS = 348,
    TASSIGNSL = 349,
    TASSIGNSR = 350,
    TBAND = 351,
    TBNOT = 352,
    TBOR = 353,
    TBXOR = 354,
    TCOLON = 355,
    TCOMMA = 356,
    TDIVIDE = 357,
    TDOT = 358,
    TDOTDOT = 359,
    TDOTDOTDOT = 360,
    TEQUAL = 361,
    TEXP = 362,
    TGREATER = 363,
    TGREATEREQUAL = 364,
    THASH = 365,
    TLESS = 366,
    TLESSEQUAL = 367,
    TMINUS = 368,
    TMOD = 369,
    TNOT = 370,
    TNOTEQUAL = 371,
    TOR = 372,
    TPLUS = 373,
    TQUESTION = 374,
    TSEMI = 375,
    TSHIFTLEFT = 376,
    TSHIFTRIGHT = 377,
    TSTAR = 378,
    TSWAP = 379,
    TIO = 380,
    TLCBR = 381,
    TRCBR = 382,
    TLP = 383,
    TRP = 384,
    TLSBR = 385,
    TRSBR = 386,
    TNOELSE = 387,
    TUPLUS = 388,
    TUMINUS = 389
  };
#endif

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct yypstate yypstate;

int yypush_parse (yypstate *ps, int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, ParserContext* context);

yypstate * yypstate_new (void);
void yypstate_delete (yypstate *ps);
/* "%code provides" blocks.  */
#line 173 "chapel.ypp" /* yacc.c:355  */

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);

#line 392 "bison-chapel.cpp" /* yacc.c:355  */

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 398 "bison-chapel.cpp" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 38 "chapel.ypp" /* yacc.c:359  */

  int         captureTokens;
  char        captureString[1024];
#line 181 "chapel.ypp" /* yacc.c:359  */

  #include "build.h"
  #include "DoWhileStmt.h"
  #include "driver.h"
  #include "flex-chapel.h"
  #include "ForLoop.h"
  #include "parser.h"
  #include "stmt.h"
  #include "stringutil.h"
  #include "vec.h"
  #include "WhileDoStmt.h"

  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <stdint.h>

  static int query_uid = 1;

  #define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
    if (N) {                                                              \
      (Current).first_line   = (Rhs)[1].first_line;                       \
      (Current).first_column = (Rhs)[1].first_column;                     \
      (Current).last_line    = (Rhs)[N].last_line;                        \
      (Current).last_column  = (Rhs)[N].last_column;                      \
      (Current).comment      = NULL;                                      \
                                                                          \
      if ((Current).first_line)                                           \
        yystartlineno = (Current).first_line;                             \
                                                                          \
    } else  {                                                             \
      (Current) = yylloc;                                                 \
    }

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str) {
    // TODO -- should this begin with error:
    if (!chplParseString) {
      const char* yyText = yyget_text(context->scanner);

      fprintf(stderr, "%s:%d: %s", yyfilename, chplLineno, str);

      if (strlen(yyText) > 0) {
        fprintf(stderr, ": near '%s'", yyText);
      }
    } else {
      fprintf(stderr, "%s: %s", yyfilename, str);

      if (chplParseStringMsg && (strlen(chplParseStringMsg) > 0)) {
        fprintf(stderr, " %s", chplParseStringMsg);
      }
    }

    fprintf(stderr, "\n");

    clean_exit(1);
  }

#line 464 "bison-chapel.cpp" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10882

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  135
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  429
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  818

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   389

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   404,   404,   409,   410,   416,   417,   422,   423,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   457,   459,   464,   465,   466,
     481,   482,   487,   488,   493,   497,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   519,   520,   524,   528,   529,   533,   534,   538,   539,
     543,   544,   545,   546,   547,   548,   549,   553,   554,   558,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   595,   601,   607,
     613,   620,   630,   634,   635,   636,   637,   641,   646,   647,
     651,   653,   660,   665,   673,   678,   683,   691,   692,   697,
     698,   700,   705,   715,   724,   728,   736,   737,   742,   747,
     741,   772,   778,   785,   793,   804,   810,   803,   838,   842,
     847,   851,   859,   860,   861,   862,   863,   864,   865,   866,
     867,   868,   869,   870,   871,   872,   873,   874,   875,   876,
     877,   878,   879,   880,   881,   882,   883,   884,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     903,   904,   908,   912,   913,   914,   918,   920,   922,   924,
     929,   930,   931,   932,   933,   934,   935,   936,   937,   938,
     942,   943,   944,   945,   949,   950,   954,   955,   956,   957,
     958,   962,   963,   967,   968,   972,   974,   979,   980,   984,
     985,   989,   990,   994,   996,   998,  1003,  1016,  1033,  1034,
    1036,  1041,  1048,  1055,  1062,  1070,  1079,  1080,  1081,  1085,
    1086,  1094,  1096,  1102,  1107,  1109,  1111,  1116,  1118,  1120,
    1127,  1128,  1129,  1133,  1134,  1139,  1140,  1141,  1142,  1162,
    1166,  1170,  1178,  1182,  1183,  1184,  1188,  1190,  1196,  1198,
    1200,  1205,  1206,  1207,  1208,  1209,  1210,  1211,  1217,  1218,
    1219,  1220,  1224,  1225,  1226,  1230,  1231,  1235,  1236,  1240,
    1241,  1245,  1246,  1247,  1248,  1249,  1253,  1264,  1265,  1266,
    1267,  1268,  1269,  1271,  1273,  1275,  1277,  1279,  1281,  1286,
    1288,  1290,  1292,  1294,  1296,  1298,  1300,  1302,  1304,  1306,
    1308,  1310,  1317,  1323,  1329,  1335,  1344,  1349,  1357,  1358,
    1359,  1360,  1361,  1362,  1363,  1364,  1369,  1370,  1374,  1378,
    1380,  1388,  1398,  1402,  1403,  1408,  1413,  1421,  1422,  1423,
    1424,  1425,  1426,  1427,  1428,  1429,  1431,  1433,  1435,  1437,
    1439,  1444,  1445,  1446,  1447,  1458,  1459,  1463,  1464,  1465,
    1469,  1470,  1471,  1479,  1480,  1481,  1485,  1486,  1487,  1488,
    1489,  1490,  1491,  1492,  1499,  1500,  1504,  1505,  1506,  1507,
    1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,
    1518,  1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1530,
    1531,  1532,  1533,  1534,  1535,  1539,  1540,  1541,  1542,  1546,
    1547,  1548,  1549,  1554,  1555,  1556,  1557,  1558,  1559,  1560
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "INTLITERAL", "REALLITERAL",
  "IMAGLITERAL", "STRINGLITERAL", "CSTRINGLITERAL", "EXTERNCODE", "TALIGN",
  "TATOMIC", "TBEGIN", "TBREAK", "TBY", "TCLASS", "TCOBEGIN", "TCOFORALL",
  "TCONFIG", "TCONST", "TCONTINUE", "TDELETE", "TDMAPPED", "TDO",
  "TDOMAIN", "TELSE", "TENUM", "TEXPORT", "TEXTERN", "TFOR", "TFORALL",
  "TIF", "TIN", "TINDEX", "TINLINE", "TINOUT", "TITER", "TLABEL",
  "TLAMBDA", "TLET", "TLOCAL", "TMINUSMINUS", "TMODULE", "TNEW", "TNIL",
  "TNOINIT", "TON", "TOTHERWISE", "TOUT", "TPARAM", "TPLUSPLUS", "TPRAGMA",
  "TPRIMITIVE", "TPRIVATE", "TPROC", "TPUBLIC", "TRECORD", "TREDUCE",
  "TREF", "TREQUIRE", "TRETURN", "TSCAN", "TSELECT", "TSERIAL", "TSINGLE",
  "TSPARSE", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTYPE", "TUNDERSCORE",
  "TUNION", "TUSE", "TVAR", "TWHEN", "TWHERE", "TWHILE", "TWITH", "TYIELD",
  "TZIP", "TALIAS", "TAND", "TASSIGN", "TASSIGNBAND", "TASSIGNBOR",
  "TASSIGNBXOR", "TASSIGNDIVIDE", "TASSIGNEXP", "TASSIGNLAND",
  "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD", "TASSIGNMULTIPLY",
  "TASSIGNPLUS", "TASSIGNSL", "TASSIGNSR", "TBAND", "TBNOT", "TBOR",
  "TBXOR", "TCOLON", "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT",
  "TEQUAL", "TEXP", "TGREATER", "TGREATEREQUAL", "THASH", "TLESS",
  "TLESSEQUAL", "TMINUS", "TMOD", "TNOT", "TNOTEQUAL", "TOR", "TPLUS",
  "TQUESTION", "TSEMI", "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP",
  "TIO", "TLCBR", "TRCBR", "TLP", "TRP", "TLSBR", "TRSBR", "TNOELSE",
  "TUPLUS", "TUMINUS", "$accept", "program", "toplevel_stmt_ls",
  "toplevel_stmt", "pragma_ls", "stmt", "module_decl_stmt",
  "access_control", "block_stmt", "stmt_ls", "use_stmt", "require_stmt",
  "assignment_stmt", "opt_ident", "ident", "opt_ident_or_string",
  "do_stmt", "return_stmt", "class_level_stmt", "private_decl",
  "extern_block_stmt", "loop_stmt", "zippered_iterator", "if_stmt",
  "select_stmt", "when_stmt_ls", "when_stmt", "class_decl_stmt",
  "class_tag", "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt",
  "enum_ls", "enum_item", "lambda_decl_expr", "$@1", "$@2", "linkage_spec",
  "fn_decl_stmt", "$@3", "$@4", "fn_decl_stmt_inner", "fn_ident",
  "assignop_ident", "opt_formal_ls", "req_formal_ls", "formal_ls",
  "formal", "opt_intent_tag", "opt_this_intent_tag", "proc_or_iter",
  "opt_ret_tag", "opt_function_body_stmt", "function_body_stmt",
  "query_expr", "opt_query_expr", "var_arg_expr", "opt_where_part",
  "type_alias_decl_stmt", "type_alias_decl_stmt_inner", "opt_init_type",
  "var_decl_stmt", "opt_config", "var_decl_stmt_inner_ls",
  "var_decl_stmt_inner", "tuple_var_decl_component",
  "tuple_var_decl_stmt_inner_ls", "opt_init_expr", "opt_reindex_expr",
  "opt_type", "array_type", "opt_formal_array_elt_type",
  "formal_array_type", "opt_formal_type", "expr_ls", "tuple_component",
  "tuple_expr_ls", "opt_actual_ls", "actual_ls", "actual_expr",
  "ident_expr", "type_level_expr", "for_expr", "cond_expr", "nil_expr",
  "stmt_level_expr", "opt_task_intent_ls", "task_intent_clause",
  "task_intent_ls", "intent_expr", "io_expr", "new_expr", "let_expr",
  "expr", "lhs_expr", "fun_expr", "call_expr", "dot_expr",
  "parenthesized_expr", "literal_expr", "assoc_expr_ls", "binary_op_expr",
  "unary_op_expr", "reduce_expr", "scan_expr", "reduce_scan_op_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389
};
# endif

#define YYPACT_NINF -685

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-685)))

#define YYTABLE_NINF -383

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -685,    63,  2168,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  3436,   -27,    74,  -685,   -27,  6223,    42,    74,  6223,
    3436,   -34,    74,   296,   544,  5234,  6223,  6223,   -20,  -685,
      74,  -685,    17,  3436,  6223,  6223,  -685,  6223,  6223,   134,
      16,   601,   791,  -685,  5418,  5521,  6223,  5649,  6223,    92,
      75,  3436,    74,  -685,  5418,  6223,  6223,  -685,  -685,  6223,
    -685,  -685,  1248,  6223,  6223,  -685,  6223,  -685,  -685,  2668,
    5028,  5418,  -685,  3308,  -685,  -685,   162,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
      74,  -685,    81,   164,  -685,  -685,  -685,   137,   150,  -685,
    -685,  -685,   159,   166,    87,   167,   191, 10759,  1938,   182,
     205,   223,  -685,  -685,  -685,  -685,  -685,  -685,   247,  -685,
   10759,   193,  3436,  -685,   230,  -685,   244,  6223,  6223,  6223,
    6223,  6223,  5418,  5418,   233,  -685,  -685,  -685,  -685,  8537,
     269,  -685,  -685,    74,   271,  8727,   338,  5418,   298,  -685,
    -685,  -685,  -685,    74,    68,    74,   295,    57,  7585,  7541,
    7723,  5418,  3436,   306,    36,    60,    33,  -685,  -685,   847,
     333,  7786,   847,  -685,  5418,  -685,   264,  -685,  -685,    74,
    -685,    93, 10759,  -685,  8785,  8416,  3436,  -685,  -685,  7786,
   10759,   316,  5418,  -685, 10759,   364,   330,    96,  7786,  8843,
     274,  1069,   847,   274,   847,  -685,  -685,  2796,    90,  -685,
    6223,  -685,    -6,    -3, 10759,   261,  8901,   -17,   444,  -685,
      74,   354,  -685,  -685,  -685,    18,    17,    17,    17,  -685,
    6223,  6223,  6223,  6223,  5730,  5730,  6223,  6223,  6223,  6223,
    6223,  6223,    88,  1248,  6223,  6223,  6223,  6223,  6223,  6223,
    6223,  6223,  6223,  6223,  6223,  6223,  6223,  6223,  6223,  6223,
    6223,  6223,  6223,  6223,  6223,  6223,  6223,  6223,  6223,  6223,
    6223,  6223,  6223,  6223,  5418,  5418,  5730,  5730,   670,  -685,
    -685,  2924,  -685,  8606,  8669,  8964,    58,  5730,    57,   335,
    -685,  -685,  6223,   326,  -685,   328,   357,  -685, 10759,    74,
     343,    74,   432,  5418,  -685,  3564,  5730,  -685,  3692,  5730,
    -685,    57,  3436,   441,   342,  -685,    38,  -685,  -685,    36,
    -685,   375,   348,  -685,  2331,   400,   403,  6223,    17,  -685,
     358,  -685,  -685,  5418,  -685,  -685,  -685,  -685,  -685,  5418,
     363,  4844,   396,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    7436,  5131,  -685,  5315,  -685,  5730,  2540,   367,  6223,  6223,
    -685,  -685,   374,  5418,   382,   219,    17,   189,   231,   287,
     289,  8474,  2364,  2364,   345,  -685,   345,  -685,   345,  2394,
     577,  1423,   411,   333,   274,  -685,  -685,  -685,  1069,  1548,
     345,  1365,  1365,  2364,  1365,  1365,  1101,   274,  1548,  7051,
    1101,   847,   847,   274,  9027,  9085,  9143,  9201,  9259,  9317,
    9375,  9433,  9491,  9549,  9607,  9665,  9723,  9781,  9839,   372,
     378,  -685,   345,  -685,   345,    67,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,    74,    46,  -685,   455,  6304,  5730,  6385,
    5730,  6223,  5730,  7055,   -27,  9897,  -685,  -685,  9955,  6223,
    5418,  -685,  5418,   434,   104,  -685,  -685,   354,  6223,    64,
    6223, 10759,    59,  7849,  6223, 10759,    56,  7655,  -685,   490,
   10013,  3436,  -685,    73,  -685,    39,   320,   388,    36,    70,
    -685,  5418,  -685,   259,  6223,  5833,  -685, 10759,  -685,  -685,
    -685, 10759,     0,   397,  -685,  5418,  -685,   293,    74,  -685,
    -685,  -685,  -685,   -31,  7229,  -685, 10759,  3436, 10759, 10071,
    3052,   426,  -685,  -685,  -685,  -685,  -685,  7113,   297,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,   670,  -685,    74,  6223,   505, 10134,  6223,
     506, 10197,   399,  7263,    57,    57,  -685, 10759,  -685, 10759,
    -685,  6223,    74,  -685,   405,  7786,  -685,  7912,  3820,  -685,
    3948,  -685,  7975,  4076,  -685,    57,  4204,  -685,    57,  3436,
    6223,  -685,   352,  -685,    36,   440,  -685,  -685,  -685,  -685,
      29,  -685,  -685,  4844,   403,    61, 10759,  -685, 10759,  3436,
    5418,  -685,  -685,  -685,    77,  -685,  4332,   410,  4460,   412,
    -685,  6223,  -685,  3180,   902,   320,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,    74,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,   439,   416,   416,  -685,  -685,  -685, 10255,  6466,
    6547, 10318,  6628,  6709,  6790,  6871,  -685,  -685, 10759,  -685,
    -685,  -685,  3436,  6223, 10759,  6223, 10759,  3436,  6223, 10759,
    -685,  6223, 10759,  -685,  -685, 10759,  -685,   417,  5914,   201,
     473,  -685,  5730,  4588,  -685,     9,  4716,  6223,  -685, 10759,
    3436,  6223,  -685, 10759,  3436, 10759,  -685,   346,   596,   596,
    -685,   468,  -685,    28,  -685,  7113,    38,  -685,  -685,  6223,
    6223,  6223,  6223,  6223,  6223,  6223,  6223,  1024, 10013,  8038,
    8101, 10013,  8164,  8227,   440,   -34,  6223,  6223,  4925,  -685,
    -685,   311,  5418,  -685,  -685,  6223,    25,  7297,  -685,   336,
    -685,  8290,  -685,  8353,  -685,  -685,   473,  -685,   416,   416,
      86, 10381, 10444, 10507, 10570, 10633, 10696,  -685,  3436,  3436,
    3436,  3436,   201,  6017,    83,  -685,  -685, 10759, 10759,  -685,
    -685,  -685,  6871,  3436,  3436,    53,  -685,  -685,  -685,  6223,
    6223,  6223,  6223,  6223,  6223, 10013, 10013, 10013, 10013,  -685,
    -685,  -685,  -685,  -685,   377,  5730,  6952,   545, 10013, 10013,
    -685,  -685,  -685,  7402,  -685,  -685,  6120,  -685
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,    34,    63,   376,   377,   378,   379,
     380,     0,   336,    61,   114,   336,     0,   237,    61,     0,
       0,     0,     0,    61,    61,     0,     0,     0,     0,   132,
       0,   128,     0,     0,     0,     0,   327,     0,     0,     0,
       0,   236,   236,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   425,   427,     0,
     428,   429,   360,     0,     0,   426,   423,    70,   424,     0,
       0,     0,     4,     0,     5,     9,     0,    10,    11,    12,
      14,   296,    19,    13,    71,    15,    17,    16,    18,    76,
       0,    74,   352,     0,    77,    75,    78,     0,   361,   348,
     349,   299,   297,     0,     0,   353,   354,     0,   298,     0,
     362,   363,   364,   347,   301,   300,   350,   351,     0,    21,
     307,     0,     0,   337,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   361,   297,   353,   354,   336,
     298,   362,   363,     0,     0,     0,     0,   287,     0,    65,
      64,   133,    79,     0,   134,     0,     0,     0,     0,     0,
       0,   287,     0,     0,     0,     0,     0,   239,    28,   411,
     345,     0,   412,     7,   287,   237,   238,    73,    72,   216,
     279,     0,   278,    68,     0,     0,     0,    67,    31,     0,
     302,     0,   287,    32,   308,   228,     0,     0,     0,     0,
     414,   359,   410,   413,   409,    40,    42,     0,     0,   282,
       0,   284,     0,     0,   283,     0,   278,     0,     0,     6,
       0,   117,   205,   204,   135,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   287,   287,     0,     0,   190,    22,
      23,     0,    24,     0,     0,     0,     0,     0,     0,     0,
      25,    26,     0,   296,   294,     0,   288,   289,   295,     0,
       0,     0,     0,     0,    88,     0,     0,    87,     0,     0,
      94,     0,     0,   104,     0,    27,   183,   129,   244,     0,
     245,   247,     0,   258,     0,     0,   250,     0,     0,    29,
       0,   134,   215,     0,    45,    69,   108,    66,    30,   287,
       0,     0,   226,   223,    44,    81,    33,    41,    43,   381,
       0,     0,   373,     0,   375,     0,     0,     0,     0,     0,
     383,     8,     0,     0,     0,   200,     0,     0,     0,     0,
       0,   335,   406,   405,   408,   416,   415,   420,   419,   402,
     399,   400,   401,   356,   389,   372,   371,   370,   357,   393,
     404,   398,   396,   407,   397,   395,   387,   392,   394,   403,
     386,   390,   391,   388,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   418,   417,   422,   421,   194,   191,   192,   193,   197,
     198,   199,   423,     0,     0,   339,     0,     0,     0,     0,
       0,     0,     0,   382,   336,   336,    84,   224,     0,     0,
       0,   304,     0,   126,     0,   123,   225,   117,     0,     0,
       0,   311,     0,     0,     0,   317,     0,     0,    95,   103,
       0,     0,   303,     0,   184,     0,   206,     0,   248,     0,
     262,     0,   257,   348,     0,     0,   241,   346,   240,   369,
     281,   280,     0,     0,   305,     0,   230,   348,     0,   355,
     374,   285,   286,     0,     0,   100,   321,     0,   384,     0,
       0,   118,   119,   201,   202,   203,   136,     0,     0,   232,
     231,   233,   235,    46,    53,    54,    55,    50,    52,    59,
      60,    48,    51,    49,    47,    57,    56,    58,   367,   368,
     195,   196,   341,   190,   338,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,   293,   291,   292,
     290,     0,   124,   122,     0,     0,   102,     0,     0,    86,
       0,    85,     0,     0,    92,     0,     0,    90,     0,     0,
       0,   106,   190,   182,     0,   271,   207,   209,   208,   210,
       0,   246,   249,     0,   250,     0,   242,   251,   252,     0,
       0,   107,   109,   306,     0,   227,     0,     0,     0,     0,
     101,     0,    35,     0,   236,   206,   165,   163,   168,   175,
     176,   177,   172,   174,   170,   173,   171,   169,   179,   178,
     144,   147,   145,   146,   157,   148,   161,   153,   151,   164,
     152,   150,   155,   160,   162,   149,   154,   158,   159,   156,
     166,   167,   142,   180,   180,   234,   340,   342,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    82,   127,   125,
     119,    89,     0,     0,   310,     0,   309,     0,     0,   316,
      93,     0,   315,    91,   105,   326,   185,     0,     0,   250,
     221,   243,     0,     0,   111,     0,     0,     0,    98,   323,
       0,     0,    96,   322,     0,   385,    36,    61,   236,   236,
     112,   236,   120,     0,   143,     0,   183,   138,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   236,   314,     0,
       0,   320,     0,     0,   271,   274,   275,   276,     0,   273,
     277,   348,   217,   187,   186,     0,     0,     0,   260,   348,
     110,     0,    99,     0,    97,   121,   221,   142,   180,   180,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,   250,   263,     0,   218,   220,   219,   222,   213,
     214,   130,     0,     0,     0,     0,   140,   141,   181,     0,
       0,     0,     0,     0,     0,   313,   312,   319,   318,   189,
     188,   265,   266,   268,   348,     0,   382,   348,   325,   324,
     211,   137,   212,     0,   267,   269,   263,   270
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -685,  -685,  -685,    -1,  -589,  1809,  -685,  -685,  1170,    45,
    -685,  -685,  -685,   260,  1827,    -4,   433,  -684,  -558,   -35,
    -685,  -685,    50,  -685,  -685,  -685,  -685,  -685,   395,    95,
    -114,  -685,  -685,     2,   313,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -157,  -155,  -582,  -685,  -150,   -21,  -274,  -685,
    -685,   -47,  -685,  -215,   128,  -685,  -201,  -184,  -685,  -141,
    -685,  -685,  -685,  -159,   245,  -685,  -310,  -584,  -685,  -441,
    -338,  -499,  -676,  -160,    10,    69,  -685,  -143,  -685,   123,
     303,  -313,  -685,  -685,   534,  -685,    -2,  -137,  -685,    40,
    -685,   824,   963,   -11,  1104,  -685,  1194,  1373,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -261
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   206,    73,   469,    75,    76,    77,   207,
      78,    79,    80,   150,    81,   154,   188,    82,    83,    84,
      85,    86,   552,    87,    88,   492,   602,    89,    90,   364,
     614,    91,   454,   455,   134,   163,   476,    93,    94,   365,
     615,   516,   653,   654,   717,   317,   473,   474,   475,   517,
     224,   590,   811,   781,   180,   776,   743,   746,    95,   196,
     342,    96,    97,   166,   167,   321,   322,   486,   325,   326,
     482,   802,   740,   689,   208,   212,   213,   295,   296,   297,
     135,    99,   100,   101,   136,   103,   122,   123,   434,   435,
     104,   137,   138,   107,   140,   109,   141,   142,   112,   113,
     217,   114,   115,   116,   117,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,    72,   289,   496,   433,   139,   177,   178,   145,   477,
     691,   483,   300,   126,   158,   159,   160,   436,   314,   151,
       5,     5,   311,   169,   170,   711,   171,   172,   497,   323,
     323,   330,   186,   182,   184,   185,   189,   190,   594,     5,
     194,  -190,     5,   182,   198,   199,   121,   599,   200,   340,
     121,   201,   202,   203,   181,   204,   712,   425,   182,   214,
     216,   323,   780,     3,   197,   327,   367,   368,   369,   370,
     426,   323,   718,   427,   600,   157,   366,     5,   357,   573,
     186,   215,   568,    14,   359,    45,   428,   429,  -255,  -255,
     442,     5,  -255,   692,   147,   351,   430,   803,   353,   540,
     606,   780,  -255,  -255,  -255,   744,   318,   431,   161,   692,
     333,   143,   385,    45,   360,   805,   120,   283,   284,   285,
     194,   182,   216,   352,    43,   541,   354,   601,   593,   593,
     815,   419,   420,   121,   328,   281,   298,   288,   711,    53,
    -253,   173,  -255,   286,   174,   164,   164,   543,  -255,   690,
     298,   281,  -255,   755,  -255,  -255,   225,   386,   191,   333,
     324,  -255,   333,   298,   319,   333,  -190,   584,   592,   712,
     593,  -255,   331,   810,   582,   544,   786,   787,   333,   281,
    -255,   298,   281,   281,   333,   281,   226,   582,   800,   443,
    -255,   333,   693,   566,   333,   227,   493,   333,   211,   350,
     222,  -332,   583,   192,   220,   562,   348,   518,   696,  -366,
     228,  -366,   230,   334,   806,   788,   344,   349,   223,   371,
     372,   373,   374,   376,   378,   379,   380,   381,   382,   383,
     384,   563,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   298,   298,   422,   424,     5,   513,   433,
    -329,   149,   756,   124,   687,   294,   445,   514,   144,  -328,
     483,   448,   436,   485,   375,   377,   229,  -333,   515,   294,
     328,  -256,   182,   355,   461,   463,   233,   465,   467,     5,
     -61,   470,   294,   149,   276,    98,   742,   814,   277,   519,
     274,  -334,   275,   459,    98,    92,   487,   817,   -61,  -256,
     294,   278,   491,    98,    92,  -331,   421,   423,   298,   575,
     578,   234,   328,    92,  -256,   235,    98,   444,   121,   586,
     214,  -256,   214,  -330,   504,   506,    92,   508,   509,     5,
     280,   520,   182,   149,    98,   748,   462,   605,   748,   466,
    -256,  -366,   333,  -366,    92,  -238,   607,   609,  -259,   587,
     281,   425,    98,   511,   240,   741,    98,   242,   588,  -256,
     749,   245,    92,   749,   426,  -256,    92,   427,   328,   589,
     328,   290,   356,  -272,  -229,  -238,  -259,  -365,   328,  -365,
     428,   429,   294,   294,  -238,   503,   449,   521,   450,   522,
     430,  -259,  -272,  -229,   292,   153,  -272,   655,  -259,  -238,
     501,   431,   502,   303,   299,    98,   461,   548,   465,   551,
     470,   553,   506,   233,   316,    92,   242,  -259,   557,   559,
    -272,   298,   554,   555,   339,   240,   341,   565,   242,   567,
     343,   361,   245,   572,   363,   447,  -259,   451,   452,  -264,
     804,   490,  -259,   456,   458,    98,   471,   294,   234,   807,
     216,   472,   235,   596,   598,    92,   478,   479,  -264,   211,
     484,   211,  -264,    14,   216,   485,    17,   489,   547,    98,
     550,   595,   494,   804,    22,    23,   707,   498,   507,    92,
     510,   538,    29,   804,  -131,   604,  -264,   237,   512,   539,
      98,   240,   545,   241,   242,   579,   561,   591,   245,   218,
      92,   708,  -131,   709,    43,   252,   603,   333,   659,   662,
     664,   670,   256,   257,   258,   658,   102,    52,   661,    53,
     688,   700,   715,   704,   716,   102,   734,     5,   745,   301,
     668,   149,   564,   152,   102,   613,   727,   674,   758,   676,
     759,   686,   679,  -238,   669,   682,   760,   102,   713,   685,
     812,   799,   785,   488,   772,   560,     0,  -261,   558,     0,
     294,     0,     0,   656,    98,   102,     0,     0,    67,   182,
     304,   307,   310,  -238,    92,   699,     0,   703,     0,   233,
     705,     0,  -238,   102,   329,  -261,     0,   102,    98,     0,
     695,    98,   348,   153,   175,    98,     0,  -238,    92,   175,
    -261,    92,   338,    23,   176,    92,     0,  -261,    23,   176,
      29,   345,  -131,     0,   234,    29,     0,  -131,   235,     0,
       0,     0,     0,   -39,     0,     0,  -261,     0,   674,   676,
    -131,   679,   682,   699,   703,  -131,   102,     0,     0,    98,
       0,   728,   729,     0,   730,  -261,   731,   732,     0,    92,
     733,  -261,     0,   177,   178,     0,     0,   240,     0,   241,
     242,   747,   506,     0,   245,   506,   751,     0,     0,   425,
     753,   252,     0,     0,     0,     0,   102,     0,   256,   257,
     258,     0,   426,     0,     0,   427,     0,     0,   728,   761,
     762,   731,   763,   764,   765,   766,     0,     0,   428,   429,
     102,   446,     0,     0,     0,   190,   194,   216,   430,     0,
       0,   777,     0,     0,   778,     0,   542,     0,     0,   431,
       0,   102,     0,     0,   468,     0,     0,     0,   774,     0,
       0,    57,     0,     0,     0,     0,     0,   795,   796,   797,
     798,     0,     0,     0,     0,     0,    58,     0,    60,    61,
       0,   703,   808,   809,    98,     0,     0,     0,   795,   796,
     797,   798,   808,   809,    92,     0,     0,    65,   432,     0,
       0,     0,     0,    68,   813,   506,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   703,     0,     0,     0,   175,
      98,     0,     0,    98,     0,   102,   739,     0,    23,   176,
      92,     0,     0,    92,     0,    29,   105,  -131,     0,     0,
       0,     0,     0,   -38,     0,   105,     0,     0,     0,   102,
       0,     0,   102,     0,   105,  -131,   102,     0,   657,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
     775,    98,     0,    98,     0,   105,    98,     0,     0,    98,
       0,    92,    98,    92,     0,     0,    92,     0,     0,    92,
     102,     0,    92,   105,     0,   569,   571,   105,     0,   574,
     577,   801,    98,     0,   234,     0,     0,     0,   235,    98,
       0,    98,    92,     0,     0,     0,    98,    14,     0,    92,
      17,    92,     0,     0,     0,     0,    92,     0,    22,    23,
     707,     0,     0,     0,   801,     0,    29,     0,  -131,     0,
       0,     0,     0,     0,   801,     0,   105,   240,     0,   241,
     242,     0,     0,    39,   245,   708,  -131,   709,    43,     0,
       0,   252,     0,     0,     0,   106,     0,     0,     0,     0,
     258,    52,     0,    53,   106,    98,     0,     0,     0,     0,
      98,     0,     0,   106,     0,    92,   105,   666,   667,     0,
      92,     0,     0,     0,     0,     0,   106,     0,   671,     0,
       0,     0,     0,    98,     0,   102,     0,    98,   680,     0,
     105,   683,     0,    92,   106,     0,     0,    92,     0,     0,
       0,     0,    67,     0,     0,     0,     0,     0,     0,   710,
       0,   105,   106,     0,     0,     0,   106,     0,     0,    14,
       0,   102,    17,     0,   102,     0,     0,     0,     0,     0,
      22,    23,   707,     0,     0,     0,     0,     0,    29,     0,
    -131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    98,    98,    98,    39,     0,   708,  -131,   709,
      43,    92,    92,    92,    92,   106,    98,    98,     0,     0,
       0,   233,     0,    52,     0,    53,    92,    92,     0,     0,
       0,     0,   102,     0,   102,   105,   108,   102,     0,     0,
     102,     0,     0,   102,     0,   108,     0,     0,     0,     0,
       0,     0,     0,   233,   108,   106,   234,     0,   750,   105,
     235,     0,   105,   102,     0,     0,   105,   108,     0,     0,
     102,     0,   102,     0,    67,     0,     0,   102,     0,   106,
       0,   767,     0,     0,     0,   108,     0,     0,   234,     0,
       0,     0,   235,     0,     0,   237,     0,   238,   239,   240,
     106,   241,   242,   108,     0,     0,   245,   108,     0,     0,
     105,     0,   251,   252,     0,     0,     0,   255,     0,     0,
     256,   257,   258,     0,     0,     0,   110,   237,     0,   238,
     239,   240,     0,   241,   242,   110,   102,     0,   245,     0,
       0,   102,     0,     0,   110,   252,     0,   187,     0,     0,
       0,     0,   256,   257,   258,     0,   108,   110,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,   102,     0,
       0,     0,     0,     0,   106,   110,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,     0,     0,   127,
       0,     0,     0,   110,     0,     0,   108,   110,   106,     0,
       0,   106,    21,     0,     0,   106,     0,   128,   129,   130,
       0,    28,     0,     0,     0,     0,    31,    32,     0,    34,
     108,    35,    36,     0,     0,   105,   282,     0,    38,     0,
      40,     0,   102,   102,   102,   102,     0,     0,     0,     0,
       0,   108,    48,    49,    50,   131,   110,   102,   102,   106,
       0,     0,     0,     0,     0,     0,     0,   187,   187,   187,
     313,   105,     0,     0,   105,     0,     0,     0,     0,     0,
       0,   187,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,   187,
       0,    63,     0,    64,     0,     0,    66,     0,   187,     0,
       0,    68,     0,     0,   132,   111,    70,     0,   133,     0,
     110,     0,     0,     0,   111,   108,     0,   233,     0,     0,
       0,     0,   105,   111,   105,     0,     0,   105,     0,     0,
     105,   110,     0,   105,     0,     0,   111,     0,     0,   108,
       0,     0,   108,     0,     0,     0,   108,     0,     0,     0,
       0,     0,   234,   105,   111,     0,   235,     0,     0,     0,
     105,     0,   105,     0,   106,     0,     0,   105,     0,     0,
       0,     0,   111,     0,     0,   233,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
     108,   237,     0,   238,   239,   240,     0,   241,   242,   243,
     106,     0,   245,   106,     0,   110,     0,     0,   251,   252,
     234,   187,     0,   255,   235,     0,   256,   257,   258,     0,
       0,     0,     0,     0,     0,   111,   105,     0,     0,   110,
       0,   105,   110,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,     0,   239,   240,   105,   241,   242,     0,   105,     0,
     245,   106,     0,   106,     0,   111,   106,   252,     0,   106,
       0,     0,   106,     0,   256,   257,   258,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,   106,     0,     0,     0,     0,     0,     0,   106,
     233,   106,     0,     0,     0,   108,   106,     0,     0,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   105,   105,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,     0,   105,   105,   235,
       0,   108,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,   187,     0,   106,   187,   187,     0,     0,
     106,     0,     0,     0,   237,     0,   238,   239,   240,     0,
     241,   242,   243,     0,   111,   245,   246,   247,     0,   249,
     250,   251,   252,   106,     0,   110,   255,   106,     0,   256,
     257,   258,   108,     0,   108,     0,     0,   108,   111,     0,
     108,   111,     0,   108,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,   108,   110,     0,     0,     0,     0,     0,
     108,     0,   108,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,   187,   187,     0,     0,     0,   111,
       0,   106,   106,   106,   106,   187,     0,   313,     0,     0,
       0,     0,   313,     0,     0,   187,   106,   106,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,   110,     0,     0,   110,     0,     0,
     110,     0,     0,   110,     0,     0,   108,     0,     0,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
     110,     0,   110,     0,   108,     0,     0,   110,   108,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,   168,     0,   111,   125,     0,     0,     0,   148,
     125,   125,     0,     0,     0,     0,     0,   162,     0,   165,
     193,     0,     0,     0,     0,   187,   110,     0,     0,     0,
       0,   110,   108,   108,   108,   108,     0,     0,    74,   195,
     111,     0,   219,   111,     0,     0,     0,   108,   108,     0,
       0,     0,     0,     0,   110,     0,     0,     0,   110,   313,
     313,     0,   313,   313,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   779,   221,     0,     0,
       0,   313,     0,   313,     0,     0,     0,     0,     0,     0,
       0,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   111,     0,     0,   111,     0,     0,   111,
       0,     0,   111,     0,     0,   779,     0,     0,     0,     0,
       0,     0,   110,   110,   110,   110,     0,     0,     0,     0,
     195,   315,   111,     0,   293,     0,     0,   110,   110,   111,
     195,   111,   302,     0,     0,     0,   111,     0,   293,     0,
       0,   320,     0,     0,     0,   337,     0,     0,     0,     0,
       0,   293,     0,   125,     0,     0,   332,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,   293,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,   362,     0,     0,
     111,     0,   165,   165,   165,   165,     0,     0,     0,     0,
       0,     0,   273,  -343,     0,     0,  -365,     0,  -365,   387,
       0,     0,     0,   111,     0,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   293,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,     0,     0,   337,     0,     0,
       0,     0,     0,     0,     0,     0,   453,     0,   457,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   111,   111,   111,     0,   320,     0,     0,     0,
       0,     0,     0,     0,     0,   165,   111,   111,     0,     0,
       0,     0,     0,     0,     0,   505,   293,     0,    -2,     4,
       0,     5,     6,     7,     8,     9,    10,     0,     0,    11,
      12,    13,     0,    14,    15,    16,    17,  -236,    18,    19,
       0,    20,    21,   165,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,  -131,    30,    31,    32,    33,    34,
     -37,    35,    36,     0,    37,     0,     0,  -236,    38,    39,
      40,    41,  -131,    42,    43,     0,  -236,    44,    45,     0,
      46,    47,    48,    49,    50,    51,     0,    52,     0,    53,
      54,  -236,     0,     0,    55,     0,    56,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,   293,
     581,    63,     0,    64,     0,    65,    66,     0,    67,     0,
       0,    68,     0,     0,    69,     0,    70,     0,    71,     0,
       0,     0,   585,     0,     0,   320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   610,     0,     0,    74,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,   480,     0,     5,     6,     7,     8,     9,    10,
       0,     0,   127,     0,   652,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
     128,   129,   130,     0,    28,     0,     0,     0,     0,    31,
      32,     0,    34,     0,    35,    36,     0,   337,     0,   337,
       0,    38,   337,    40,     0,   337,   233,     0,   684,   453,
       0,     0,     0,     0,     0,    48,    49,    50,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   694,     0,
       0,   320,    57,     0,     0,   698,   233,   702,     0,     0,
       0,   234,    74,     0,     0,   235,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    63,   236,    64,     0,    65,    66,
       0,   234,     0,     0,    68,   235,     0,   132,   714,    70,
     237,   481,   238,   239,   240,     0,   241,   242,   243,     0,
     244,   245,   246,   247,     0,   249,   250,   251,   252,     0,
     253,   254,   255,     0,     0,   256,   257,   258,     0,     0,
     237,     0,   238,   239,   240,     0,   241,   242,   243,     0,
     244,   245,   246,   247,     0,   249,   250,   251,   252,   752,
     253,     0,   255,   754,     0,   256,   257,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,     0,     0,
       0,     4,   757,     5,     6,     7,     8,     9,    10,     0,
    -382,    11,    12,    13,  -382,    14,    15,    16,    17,  -236,
      18,    19,  -382,    20,    21,  -382,    22,    23,    24,    25,
      26,    27,     0,    28,    29,     0,  -131,    30,    31,    32,
      33,    34,   -37,    35,    36,     0,    37,     0,     0,  -236,
      38,     0,    40,    41,  -131,    42,    43,  -382,  -236,    44,
      45,  -382,    46,    47,    48,    49,    50,    51,     0,    52,
       0,    53,    54,  -236,     0,     0,    55,     0,    56,     0,
       0,  -382,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -382,    59,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,     0,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,    64,  -382,  -382,  -382,     0,
      67,  -382,  -382,  -382,     0,     0,    69,  -382,    70,     4,
      71,     5,     6,     7,     8,     9,    10,     0,     0,    11,
      12,    13,     0,    14,    15,    16,    17,  -236,    18,    19,
       0,    20,    21,     0,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,  -131,    30,    31,    32,    33,    34,
     -37,    35,    36,     0,    37,     0,     0,  -236,    38,    39,
      40,    41,  -131,    42,    43,     0,  -236,    44,    45,     0,
      46,    47,    48,    49,    50,    51,     0,    52,     0,    53,
      54,  -236,     0,     0,    55,     0,    56,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,    64,     0,    65,    66,   179,    67,     0,
       0,    68,     0,     0,    69,   205,    70,     4,    71,     5,
       6,     7,     8,     9,    10,     0,     0,    11,    12,    13,
       0,    14,    15,    16,    17,  -236,    18,    19,     0,    20,
      21,     0,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,  -131,    30,    31,    32,    33,    34,   -37,    35,
      36,     0,    37,     0,     0,  -236,    38,    39,    40,    41,
    -131,    42,    43,     0,  -236,    44,    45,     0,    46,    47,
      48,    49,    50,    51,     0,    52,     0,    53,    54,  -236,
       0,     0,    55,     0,    56,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,     0,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,    66,     0,    67,     0,     0,    68,
       0,     0,    69,   347,    70,     4,    71,     5,     6,     7,
       8,     9,    10,     0,     0,    11,    12,    13,     0,    14,
      15,    16,    17,  -236,    18,    19,     0,    20,    21,     0,
      22,    23,    24,    25,    26,    27,     0,    28,    29,     0,
    -131,    30,    31,    32,    33,    34,   -37,    35,    36,     0,
      37,     0,     0,  -236,    38,    39,    40,    41,  -131,    42,
      43,     0,  -236,    44,    45,     0,    46,    47,    48,    49,
      50,    51,     0,    52,     0,    53,    54,  -236,     0,     0,
      55,     0,    56,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,    66,     0,    67,     0,     0,    68,     0,     0,
      69,   205,    70,     4,    71,     5,     6,     7,     8,     9,
      10,     0,     0,    11,    12,    13,     0,    14,    15,    16,
      17,  -236,    18,    19,     0,    20,    21,     0,    22,    23,
      24,    25,    26,    27,     0,    28,    29,     0,  -131,    30,
      31,    32,    33,    34,   -37,    35,    36,     0,    37,     0,
       0,  -236,    38,    39,    40,    41,  -131,    42,    43,     0,
    -236,    44,    45,     0,    46,    47,    48,    49,    50,    51,
       0,    52,     0,    53,    54,  -236,     0,     0,    55,     0,
      56,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,    59,
      60,    61,     0,     0,     0,     0,    62,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
      66,     0,    67,     0,     0,    68,     0,     0,    69,   612,
      70,     4,    71,     5,     6,     7,     8,     9,    10,     0,
       0,    11,    12,    13,     0,    14,    15,    16,    17,  -236,
      18,    19,     0,    20,    21,     0,    22,    23,    24,    25,
      26,    27,     0,    28,    29,     0,  -131,    30,    31,    32,
      33,    34,   -37,    35,    36,     0,    37,     0,     0,  -236,
      38,    39,    40,    41,  -131,    42,    43,     0,  -236,    44,
      45,     0,    46,    47,    48,    49,    50,    51,     0,    52,
       0,    53,    54,  -236,     0,     0,    55,     0,    56,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,    64,     0,    65,    66,     0,
      67,     0,     0,    68,     0,     0,    69,   706,    70,     4,
      71,     5,     6,     7,     8,     9,    10,     0,     0,    11,
      12,    13,     0,    14,    15,    16,    17,  -236,    18,    19,
       0,    20,    21,     0,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,  -131,    30,    31,    32,    33,    34,
     -37,    35,    36,     0,    37,     0,     0,  -236,    38,   218,
      40,    41,  -131,    42,    43,     0,  -236,    44,    45,     0,
      46,    47,    48,    49,    50,    51,     0,    52,     0,    53,
      54,  -236,     0,     0,    55,     0,    56,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,    64,     0,    65,    66,     0,    67,     0,
       0,    68,     0,     0,    69,     0,    70,     4,    71,     5,
       6,     7,     8,     9,    10,     0,     0,    11,    12,    13,
       0,    14,    15,    16,    17,  -236,    18,    19,     0,    20,
      21,     0,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,  -131,    30,    31,    32,    33,    34,   -37,    35,
      36,     0,    37,     0,     0,  -236,    38,     0,    40,    41,
    -131,    42,    43,     0,  -236,    44,    45,     0,    46,    47,
      48,    49,    50,    51,     0,    52,     0,    53,    54,  -236,
       0,     0,    55,     0,    56,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,     0,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,    66,     0,    67,     0,     0,    68,
       0,     0,    69,     0,    70,     4,    71,     5,     6,     7,
       8,     9,    10,     0,     0,    11,    12,    13,     0,    14,
      15,    16,    17,  -236,    18,    19,     0,    20,    21,     0,
      22,    23,    24,    25,    26,   460,     0,    28,    29,     0,
    -131,    30,    31,    32,    33,    34,   -37,    35,    36,     0,
      37,     0,     0,  -236,    38,     0,    40,    41,  -131,    42,
      43,     0,  -236,    44,    45,     0,    46,    47,    48,    49,
      50,    51,     0,    52,     0,    53,    54,  -236,     0,     0,
      55,     0,    56,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,    66,     0,    67,     0,     0,    68,     0,     0,
      69,     0,    70,     4,    71,     5,     6,     7,     8,     9,
      10,     0,     0,    11,    12,    13,     0,    14,    15,    16,
      17,  -236,    18,    19,     0,    20,    21,     0,    22,    23,
      24,    25,    26,   464,     0,    28,    29,     0,  -131,    30,
      31,    32,    33,    34,   -37,    35,    36,     0,    37,     0,
       0,  -236,    38,     0,    40,    41,  -131,    42,    43,     0,
    -236,    44,    45,     0,    46,    47,    48,    49,    50,    51,
       0,    52,     0,    53,    54,  -236,     0,     0,    55,     0,
      56,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,    59,
      60,    61,     0,     0,     0,     0,    62,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
      66,     0,    67,     0,     0,    68,     0,     0,    69,     0,
      70,     4,    71,     5,     6,     7,     8,     9,    10,     0,
       0,    11,    12,    13,     0,    14,    15,    16,    17,  -236,
      18,    19,     0,    20,    21,     0,    22,    23,    24,    25,
      26,   673,     0,    28,    29,     0,  -131,    30,    31,    32,
      33,    34,   -37,    35,    36,     0,    37,     0,     0,  -236,
      38,     0,    40,    41,  -131,    42,    43,     0,  -236,    44,
      45,     0,    46,    47,    48,    49,    50,    51,     0,    52,
       0,    53,    54,  -236,     0,     0,    55,     0,    56,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,    64,     0,    65,    66,     0,
      67,     0,     0,    68,     0,     0,    69,     0,    70,     4,
      71,     5,     6,     7,     8,     9,    10,     0,     0,    11,
      12,    13,     0,    14,    15,    16,    17,  -236,    18,    19,
       0,    20,    21,     0,    22,    23,    24,    25,    26,   675,
       0,    28,    29,     0,  -131,    30,    31,    32,    33,    34,
     -37,    35,    36,     0,    37,     0,     0,  -236,    38,     0,
      40,    41,  -131,    42,    43,     0,  -236,    44,    45,     0,
      46,    47,    48,    49,    50,    51,     0,    52,     0,    53,
      54,  -236,     0,     0,    55,     0,    56,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,    64,     0,    65,    66,     0,    67,     0,
       0,    68,     0,     0,    69,     0,    70,     4,    71,     5,
       6,     7,     8,     9,    10,     0,     0,    11,    12,    13,
       0,    14,    15,    16,    17,  -236,    18,    19,     0,    20,
      21,     0,    22,    23,    24,    25,    26,   678,     0,    28,
      29,     0,  -131,    30,    31,    32,    33,    34,   -37,    35,
      36,     0,    37,     0,     0,  -236,    38,     0,    40,    41,
    -131,    42,    43,     0,  -236,    44,    45,     0,    46,    47,
      48,    49,    50,    51,     0,    52,     0,    53,    54,  -236,
       0,     0,    55,     0,    56,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,     0,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,    66,     0,    67,     0,     0,    68,
       0,     0,    69,     0,    70,     4,    71,     5,     6,     7,
       8,     9,    10,     0,     0,    11,    12,    13,     0,    14,
      15,    16,    17,  -236,    18,    19,     0,    20,    21,     0,
      22,    23,    24,    25,    26,   681,     0,    28,    29,     0,
    -131,    30,    31,    32,    33,    34,   -37,    35,    36,     0,
      37,     0,     0,  -236,    38,     0,    40,    41,  -131,    42,
      43,     0,  -236,    44,    45,     0,    46,    47,    48,    49,
      50,    51,     0,    52,     0,    53,    54,  -236,     0,     0,
      55,     0,    56,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,    66,     0,    67,     0,     0,    68,     0,     0,
      69,     0,    70,     4,    71,     5,     6,     7,     8,     9,
      10,     0,     0,    11,    12,    13,     0,    14,    15,    16,
      17,  -236,    18,    19,     0,    20,    21,     0,    22,    23,
      24,    25,    26,   697,     0,    28,    29,     0,  -131,    30,
      31,    32,    33,    34,   -37,    35,    36,     0,    37,     0,
       0,  -236,    38,     0,    40,    41,  -131,    42,    43,     0,
    -236,    44,    45,     0,    46,    47,    48,    49,    50,    51,
       0,    52,     0,    53,    54,  -236,     0,     0,    55,     0,
      56,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,    59,
      60,    61,     0,     0,     0,     0,    62,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
      66,     0,    67,     0,     0,    68,     0,     0,    69,     0,
      70,     4,    71,     5,     6,     7,     8,     9,    10,     0,
       0,    11,    12,    13,     0,    14,    15,    16,    17,  -236,
      18,    19,     0,    20,    21,     0,    22,    23,    24,    25,
      26,   701,     0,    28,    29,     0,  -131,    30,    31,    32,
      33,    34,   -37,    35,    36,     0,    37,     0,     0,  -236,
      38,     0,    40,    41,  -131,    42,    43,     0,  -236,    44,
      45,     0,    46,    47,    48,    49,    50,    51,     0,    52,
       0,    53,    54,  -236,     0,     0,    55,     0,    56,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,    64,     0,    65,    66,     0,
      67,     0,     0,    68,     0,     0,    69,     0,    70,   480,
      71,     5,     6,     7,     8,     9,    10,     0,  -382,   127,
       0,     0,  -382,     0,     0,     0,     0,     0,     0,     0,
    -382,     0,    21,     0,     0,     0,     0,   128,   129,   130,
       0,    28,     0,     0,     0,     0,    31,    32,     0,    34,
       0,    35,    36,     0,     0,     0,     0,     0,    38,     0,
      40,     0,     0,     0,     0,  -382,     0,     0,     0,  -382,
       0,     0,    48,    49,    50,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -254,  -382,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -382,    59,  -382,  -382,  -382,     0,
    -382,  -382,  -382,     0,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,    64,  -382,  -382,  -382,     0,     0,  -382,
    -382,  -382,     0,     0,   132,     0,    70,   480,   495,     5,
       6,     7,     8,     9,    10,     0,  -382,   127,     0,     0,
    -382,     0,     0,     0,     0,     0,     0,     0,  -382,     0,
      21,     0,     0,     0,     0,   128,   129,   130,     0,    28,
       0,     0,     0,     0,    31,    32,     0,    34,     0,    35,
      36,     0,     0,     0,     0,     0,    38,     0,    40,     0,
       0,     0,     0,  -382,     0,     0,     0,  -382,     0,     0,
      48,    49,    50,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -382,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -382,    59,  -382,  -382,  -382,     0,  -382,  -382,
    -382,     0,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,    64,  -382,  -382,  -382,     0,     0,  -382,  -382,  -382,
       0,     0,   132,     0,    70,   480,   495,     5,     6,     7,
       8,     9,    10,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,   128,   129,   130,     0,    28,     0,     0,
       0,     0,    31,    32,     0,    34,     0,    35,    36,     0,
       0,     0,     0,     0,    38,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     5,     6,
       7,     8,     9,    10,     0,     0,   127,     0,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    21,
       0,     0,     0,     0,   128,   129,   130,    63,    28,    64,
       0,    65,    66,    31,    32,     0,    34,    68,    35,    36,
     132,     0,    70,     0,   495,    38,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    59,    60,    61,     0,     0,     0,     0,    62,
       0,     5,     6,     7,     8,     9,    10,     0,    63,   127,
      64,     0,    65,    66,   179,     0,     0,     0,    68,     0,
       0,   132,    21,    70,     0,   133,   773,   128,   129,   130,
       0,    28,     0,     0,     0,     0,    31,    32,     0,    34,
       0,    35,    36,     0,     0,     0,     0,     0,    38,     0,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    50,   131,     0,     0,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,   210,     5,     6,     7,     8,     9,    10,
       0,    63,   127,    64,     0,    65,    66,   179,     0,     0,
       0,    68,     0,     0,   132,    21,    70,     0,   133,     0,
     128,   129,   130,     0,    28,     0,     0,     0,     0,    31,
      32,     0,    34,     0,    35,    36,     0,     0,     0,     0,
       0,    38,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,    50,   131,     0,
       0,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,     0,     5,     6,     7,
       8,     9,    10,     0,    63,   127,    64,     0,    65,    66,
     179,     0,     0,     0,    68,     0,     0,   132,    21,    70,
     500,   133,     0,   128,   129,   130,     0,    28,     0,     0,
       0,     0,    31,    32,     0,    34,     0,    35,    36,     0,
       0,     0,     0,   155,    38,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,     0,    57,     0,     0,     5,     6,
       7,     8,     9,    10,     0,     0,   127,     0,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    21,
       0,     0,     0,     0,   128,   129,   130,    63,    28,    64,
       0,    65,    66,    31,    32,     0,    34,    68,    35,    36,
     132,     0,    70,     0,   133,    38,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,   131,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    59,    60,    61,     0,     0,     0,     0,    62,
       0,     5,     6,     7,     8,     9,    10,     0,    63,   127,
      64,     0,    65,    66,   179,     0,     0,     0,    68,     0,
       0,   132,    21,    70,     0,   133,     0,   128,   129,   130,
       0,    28,     0,     0,     0,     0,    31,    32,     0,    34,
       0,    35,    36,     0,     0,     0,     0,     0,    38,     0,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    50,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,     0,     5,     6,     7,     8,     9,    10,
       0,    63,   127,    64,     0,    65,    66,   179,     0,     0,
       0,    68,     0,     0,   132,    21,    70,     0,   133,     0,
     128,   129,   130,     0,    28,     0,     0,     0,     0,    31,
      32,     0,    34,     0,    35,    36,     0,     0,     0,     0,
       0,    38,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,    50,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,    66,
       0,   183,     0,     0,    68,     0,     0,   132,     0,    70,
       0,   133,     5,     6,     7,     8,     9,    10,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   186,    21,     0,     0,     0,     0,   128,   129,
     130,     0,    28,     0,     0,     0,     0,    31,    32,     0,
      34,     0,    35,    36,     0,     0,     0,     0,     0,    38,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,    50,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     5,     6,     7,     8,     9,    10,     0,
       0,   127,     0,     0,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    21,     0,     0,     0,     0,   128,
     129,   130,    63,    28,    64,     0,    65,    66,    31,    32,
       0,    34,    68,    35,    36,    69,     0,    70,     0,   133,
      38,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,     0,     5,     6,     7,     8,
       9,    10,     0,    63,   127,    64,     0,    65,    66,     0,
       0,     0,     0,    68,     0,     0,   132,    21,    70,     0,
     133,     0,   128,   129,   130,     0,    28,     0,     0,     0,
       0,    31,    32,     0,    34,     0,    35,    36,   597,     0,
       0,     0,     0,    38,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     5,     6,     7,
       8,     9,    10,     0,     0,   127,     0,     0,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,   735,     0,
       0,     0,     0,   128,   129,   130,    63,    28,    64,     0,
      65,    66,    31,    32,     0,    34,    68,    35,    36,   132,
       0,    70,     0,   133,    38,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   736,    49,
      50,   737,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,     0,
       5,     6,     7,     8,     9,    10,     0,    63,   127,    64,
       0,    65,    66,   179,     0,     0,     0,    68,     0,     0,
     132,    21,    70,     0,   738,     0,   128,   129,   130,     0,
      28,     0,     0,     0,     0,    31,    32,     0,    34,     0,
      35,    36,     0,     0,     0,     0,     0,    38,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,     0,     5,     6,     7,     8,     9,    10,     0,
      63,   127,    64,     0,    65,    66,   179,     0,     0,     0,
      68,     0,     0,   132,    21,    70,     0,   738,     0,   128,
     129,   726,     0,    28,     0,     0,     0,     0,    31,    32,
       0,    34,     0,    35,    36,     0,     0,     0,     0,     0,
      38,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,     0,     5,     6,     7,     8,
       9,    10,     0,    63,   127,    64,     0,    65,    66,   179,
       0,     0,     0,    68,     0,     0,   132,    21,    70,     0,
     133,     0,   128,   129,   130,     0,    28,     0,     0,     0,
       0,    31,    32,     0,    34,     0,    35,    36,     0,     0,
       0,     0,     0,    38,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     5,     6,     7,
       8,     9,    10,     0,     0,   127,     0,     0,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    21,     0,
       0,     0,     0,   128,   129,   546,    63,    28,    64,     0,
      65,    66,    31,    32,     0,    34,    68,    35,    36,   132,
       0,    70,     0,   133,    38,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     5,     6,
       7,     8,     9,    10,     0,     0,   127,     0,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    21,
       0,     0,     0,     0,   128,   129,   549,    63,    28,    64,
       0,    65,    66,    31,    32,     0,    34,    68,    35,    36,
     132,     0,    70,     0,   133,    38,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     5,
       6,     7,     8,     9,    10,     0,     0,   127,     0,     0,
       0,    58,    59,    60,    61,     0,     0,     0,     0,    62,
      21,     0,     0,     0,     0,   128,   129,   720,    63,    28,
      64,     0,    65,    66,    31,    32,     0,    34,    68,    35,
      36,   132,     0,    70,     0,   133,    38,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,    50,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,     0,
       5,     6,     7,     8,     9,    10,     0,     0,   127,     0,
       0,     0,    58,    59,    60,    61,     0,     0,     0,     0,
      62,    21,     0,     0,     0,     0,   128,   129,   721,    63,
      28,    64,     0,    65,    66,    31,    32,     0,    34,    68,
      35,    36,   132,     0,    70,     0,   133,    38,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     5,     6,     7,     8,     9,    10,     0,     0,   127,
       0,     0,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    21,     0,     0,     0,     0,   128,   129,   723,
      63,    28,    64,     0,    65,    66,    31,    32,     0,    34,
      68,    35,    36,   132,     0,    70,     0,   133,    38,     0,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    50,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     5,     6,     7,     8,     9,    10,     0,     0,
     127,     0,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,    21,     0,     0,     0,     0,   128,   129,
     724,    63,    28,    64,     0,    65,    66,    31,    32,     0,
      34,    68,    35,    36,   132,     0,    70,     0,   133,    38,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,    50,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     5,     6,     7,     8,     9,    10,     0,
       0,   127,     0,     0,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    21,     0,     0,     0,     0,   128,
     129,   725,    63,    28,    64,     0,    65,    66,    31,    32,
       0,    34,    68,    35,    36,   132,     0,    70,     0,   133,
      38,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     5,     6,     7,     8,     9,    10,
       0,     0,   127,     0,     0,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,    21,     0,     0,     0,     0,
     128,   129,   726,    63,    28,    64,     0,    65,    66,    31,
      32,     0,    34,    68,    35,    36,   132,     0,    70,     0,
     133,    38,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,    50,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     5,     6,     7,     8,     9,
      10,     0,     0,   127,     0,     0,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    21,     0,     0,     0,
       0,   128,   129,   130,    63,    28,    64,     0,    65,    66,
      31,    32,     0,    34,    68,    35,    36,   132,     0,    70,
       0,   133,    38,     0,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -263,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,  -263,     0,     0,     0,  -263,     5,     6,
       7,     8,     9,    10,     0,     0,   127,    64,     0,     0,
       0,   179,     0,   233,     0,     0,     0,     0,   132,    21,
      70,  -263,   738,     0,   128,   129,   130,     0,    28,     0,
       0,     0,     0,    31,    32,     0,    34,     0,    35,    36,
       0,     0,     0,     0,     0,    38,     0,    40,   234,     0,
       0,     0,   235,     0,     0,     0,     5,     0,     0,    48,
      49,    50,   131,   616,     0,     0,     0,   617,     0,     0,
       0,     0,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,    59,   241,   242,   243,     0,   244,   245,   246,
     247,     0,   249,   250,   251,   252,     0,   253,     0,   255,
      64,     0,   256,   257,   258,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   618,   619,   620,   621,   622,
     623,     0,     0,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,     0,     0,   634,     0,     0,     0,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
       0,   646,     0,     0,   647,   648,   649,   650,   651,   231,
       0,     0,     0,   232,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,   233,   234,     0,     0,     0,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   231,     0,     0,
     236,   232,     0,     0,     0,     0,     0,     0,     0,   233,
     234,     0,     0,     0,   235,   237,     0,   238,   239,   240,
       0,   241,   242,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   236,   253,   254,   255,     0,     0,
     256,   257,   258,     0,   234,     0,     0,     0,   235,   237,
     608,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   236,   253,
     254,   255,     0,     0,   256,   257,   258,     0,     0,     0,
       0,     0,     0,   237,   665,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   231,   253,   254,   255,   232,     0,   256,   257,
     258,     0,     0,     0,   233,     0,     0,     0,   782,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
     232,     0,     0,     0,     0,     0,     0,     0,   233,   234,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,     0,     0,     0,   235,   237,     0,
     238,   239,   240,     0,   241,   242,   243,     0,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   236,   253,   254,
     255,     0,     0,   256,   257,   258,     0,     0,     0,     0,
       0,     0,   237,   816,   238,   239,   240,     0,   241,   242,
     243,     0,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   231,   253,   254,   255,   232,     0,   256,   257,   258,
       0,     0,     0,   233,   308,   499,     0,     0,     0,     0,
       0,     0,     0,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,     0,   234,   232,
       0,     0,   235,     0,     0,     0,     0,   233,   305,     0,
       0,     0,     0,     0,     0,     0,     0,   306,   121,     0,
       0,     0,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,   234,   241,   242,   243,   235,   244,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,   254,   255,
       0,     0,   256,   257,   258,   231,   236,   281,     0,   232,
       0,     0,     0,     0,     0,     0,     0,   233,   576,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,   254,   255,     0,     0,   256,   257,   258,     0,
       0,   281,   234,     0,     0,     0,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   231,     0,     0,   236,   232,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,   254,   255,     0,     0,   256,   257,   258,     0,
     234,   281,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   312,     0,     0,     0,     0,   231,     0,     0,     0,
     232,     0,     0,     0,   236,     0,     0,     0,   233,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,     0,   253,
     254,   255,     0,   234,   256,   257,   258,   235,     0,   281,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   231,
       0,     0,     0,   232,     0,     0,     0,   236,     0,     0,
       0,   233,   570,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,     0,   241,   242,
     243,     0,   244,   245,   246,   247,   248,   249,   250,   251,
     252,     0,   253,   254,   255,     0,   234,   256,   257,   258,
     235,     0,   281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,     0,   232,     0,     0,     0,
     236,     0,     0,     0,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
       0,   241,   242,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,     0,   253,   254,   255,     0,   234,
     256,   257,   258,   235,     0,   281,     0,     0,     0,     0,
     672,     0,     0,     0,     0,   231,     0,     0,     0,   232,
       0,     0,     0,   236,     0,     0,     0,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,     0,   241,   242,   243,     0,   244,   245,
     246,   247,   248,   249,   250,   251,   252,     0,   253,   254,
     255,     0,   234,   256,   257,   258,   235,     0,   281,     0,
       0,     0,     0,   677,     0,     0,     0,     0,   231,     0,
       0,     0,   232,     0,     0,     0,   236,     0,     0,     0,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,   254,   255,     0,   234,   256,   257,   258,   235,
       0,   281,     0,     0,     0,     0,   768,     0,     0,     0,
       0,   231,     0,     0,     0,   232,     0,     0,     0,   236,
       0,     0,     0,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   238,   239,   240,     0,
     241,   242,   243,     0,   244,   245,   246,   247,   248,   249,
     250,   251,   252,     0,   253,   254,   255,     0,   234,   256,
     257,   258,   235,     0,   281,     0,     0,     0,     0,   769,
       0,     0,     0,     0,   231,     0,     0,     0,   232,     0,
       0,     0,   236,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,     0,   241,   242,   243,     0,   244,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,   254,   255,
       0,   234,   256,   257,   258,   235,     0,   281,     0,     0,
       0,     0,   770,     0,     0,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,   236,     0,     0,     0,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,     0,   241,   242,   243,     0,
     244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     253,   254,   255,     0,   234,   256,   257,   258,   235,     0,
     281,     0,     0,     0,     0,   771,     0,     0,     0,     0,
     231,     0,     0,     0,   232,     0,     0,     0,   236,     0,
       0,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,     0,   253,   254,   255,     0,   234,   256,   257,
     258,   235,     0,   281,     0,     0,     0,     0,   783,     0,
       0,     0,     0,   231,     0,     0,     0,   232,     0,     0,
       0,   236,     0,     0,     0,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,     0,   238,   239,
     240,     0,   241,   242,   243,     0,   244,   245,   246,   247,
     248,   249,   250,   251,   252,     0,   253,   254,   255,     0,
     234,   256,   257,   258,   235,     0,   281,     0,     0,     0,
       0,   784,     0,     0,     0,     0,   231,     0,     0,     0,
     232,     0,     0,     0,   236,     0,     0,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,     0,   253,
     254,   255,     0,   234,   256,   257,   258,   235,     0,   281,
       0,     0,     0,     0,   231,     0,     0,     0,   232,     0,
       0,     0,     0,     0,     0,     0,   233,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,     0,   241,   242,
     243,     0,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   234,   253,   254,   255,   235,     0,   256,   257,   258,
       0,     0,   336,     0,     0,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,   236,     0,     0,     0,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   287,
     237,     0,   238,   239,   240,     0,   241,   242,   243,     0,
     244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     253,   254,   255,     0,   234,   256,   257,   258,   235,  -344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,   231,     0,   236,     0,
     232,     0,     0,     0,     0,     0,     0,     0,   233,   437,
       0,     0,     0,   237,     0,   238,   239,   240,   438,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,     0,   253,   254,   255,     0,     0,   256,   257,
     258,     0,     0,   234,     0,     0,     0,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   231,
       0,     0,     0,   232,     0,     0,     0,   236,     0,     0,
       0,   233,   439,     0,     0,     0,     0,     0,     0,     0,
       0,   440,   237,     0,   238,   239,   240,     0,   241,   242,
     243,     0,   244,   245,   246,   247,   248,   249,   250,   251,
     252,     0,   253,   254,   255,     0,   234,   256,   257,   258,
     235,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,     0,     0,     0,     0,   233,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
       0,   241,   242,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   234,   253,   254,   255,   235,     0,
     256,   257,   258,     0,     0,   231,     0,     0,     0,   232,
       0,     0,     0,     0,     0,     0,     0,   233,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   234,   253,   254,   255,   235,   291,   256,   257,
     258,     0,     0,   231,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,   233,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     234,   253,   254,   255,   235,   335,   256,   257,   258,     0,
       0,   231,     0,     0,     0,   232,     0,     0,     0,     0,
       0,     0,     0,   233,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   234,   253,
     254,   255,   235,   346,   256,   257,   258,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,   232,     0,
       0,   358,   236,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,     0,   241,   242,   243,     0,   244,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,   254,   255,
       0,   234,   256,   257,   258,   235,     0,     0,     0,     0,
       0,     0,   441,     0,     0,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,   236,     0,     0,     0,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,     0,   241,   242,   243,     0,
     244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     253,   254,   255,     0,   234,   256,   257,   258,   235,     0,
       0,     0,     0,     0,     0,   231,     0,     0,     0,   232,
       0,     0,     0,     0,     0,     0,     0,   233,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   234,   253,   254,   255,   235,   523,   256,   257,
     258,     0,     0,   231,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,   233,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     234,   253,   254,   255,   235,   524,   256,   257,   258,     0,
       0,   231,     0,     0,     0,   232,     0,     0,     0,     0,
       0,     0,     0,   233,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   234,   253,
     254,   255,   235,   525,   256,   257,   258,     0,     0,   231,
       0,     0,     0,   232,     0,     0,     0,     0,     0,     0,
       0,   233,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,     0,   241,   242,   243,     0,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   234,   253,   254,   255,
     235,   526,   256,   257,   258,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,     0,     0,     0,     0,   233,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
       0,   241,   242,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   234,   253,   254,   255,   235,   527,
     256,   257,   258,     0,     0,   231,     0,     0,     0,   232,
       0,     0,     0,     0,     0,     0,     0,   233,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   234,   253,   254,   255,   235,   528,   256,   257,
     258,     0,     0,   231,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,   233,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     234,   253,   254,   255,   235,   529,   256,   257,   258,     0,
       0,   231,     0,     0,     0,   232,     0,     0,     0,     0,
       0,     0,     0,   233,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   234,   253,
     254,   255,   235,   530,   256,   257,   258,     0,     0,   231,
       0,     0,     0,   232,     0,     0,     0,     0,     0,     0,
       0,   233,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,     0,   241,   242,   243,     0,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   234,   253,   254,   255,
     235,   531,   256,   257,   258,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,     0,     0,     0,     0,   233,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
       0,   241,   242,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   234,   253,   254,   255,   235,   532,
     256,   257,   258,     0,     0,   231,     0,     0,     0,   232,
       0,     0,     0,     0,     0,     0,     0,   233,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   234,   253,   254,   255,   235,   533,   256,   257,
     258,     0,     0,   231,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,   233,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     234,   253,   254,   255,   235,   534,   256,   257,   258,     0,
       0,   231,     0,     0,     0,   232,     0,     0,     0,     0,
       0,     0,     0,   233,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   234,   253,
     254,   255,   235,   535,   256,   257,   258,     0,     0,   231,
       0,     0,     0,   232,     0,     0,     0,     0,     0,     0,
       0,   233,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,     0,   241,   242,   243,     0,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   234,   253,   254,   255,
     235,   536,   256,   257,   258,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,     0,     0,     0,     0,   233,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
       0,   241,   242,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   234,   253,   254,   255,   235,   537,
     256,   257,   258,     0,     0,   231,     0,     0,     0,   232,
       0,     0,     0,     0,   121,     0,     0,   233,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   234,   253,   254,   255,   235,     0,   256,   257,
     258,     0,     0,   231,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,   233,   236,     0,   580,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     234,   253,   254,   255,   235,   556,   256,   257,   258,     0,
       0,   231,     0,     0,     0,   232,     0,     0,     0,     0,
       0,     0,     0,   233,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   234,   253,
     254,   255,   235,     0,   256,   257,   258,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,   232,     0,
       0,   611,   236,     0,     0,     0,   233,   660,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,     0,   241,   242,   243,     0,   244,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,   254,   255,
       0,   234,   256,   257,   258,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,   236,     0,     0,     0,   233,
     663,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,     0,   241,   242,   243,     0,
     244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     253,   254,   255,     0,   234,   256,   257,   258,   235,     0,
       0,     0,     0,     0,     0,   231,     0,     0,     0,   232,
       0,     0,     0,     0,     0,     0,     0,   233,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   234,   253,   254,   255,   235,     0,   256,   257,
     258,     0,     0,   719,     0,     0,     0,     0,   231,     0,
       0,     0,   232,     0,     0,     0,   236,     0,     0,     0,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,     0,   241,   242,   243,
       0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,   254,   255,     0,   234,   256,   257,   258,   235,
       0,     0,     0,     0,     0,     0,   722,     0,     0,     0,
       0,   231,     0,     0,     0,   232,     0,     0,     0,   236,
       0,     0,     0,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   238,   239,   240,     0,
     241,   242,   243,     0,   244,   245,   246,   247,   248,   249,
     250,   251,   252,     0,   253,   254,   255,     0,   234,   256,
     257,   258,   235,     0,     0,     0,     0,     0,     0,   789,
       0,     0,     0,     0,   231,     0,     0,     0,   232,     0,
       0,     0,   236,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,     0,   241,   242,   243,     0,   244,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,   254,   255,
       0,   234,   256,   257,   258,   235,     0,     0,     0,     0,
       0,     0,   790,     0,     0,     0,     0,   231,     0,     0,
       0,   232,     0,     0,     0,   236,     0,     0,     0,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,     0,   241,   242,   243,     0,
     244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     253,   254,   255,     0,   234,   256,   257,   258,   235,     0,
       0,     0,     0,     0,     0,   791,     0,     0,     0,     0,
     231,     0,     0,     0,   232,     0,     0,     0,   236,     0,
       0,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,     0,   241,
     242,   243,     0,   244,   245,   246,   247,   248,   249,   250,
     251,   252,     0,   253,   254,   255,     0,   234,   256,   257,
     258,   235,     0,     0,     0,     0,     0,     0,   792,     0,
       0,     0,     0,   231,     0,     0,     0,   232,     0,     0,
       0,   236,     0,     0,     0,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,     0,   238,   239,
     240,     0,   241,   242,   243,     0,   244,   245,   246,   247,
     248,   249,   250,   251,   252,     0,   253,   254,   255,     0,
     234,   256,   257,   258,   235,     0,     0,     0,     0,     0,
       0,   793,     0,     0,     0,     0,   231,     0,     0,     0,
     232,     0,     0,     0,   236,     0,     0,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,     0,   241,   242,   243,     0,   244,
     245,   246,   247,   248,   249,   250,   251,   252,     0,   253,
     254,   255,     0,   234,   256,   257,   258,   235,     0,     0,
       0,     0,     0,     0,   794,     0,     0,     0,     0,   231,
       0,     0,     0,   232,     0,     0,     0,   236,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,     0,   241,   242,
     243,     0,   244,   245,   246,   247,   248,   249,   250,   251,
     252,     0,   253,   254,   255,     0,   234,   256,   257,   258,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
       0,   241,   242,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,     0,   253,   254,   255,     0,     0,
     256,   257,   258
};

static const yytype_int16 yycheck[] =
{
      11,     2,   143,   341,   278,    16,    41,    42,    19,   319,
     594,   324,   153,    15,    25,    26,    27,   278,   161,    23,
       3,     3,   159,    34,    35,   614,    37,    38,   341,     1,
       1,   174,    23,    44,    45,    46,    47,    48,   479,     3,
      51,     3,     3,    54,    55,    56,    77,    47,    59,   192,
      77,    62,    63,    64,    44,    66,   614,    19,    69,    70,
      71,     1,   746,     0,    54,    32,   225,   226,   227,   228,
      32,     1,   654,    35,    74,    25,    58,     3,   215,    23,
      23,    71,    23,    15,   101,    60,    48,    49,    60,    60,
      32,     3,    32,    32,   128,   101,    58,   773,   101,    32,
     131,   785,    32,    75,    75,   689,    70,    69,   128,    32,
     101,    69,    24,    60,   131,    32,   127,   128,   129,   130,
     131,   132,   133,   129,    56,    58,   129,   127,   100,   100,
     806,   274,   275,    77,   101,   126,   147,   139,   727,    71,
      80,     7,    82,   133,   128,   128,   128,   101,   120,   590,
     161,   126,    82,   711,   126,   126,    19,    69,    66,   101,
     100,   101,   101,   174,   128,   101,   128,   128,   478,   727,
     100,   101,   176,   120,   101,   129,   758,   759,   101,   126,
     120,   192,   126,   126,   101,   126,    49,   101,   772,   131,
     120,   101,   131,   129,   101,    58,   339,   101,    70,   210,
      36,   120,   129,   128,    42,   101,   207,   366,   131,   128,
      73,   130,   125,   120,   131,   129,   120,   127,    54,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   127,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,     3,    49,   543,
     120,     7,   713,    13,   584,   147,   287,    58,    18,   120,
     593,   292,   543,    82,   234,   235,   120,   120,    69,   161,
     101,    32,   303,    32,   305,   306,    22,   308,   309,     3,
      36,   312,   174,     7,    57,     2,   105,   806,    61,   120,
     128,   120,   130,   303,    11,     2,   327,   816,    54,    60,
     192,   128,   333,    20,    11,   120,   276,   277,   339,   466,
     467,    57,   101,    20,    75,    61,    33,   287,    77,    19,
     351,    82,   353,   120,   355,   356,    33,   358,   359,     3,
     120,   120,   363,     7,    51,   693,   306,   498,   696,   309,
     101,   128,   101,   130,    51,    19,   503,   504,    32,    49,
     126,    19,    69,   363,   100,   688,    73,   103,    58,   120,
     693,   107,    69,   696,    32,   126,    73,    35,   101,    69,
     101,   120,   131,    82,   101,    49,    60,   128,   101,   130,
      48,    49,   274,   275,    58,   355,    80,   120,    82,   120,
      58,    75,   101,   120,    76,    69,   105,   120,    82,    73,
     351,    69,   353,   128,   126,   122,   437,   438,   439,   440,
     441,   442,   443,    22,   128,   122,   103,   101,   449,   450,
     129,   452,   444,   445,   128,   100,    82,   458,   103,   460,
     120,     7,   107,   464,   100,   120,   120,   129,   101,    82,
     773,   333,   126,   120,    32,   162,    25,   339,    57,   782,
     481,   129,    61,   484,   485,   162,   101,   129,   101,   351,
      80,   353,   105,    15,   495,    82,    18,   129,   438,   186,
     440,   481,   129,   806,    26,    27,    28,   101,   131,   186,
     126,   129,    34,   816,    36,   495,   129,    96,   126,   131,
     207,   100,    57,   102,   103,    25,    82,   129,   107,    51,
     207,    53,    54,    55,    56,   114,   129,   101,    23,    23,
     131,   126,   121,   122,   123,   546,     2,    69,   549,    71,
     100,   131,   103,   131,   128,    11,   129,     3,    75,   154,
     561,     7,   457,     9,    20,   510,   670,   568,   715,   570,
     715,   582,   573,    19,   562,   576,   716,    33,   615,   580,
     785,   772,   756,   328,   734,   452,    -1,    32,   450,    -1,
     452,    -1,    -1,   543,   281,    51,    -1,    -1,   120,   600,
     157,   158,   159,    49,   281,   606,    -1,   608,    -1,    22,
     611,    -1,    58,    69,   171,    60,    -1,    73,   305,    -1,
     600,   308,   613,    69,    18,   312,    -1,    73,   305,    18,
      75,   308,   189,    27,    28,   312,    -1,    82,    27,    28,
      34,   198,    36,    -1,    57,    34,    -1,    36,    61,    -1,
      -1,    -1,    -1,    42,    -1,    -1,   101,    -1,   659,   660,
      54,   662,   663,   664,   665,    54,   122,    -1,    -1,   356,
      -1,   672,   673,    -1,   675,   120,   677,   678,    -1,   356,
     681,   126,    -1,   708,   709,    -1,    -1,   100,    -1,   102,
     103,   692,   693,    -1,   107,   696,   697,    -1,    -1,    19,
     701,   114,    -1,    -1,    -1,    -1,   162,    -1,   121,   122,
     123,    -1,    32,    -1,    -1,    35,    -1,    -1,   719,   720,
     721,   722,   723,   724,   725,   726,    -1,    -1,    48,    49,
     186,   288,    -1,    -1,    -1,   736,   737,   738,    58,    -1,
      -1,   742,    -1,    -1,   745,    -1,   433,    -1,    -1,    69,
      -1,   207,    -1,    -1,   311,    -1,    -1,    -1,   738,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,   768,   769,   770,
     771,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,
      -1,   782,   783,   784,   471,    -1,    -1,    -1,   789,   790,
     791,   792,   793,   794,   471,    -1,    -1,   117,   118,    -1,
      -1,    -1,    -1,   123,   805,   806,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   816,    -1,    -1,    -1,    18,
     507,    -1,    -1,   510,    -1,   281,   688,    -1,    27,    28,
     507,    -1,    -1,   510,    -1,    34,     2,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    11,    -1,    -1,    -1,   305,
      -1,    -1,   308,    -1,    20,    54,   312,    -1,   545,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
     742,   568,    -1,   570,    -1,    51,   573,    -1,    -1,   576,
      -1,   568,   579,   570,    -1,    -1,   573,    -1,    -1,   576,
     356,    -1,   579,    69,    -1,   462,   463,    73,    -1,   466,
     467,   773,   599,    -1,    57,    -1,    -1,    -1,    61,   606,
      -1,   608,   599,    -1,    -1,    -1,   613,    15,    -1,   606,
      18,   608,    -1,    -1,    -1,    -1,   613,    -1,    26,    27,
      28,    -1,    -1,    -1,   806,    -1,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,   816,    -1,   122,   100,    -1,   102,
     103,    -1,    -1,    51,   107,    53,    54,    55,    56,    -1,
      -1,   114,    -1,    -1,    -1,     2,    -1,    -1,    -1,    -1,
     123,    69,    -1,    71,    11,   672,    -1,    -1,    -1,    -1,
     677,    -1,    -1,    20,    -1,   672,   162,   554,   555,    -1,
     677,    -1,    -1,    -1,    -1,    -1,    33,    -1,   565,    -1,
      -1,    -1,    -1,   700,    -1,   471,    -1,   704,   575,    -1,
     186,   578,    -1,   700,    51,    -1,    -1,   704,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,
      -1,   207,    69,    -1,    -1,    -1,    73,    -1,    -1,    15,
      -1,   507,    18,    -1,   510,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   768,   769,   770,   771,    51,    -1,    53,    54,    55,
      56,   768,   769,   770,   771,   122,   783,   784,    -1,    -1,
      -1,    22,    -1,    69,    -1,    71,   783,   784,    -1,    -1,
      -1,    -1,   568,    -1,   570,   281,     2,   573,    -1,    -1,
     576,    -1,    -1,   579,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    20,   162,    57,    -1,   695,   305,
      61,    -1,   308,   599,    -1,    -1,   312,    33,    -1,    -1,
     606,    -1,   608,    -1,   120,    -1,    -1,   613,    -1,   186,
      -1,   127,    -1,    -1,    -1,    51,    -1,    -1,    57,    -1,
      -1,    -1,    61,    -1,    -1,    96,    -1,    98,    99,   100,
     207,   102,   103,    69,    -1,    -1,   107,    73,    -1,    -1,
     356,    -1,   113,   114,    -1,    -1,    -1,   118,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,     2,    96,    -1,    98,
      99,   100,    -1,   102,   103,    11,   672,    -1,   107,    -1,
      -1,   677,    -1,    -1,    20,   114,    -1,    47,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,   122,    33,    -1,    -1,
      -1,    -1,    -1,    -1,   700,    -1,    -1,    -1,   704,    -1,
      -1,    -1,    -1,    -1,   281,    51,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    11,
      -1,    -1,    -1,    69,    -1,    -1,   162,    73,   305,    -1,
      -1,   308,    24,    -1,    -1,   312,    -1,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
     186,    43,    44,    -1,    -1,   471,   126,    -1,    50,    -1,
      52,    -1,   768,   769,   770,   771,    -1,    -1,    -1,    -1,
      -1,   207,    64,    65,    66,    67,   122,   783,   784,   356,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,   507,    -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,   189,
      -1,   113,    -1,   115,    -1,    -1,   118,    -1,   198,    -1,
      -1,   123,    -1,    -1,   126,     2,   128,    -1,   130,    -1,
     186,    -1,    -1,    -1,    11,   281,    -1,    22,    -1,    -1,
      -1,    -1,   568,    20,   570,    -1,    -1,   573,    -1,    -1,
     576,   207,    -1,   579,    -1,    -1,    33,    -1,    -1,   305,
      -1,    -1,   308,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,    -1,    57,   599,    51,    -1,    61,    -1,    -1,    -1,
     606,    -1,   608,    -1,   471,    -1,    -1,   613,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    22,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,
     356,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
     507,    -1,   107,   510,    -1,   281,    -1,    -1,   113,   114,
      57,   311,    -1,   118,    61,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   672,    -1,    -1,   305,
      -1,   677,   308,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,   100,   700,   102,   103,    -1,   704,    -1,
     107,   568,    -1,   570,    -1,   162,   573,   114,    -1,   576,
      -1,    -1,   579,    -1,   121,   122,   123,    -1,    -1,    -1,
     356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,   599,    -1,    -1,    -1,    -1,    -1,    -1,   606,
      22,   608,    -1,    -1,    -1,   471,   613,    -1,    -1,    -1,
     207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   768,   769,   770,   771,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,   783,   784,    61,
      -1,   507,    -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   462,   463,    -1,   672,   466,   467,    -1,    -1,
     677,    -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,    -1,   281,   107,   108,   109,    -1,   111,
     112,   113,   114,   700,    -1,   471,   118,   704,    -1,   121,
     122,   123,   568,    -1,   570,    -1,    -1,   573,   305,    -1,
     576,   308,    -1,   579,    -1,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   507,    -1,   599,   510,    -1,    -1,    -1,    -1,    -1,
     606,    -1,   608,    -1,    -1,    -1,    -1,   613,    -1,    -1,
      -1,    -1,    -1,    -1,   554,   555,    -1,    -1,    -1,   356,
      -1,   768,   769,   770,   771,   565,    -1,   567,    -1,    -1,
      -1,    -1,   572,    -1,    -1,   575,   783,   784,   578,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   568,    -1,   570,    -1,    -1,   573,    -1,    -1,
     576,    -1,    -1,   579,    -1,    -1,   672,    -1,    -1,    -1,
      -1,   677,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   599,    -1,    -1,    -1,    -1,    -1,    -1,
     606,    -1,   608,    -1,   700,    -1,    -1,   613,   704,    -1,
      -1,     2,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    33,    -1,   471,    18,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      51,    -1,    -1,    -1,    -1,   695,   672,    -1,    -1,    -1,
      -1,   677,   768,   769,   770,   771,    -1,    -1,    69,    52,
     507,    -1,    73,   510,    -1,    -1,    -1,   783,   784,    -1,
      -1,    -1,    -1,    -1,   700,    -1,    -1,    -1,   704,   729,
     730,    -1,   732,   733,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   746,    90,    -1,    -1,
      -1,   751,    -1,   753,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   568,    -1,   570,    -1,    -1,   573,    -1,    -1,   576,
      -1,    -1,   579,    -1,    -1,   785,    -1,    -1,    -1,    -1,
      -1,    -1,   768,   769,   770,   771,    -1,    -1,    -1,    -1,
     143,   162,   599,    -1,   147,    -1,    -1,   783,   784,   606,
     153,   608,   155,    -1,    -1,    -1,   613,    -1,   161,    -1,
      -1,   164,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,   174,    -1,   176,    -1,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,   192,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   672,    -1,   220,    -1,    -1,
     677,    -1,   225,   226,   227,   228,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,    -1,    -1,   128,    -1,   130,   242,
      -1,    -1,    -1,   700,    -1,    -1,    -1,   704,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   274,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   299,    -1,   301,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   768,   769,   770,   771,    -1,   319,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   328,   783,   784,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   339,    -1,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,   366,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,   452,
     471,   113,    -1,   115,    -1,   117,   118,    -1,   120,    -1,
      -1,   123,    -1,    -1,   126,    -1,   128,    -1,   130,    -1,
      -1,    -1,   475,    -1,    -1,   478,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,   510,
      -1,    -1,    -1,    -1,    -1,   498,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    11,    -1,   517,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    -1,    43,    44,    -1,   568,    -1,   570,
      -1,    50,   573,    52,    -1,   576,    22,    -1,   579,   562,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   599,    -1,
      -1,   584,    81,    -1,    -1,   606,    22,   608,    -1,    -1,
      -1,    57,   613,    -1,    -1,    61,    -1,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    81,   115,    -1,   117,   118,
      -1,    57,    -1,    -1,   123,    61,    -1,   126,   631,   128,
      96,   130,    98,    99,   100,    -1,   102,   103,   104,    -1,
     106,   107,   108,   109,    -1,   111,   112,   113,   114,    -1,
     116,   117,   118,    -1,    -1,   121,   122,   123,    -1,    -1,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,    -1,
     106,   107,   108,   109,    -1,   111,   112,   113,   114,   700,
     116,    -1,   118,   704,    -1,   121,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   707,    -1,    -1,    -1,    -1,    -1,
      -1,     1,   715,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    71,    72,    73,    -1,    -1,    76,    -1,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,   122,   123,    -1,    -1,   126,   127,   128,     1,
     130,     3,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,   117,   118,   119,   120,    -1,
      -1,   123,    -1,    -1,   126,   127,   128,     1,   130,     3,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    71,    72,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,    -1,   117,   118,    -1,   120,    -1,    -1,   123,
      -1,    -1,   126,   127,   128,     1,   130,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    71,    72,    73,    -1,    -1,
      76,    -1,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
      -1,   117,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,
     126,   127,   128,     1,   130,     3,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,   117,
     118,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,   127,
     128,     1,   130,     3,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    71,    72,    73,    -1,    -1,    76,    -1,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,    -1,   117,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,   126,   127,   128,     1,
     130,     3,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,   117,   118,    -1,   120,    -1,
      -1,   123,    -1,    -1,   126,    -1,   128,     1,   130,     3,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    49,    50,    -1,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    71,    72,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,    -1,   117,   118,    -1,   120,    -1,    -1,   123,
      -1,    -1,   126,    -1,   128,     1,   130,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    49,    50,    -1,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    71,    72,    73,    -1,    -1,
      76,    -1,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
      -1,   117,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,
     126,    -1,   128,     1,   130,     3,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    49,    50,    -1,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,   117,
     118,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,
     128,     1,   130,     3,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,    49,
      50,    -1,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    71,    72,    73,    -1,    -1,    76,    -1,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,    -1,   117,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,   126,    -1,   128,     1,
     130,     3,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    49,    50,    -1,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,   117,   118,    -1,   120,    -1,
      -1,   123,    -1,    -1,   126,    -1,   128,     1,   130,     3,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    49,    50,    -1,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    71,    72,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,    -1,   117,   118,    -1,   120,    -1,    -1,   123,
      -1,    -1,   126,    -1,   128,     1,   130,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    49,    50,    -1,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    71,    72,    73,    -1,    -1,
      76,    -1,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
      -1,   117,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,
     126,    -1,   128,     1,   130,     3,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    49,    50,    -1,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,   117,
     118,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,
     128,     1,   130,     3,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,    49,
      50,    -1,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    71,    72,    73,    -1,    -1,    76,    -1,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,    -1,   117,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,   126,    -1,   128,     1,
     130,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,   121,
     122,   123,    -1,    -1,   126,    -1,   128,     1,   130,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      24,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,   123,
      -1,    -1,   126,    -1,   128,     1,   130,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,    24,
      -1,    -1,    -1,    -1,    29,    30,    31,   113,    33,   115,
      -1,   117,   118,    38,    39,    -1,    41,   123,    43,    44,
     126,    -1,   128,    -1,   130,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,
      -1,     3,     4,     5,     6,     7,     8,    -1,   113,    11,
     115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,    -1,
      -1,   126,    24,   128,    -1,   130,   131,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,   105,     3,     4,     5,     6,     7,     8,
      -1,   113,    11,   115,    -1,   117,   118,   119,    -1,    -1,
      -1,   123,    -1,    -1,   126,    24,   128,    -1,   130,    -1,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,    -1,     3,     4,     5,
       6,     7,     8,    -1,   113,    11,   115,    -1,   117,   118,
     119,    -1,    -1,    -1,   123,    -1,    -1,   126,    24,   128,
     129,   130,    -1,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,    24,
      -1,    -1,    -1,    -1,    29,    30,    31,   113,    33,   115,
      -1,   117,   118,    38,    39,    -1,    41,   123,    43,    44,
     126,    -1,   128,    -1,   130,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,
      -1,     3,     4,     5,     6,     7,     8,    -1,   113,    11,
     115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,    -1,
      -1,   126,    24,   128,    -1,   130,    -1,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,    -1,     3,     4,     5,     6,     7,     8,
      -1,   113,    11,   115,    -1,   117,   118,   119,    -1,    -1,
      -1,   123,    -1,    -1,   126,    24,   128,    -1,   130,    -1,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,    -1,   117,   118,
      -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,   128,
      -1,   130,     3,     4,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,   104,    24,    -1,    -1,    -1,    -1,    29,
      30,    31,   113,    33,   115,    -1,   117,   118,    38,    39,
      -1,    41,   123,    43,    44,   126,    -1,   128,    -1,   130,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,    -1,     3,     4,     5,     6,
       7,     8,    -1,   113,    11,   115,    -1,   117,   118,    -1,
      -1,    -1,    -1,   123,    -1,    -1,   126,    24,   128,    -1,
     130,    -1,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    -1,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,    96,
      97,    98,    99,    -1,    -1,    -1,    -1,   104,    24,    -1,
      -1,    -1,    -1,    29,    30,    31,   113,    33,   115,    -1,
     117,   118,    38,    39,    -1,    41,   123,    43,    44,   126,
      -1,   128,    -1,   130,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,    -1,
       3,     4,     5,     6,     7,     8,    -1,   113,    11,   115,
      -1,   117,   118,   119,    -1,    -1,    -1,   123,    -1,    -1,
     126,    24,   128,    -1,   130,    -1,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,   104,    -1,     3,     4,     5,     6,     7,     8,    -1,
     113,    11,   115,    -1,   117,   118,   119,    -1,    -1,    -1,
     123,    -1,    -1,   126,    24,   128,    -1,   130,    -1,    29,
      30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,    -1,     3,     4,     5,     6,
       7,     8,    -1,   113,    11,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,   123,    -1,    -1,   126,    24,   128,    -1,
     130,    -1,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,    96,
      97,    98,    99,    -1,    -1,    -1,    -1,   104,    24,    -1,
      -1,    -1,    -1,    29,    30,    31,   113,    33,   115,    -1,
     117,   118,    38,    39,    -1,    41,   123,    43,    44,   126,
      -1,   128,    -1,   130,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,    24,
      -1,    -1,    -1,    -1,    29,    30,    31,   113,    33,   115,
      -1,   117,   118,    38,    39,    -1,    41,   123,    43,    44,
     126,    -1,   128,    -1,   130,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,
      -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,
      24,    -1,    -1,    -1,    -1,    29,    30,    31,   113,    33,
     115,    -1,   117,   118,    38,    39,    -1,    41,   123,    43,
      44,   126,    -1,   128,    -1,   130,    50,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,    24,    -1,    -1,    -1,    -1,    29,    30,    31,   113,
      33,   115,    -1,   117,   118,    38,    39,    -1,    41,   123,
      43,    44,   126,    -1,   128,    -1,   130,    50,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    11,
      -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,   104,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
     113,    33,   115,    -1,   117,   118,    38,    39,    -1,    41,
     123,    43,    44,   126,    -1,   128,    -1,   130,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,    24,    -1,    -1,    -1,    -1,    29,    30,
      31,   113,    33,   115,    -1,   117,   118,    38,    39,    -1,
      41,   123,    43,    44,   126,    -1,   128,    -1,   130,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,   104,    24,    -1,    -1,    -1,    -1,    29,
      30,    31,   113,    33,   115,    -1,   117,   118,    38,    39,
      -1,    41,   123,    43,    44,   126,    -1,   128,    -1,   130,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,    24,    -1,    -1,    -1,    -1,
      29,    30,    31,   113,    33,   115,    -1,   117,   118,    38,
      39,    -1,    41,   123,    43,    44,   126,    -1,   128,    -1,
     130,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    11,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,    24,    -1,    -1,    -1,
      -1,    29,    30,    31,   113,    33,   115,    -1,   117,   118,
      38,    39,    -1,    41,   123,    43,    44,   126,    -1,   128,
      -1,   130,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,   101,    -1,    -1,    -1,   105,     3,     4,
       5,     6,     7,     8,    -1,    -1,    11,   115,    -1,    -1,
      -1,   119,    -1,    22,    -1,    -1,    -1,    -1,   126,    24,
     128,   129,   130,    -1,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    57,    -1,
      -1,    -1,    61,    -1,    -1,    -1,     3,    -1,    -1,    64,
      65,    66,    67,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    97,   102,   103,   104,    -1,   106,   107,   108,
     109,    -1,   111,   112,   113,   114,    -1,   116,    -1,   118,
     115,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,   102,    -1,    -1,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,    -1,   121,   122,   123,   124,   125,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    57,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    10,    -1,    -1,
      81,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      57,    -1,    -1,    -1,    61,    96,    -1,    98,    99,   100,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    81,   116,   117,   118,    -1,    -1,
     121,   122,   123,    -1,    57,    -1,    -1,    -1,    61,    96,
     131,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    81,   116,
     117,   118,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    96,   131,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    10,   116,   117,   118,    14,    -1,   121,   122,
     123,    -1,    -1,    -1,    22,    -1,    -1,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    57,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    81,   116,   117,
     118,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    96,   131,    98,    99,   100,    -1,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    10,   116,   117,   118,    14,    -1,   121,   122,   123,
      -1,    -1,    -1,    22,    23,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    57,    14,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    57,   102,   103,   104,    61,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
      -1,    -1,   121,   122,   123,    10,    81,   126,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,   118,    -1,    -1,   121,   122,   123,    -1,
      -1,   126,    57,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    10,    -1,    -1,    81,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,   118,    -1,    -1,   121,   122,   123,    -1,
      57,   126,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    81,    -1,    -1,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,   118,    -1,    57,   121,   122,   123,    61,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,   118,    -1,    57,   121,   122,   123,
      61,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,   117,   118,    -1,    57,
     121,   122,   123,    61,    -1,   126,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,   117,
     118,    -1,    57,   121,   122,   123,    61,    -1,   126,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,   118,    -1,    57,   121,   122,   123,    61,
      -1,   126,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,   118,    -1,    57,   121,
     122,   123,    61,    -1,   126,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    -1,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
      -1,    57,   121,   122,   123,    61,    -1,   126,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    81,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,    -1,    57,   121,   122,   123,    61,    -1,
     126,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,   117,   118,    -1,    57,   121,   122,
     123,    61,    -1,   126,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,   117,   118,    -1,
      57,   121,   122,   123,    61,    -1,   126,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    81,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,   118,    -1,    57,   121,   122,   123,    61,    -1,   126,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    57,   116,   117,   118,    61,    -1,   121,   122,   123,
      -1,    -1,   126,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    81,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,    -1,    57,   121,   122,   123,    61,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    10,    -1,    81,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    32,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,   117,   118,    -1,    -1,   121,   122,
     123,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,   118,    -1,    57,   121,   122,   123,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    57,   116,   117,   118,    61,    -1,
     121,   122,   123,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    57,   116,   117,   118,    61,   120,   121,   122,
     123,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      57,   116,   117,   118,    61,   120,   121,   122,   123,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    57,   116,
     117,   118,    61,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      -1,    80,    81,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    -1,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
      -1,    57,   121,   122,   123,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    81,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,    -1,    57,   121,   122,   123,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    57,   116,   117,   118,    61,   120,   121,   122,
     123,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      57,   116,   117,   118,    61,   120,   121,   122,   123,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    57,   116,
     117,   118,    61,   120,   121,   122,   123,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    -1,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    57,   116,   117,   118,
      61,   120,   121,   122,   123,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    57,   116,   117,   118,    61,   120,
     121,   122,   123,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    57,   116,   117,   118,    61,   120,   121,   122,
     123,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      57,   116,   117,   118,    61,   120,   121,   122,   123,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    57,   116,
     117,   118,    61,   120,   121,   122,   123,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    -1,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    57,   116,   117,   118,
      61,   120,   121,   122,   123,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    57,   116,   117,   118,    61,   120,
     121,   122,   123,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    57,   116,   117,   118,    61,   120,   121,   122,
     123,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      57,   116,   117,   118,    61,   120,   121,   122,   123,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    57,   116,
     117,   118,    61,   120,   121,   122,   123,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    -1,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    57,   116,   117,   118,
      61,   120,   121,   122,   123,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    57,   116,   117,   118,    61,   120,
     121,   122,   123,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    22,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    57,   116,   117,   118,    61,    -1,   121,   122,
     123,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    81,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      57,   116,   117,   118,    61,   120,   121,   122,   123,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    57,   116,
     117,   118,    61,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      -1,    80,    81,    -1,    -1,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    -1,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
      -1,    57,   121,   122,   123,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    81,    -1,    -1,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,    -1,    57,   121,   122,   123,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    57,   116,   117,   118,    61,    -1,   121,   122,
     123,    -1,    -1,    68,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,   118,    -1,    57,   121,   122,   123,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,   118,    -1,    57,   121,
     122,   123,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,   100,    -1,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
      -1,    57,   121,   122,   123,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    81,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,    -1,    57,   121,   122,   123,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,   117,   118,    -1,    57,   121,   122,
     123,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,   117,   118,    -1,
      57,   121,   122,   123,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    81,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,    -1,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,   118,    -1,    57,   121,   122,   123,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,   118,    -1,    57,   121,   122,   123,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,   117,   118,    -1,    -1,
     121,   122,   123
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   136,   137,     0,     1,     3,     4,     5,     6,     7,
       8,    11,    12,    13,    15,    16,    17,    18,    20,    21,
      23,    24,    26,    27,    28,    29,    30,    31,    33,    34,
      37,    38,    39,    40,    41,    43,    44,    46,    50,    51,
      52,    53,    55,    56,    59,    60,    62,    63,    64,    65,
      66,    67,    69,    71,    72,    76,    78,    81,    96,    97,
      98,    99,   104,   113,   115,   117,   118,   120,   123,   126,
     128,   130,   138,   139,   140,   141,   142,   143,   145,   146,
     147,   149,   152,   153,   154,   155,   156,   158,   159,   162,
     163,   166,   169,   172,   173,   193,   196,   197,   215,   216,
     217,   218,   219,   220,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   236,   237,   238,   239,   240,   140,
     228,    77,   221,   222,   148,   149,   221,    11,    29,    30,
      31,    67,   126,   130,   169,   215,   219,   226,   227,   228,
     229,   231,   232,    69,   148,   228,   140,   128,   149,     7,
     148,   150,     9,    69,   150,    49,    79,   157,   228,   228,
     228,   128,   149,   170,   128,   149,   198,   199,   140,   228,
     228,   228,   228,     7,   128,    18,    28,   154,   154,   119,
     189,   209,   228,   120,   228,   228,    23,   143,   151,   228,
     228,    66,   128,   140,   228,   149,   194,   209,   228,   228,
     228,   228,   228,   228,   228,   127,   138,   144,   209,    70,
     105,   189,   210,   211,   228,   209,   228,   235,    51,   140,
      42,   149,    36,    54,   185,    19,    49,    58,    73,   120,
     125,    10,    14,    22,    57,    61,    81,    96,    98,    99,
     100,   102,   103,   104,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   116,   117,   118,   121,   122,   123,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,   124,   128,   130,    57,    61,   128,   140,
     120,   126,   143,   228,   228,   228,   209,    32,   221,   194,
     120,   120,    76,   149,   189,   212,   213,   214,   228,   126,
     194,   163,   149,   128,   151,    23,    32,   151,    23,    32,
     151,   222,    68,   143,   212,   140,   128,   180,    70,   128,
     149,   200,   201,     1,   100,   203,   204,    32,   101,   151,
     212,   150,   149,   101,   120,   120,   126,   140,   151,   128,
     212,    82,   195,   120,   120,   151,   120,   127,   138,   127,
     228,   101,   129,   101,   129,    32,   131,   222,    80,   101,
     131,     7,   149,   100,   164,   174,    58,   198,   198,   198,
     198,   228,   228,   228,   228,   157,   228,   157,   228,   228,
     228,   228,   228,   228,   228,    24,    69,   149,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   212,
     212,   157,   228,   157,   228,    19,    32,    35,    48,    49,
      58,    69,   118,   183,   223,   224,   240,    23,    32,    23,
      32,    68,    32,   131,   157,   228,   151,   120,   228,    80,
      82,   129,   101,   149,   167,   168,   120,   149,    32,   209,
      31,   228,   157,   228,    31,   228,   157,   228,   151,   140,
     228,    25,   129,   181,   182,   183,   171,   201,   101,   129,
       1,   130,   205,   216,    80,    82,   202,   228,   199,   129,
     189,   228,   160,   212,   129,   130,   205,   216,   101,   129,
     129,   210,   210,   157,   228,   140,   228,   131,   228,   228,
     126,   209,   126,    49,    58,    69,   176,   184,   198,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   129,   131,
      32,    58,   215,   101,   129,    57,    31,   157,   228,    31,
     157,   228,   157,   228,   221,   221,   120,   228,   189,   228,
     214,    82,   101,   127,   164,   228,   129,   228,    23,   151,
      23,   151,   228,    23,   151,   222,    23,   151,   222,    25,
      25,   140,   101,   129,   128,   149,    19,    49,    58,    69,
     186,   129,   201,   100,   204,   209,   228,    45,   228,    47,
      74,   127,   161,   129,   209,   194,   131,   222,   131,   222,
     140,    80,   127,   144,   165,   175,    10,    14,    82,    83,
      84,    85,    86,    87,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   102,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   118,   121,   122,   123,
     124,   125,   149,   177,   178,   120,   224,   215,   228,    23,
      23,   228,    23,    23,   131,   131,   151,   151,   228,   168,
     126,   151,    68,    31,   228,    31,   228,    68,    31,   228,
     151,    31,   228,   151,   140,   228,   182,   201,   100,   208,
     204,   202,    32,   131,   140,   209,   131,    31,   140,   228,
     131,    31,   140,   228,   131,   228,   127,    28,    53,    55,
     127,   139,   153,   186,   149,   103,   128,   179,   179,    68,
      31,    31,    68,    31,    31,    31,    31,   165,   228,   228,
     228,   228,   228,   228,   129,    24,    64,    67,   130,   189,
     207,   216,   105,   191,   202,    75,   192,   228,   205,   216,
     151,   228,   140,   228,   140,   153,   204,   149,   177,   178,
     181,   228,   228,   228,   228,   228,   228,   127,    68,    68,
      68,    68,   208,   131,   209,   189,   190,   228,   228,   143,
     152,   188,   131,    68,    68,   192,   179,   179,   129,    68,
      68,    68,    68,    68,    68,   228,   228,   228,   228,   191,
     202,   189,   206,   207,   216,    32,   131,   216,   228,   228,
     120,   187,   188,   228,   206,   207,   131,   206
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   135,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   142,   142,   142,
     143,   143,   144,   144,   145,   146,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   148,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   155,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   157,   158,   158,   158,   158,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   163,   164,   164,   165,
     165,   165,   166,   167,   167,   167,   168,   168,   170,   171,
     169,   172,   172,   172,   172,   174,   175,   173,   176,   176,
     176,   176,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     179,   179,   180,   181,   181,   181,   182,   182,   182,   182,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     184,   184,   184,   184,   185,   185,   186,   186,   186,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   193,   194,   194,   195,   195,
     195,   196,   196,   196,   196,   196,   197,   197,   197,   198,
     198,   199,   199,   199,   200,   200,   200,   201,   201,   201,
     202,   202,   202,   203,   203,   204,   204,   204,   204,   205,
     205,   205,   205,   206,   206,   206,   207,   207,   207,   207,
     207,   208,   208,   208,   208,   208,   208,   208,   209,   209,
     209,   209,   210,   210,   210,   211,   211,   212,   212,   213,
     213,   214,   214,   214,   214,   214,   215,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   218,   219,   220,   220,
     220,   220,   220,   220,   220,   220,   221,   221,   222,   223,
     223,   224,   224,   225,   225,   226,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   229,   229,   229,   229,   230,   230,   231,   231,   231,
     232,   232,   232,   233,   233,   233,   234,   234,   234,   234,
     234,   234,   234,   234,   235,   235,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   237,
     237,   237,   237,   237,   237,   238,   238,   238,   238,   239,
     239,   239,   239,   240,   240,   240,   240,   240,   240,   240
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     2,     2,     3,     1,     5,     6,     0,     1,     1,
       2,     3,     1,     2,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     1,     1,     1,     1,     2,     1,     2,     3,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     2,
       5,     3,     6,     6,     4,     5,     5,     3,     3,     6,
       5,     6,     5,     6,     3,     4,     6,     7,     6,     7,
       4,     5,     4,     4,     3,     6,     5,     5,     0,     2,
       3,     2,     6,     8,     1,     1,     1,     0,     2,     0,
       2,     3,     5,     1,     2,     3,     1,     3,     0,     0,
       8,     0,     1,     2,     2,     0,     0,     9,     3,     3,
       5,     5,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     3,     0,     1,     3,     4,     4,     6,     6,
       0,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     0,     1,     2,
       2,     0,     2,     3,     4,     4,     2,     4,     0,     2,
       2,     4,     4,     4,     5,     4,     0,     1,     1,     1,
       3,     3,     4,     5,     1,     1,     3,     1,     2,     3,
       0,     2,     2,     0,     4,     0,     2,     2,     1,     4,
       4,     6,     1,     0,     1,     1,     3,     4,     3,     4,
       6,     0,     2,     2,     2,     2,     2,     2,     1,     1,
       3,     3,     1,     1,     1,     3,     3,     0,     1,     1,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     5,     2,     2,     6,
       6,     4,     9,     9,     7,     6,     6,     4,     9,     9,
       7,     4,     6,     6,     9,     9,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     4,     1,
       3,     2,     3,     1,     3,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       3,     3,     3,     3,     4,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParserContext* context)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}



struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;
    /* Used to determine if this is the first time this instance has
       been used.  */
    int yynew;
  };

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = (yypstate *) malloc (sizeof *yyps);
  if (!yyps)
    return YY_NULLPTR;
  yyps->yynew = 1;
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
#ifndef yyoverflow
  /* If the stack was reallocated but the parse did not complete, then the
     stack still needs to be freed.  */
  if (!yyps->yynew && yyps->yyss != yyps->yyssa)
    YYSTACK_FREE (yyps->yyss);
#endif
  free (yyps);
}

#define yynerrs yyps->yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yyerror_range yyps->yyerror_range
#define yystacksize yyps->yystacksize


/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  if (!yyps->yynew)
    {
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = *yypushed_loc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 404 "chapel.ypp" /* yacc.c:1661  */
    { yyblock = (yyval.pblockstmt); }
#line 4308 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 409 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt();                                  resetTempID(); }
#line 4314 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 410 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 4320 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 417 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 4326 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 422 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 4332 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 423 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 4338 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 439 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 4344 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 440 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 4350 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 441 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4356 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 442 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 4362 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 443 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 4368 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 444 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 4374 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 445 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_DELETE, (yyvsp[-1].pexpr)); }
#line 4380 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 446 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 4386 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 447 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 4392 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 448 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4398 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 449 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4404 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 450 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 4410 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 451 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 4416 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 452 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 4422 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 453 "chapel.ypp" /* yacc.c:1661  */
    { printf("syntax error"); clean_exit(1); }
#line 4428 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 458 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[-2].pch), new BlockStmt(), yyfilename, (yyvsp[-4].b), (yylsp[-4]).comment))); }
#line 4434 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 460 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[-3].pch), (yyvsp[-1].pblockstmt), yyfilename, (yyvsp[-5].b), (yylsp[-5]).comment))); }
#line 4440 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 464 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4446 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 465 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4452 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 466 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4458 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 481 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 4464 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 482 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 4470 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 487 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 4476 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 488 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 4482 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 493 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].pcallexpr)); }
#line 4488 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 497 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 4494 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 501 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "=");   }
#line 4500 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 502 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "+=");  }
#line 4506 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 503 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "-=");  }
#line 4512 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 504 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "*=");  }
#line 4518 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 505 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "/=");  }
#line 4524 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 506 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "%=");  }
#line 4530 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 507 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "**="); }
#line 4536 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 508 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "&=");  }
#line 4542 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 509 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "|=");  }
#line 4548 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 510 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "^=");  }
#line 4554 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 511 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), ">>="); }
#line 4560 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 512 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<<="); }
#line 4566 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 513 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 4572 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 514 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 4578 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 515 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 4584 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 519 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = NULL; }
#line 4590 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 524 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 4596 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 528 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 4602 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 529 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 4608 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 533 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 4614 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 534 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 4620 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 538 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, new SymExpr(gVoid)); }
#line 4626 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 539 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 4632 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 543 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 4638 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 545 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 4644 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 546 "chapel.ypp" /* yacc.c:1661  */
    { applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 4650 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 559 "chapel.ypp" /* yacc.c:1661  */
    {
#ifdef HAVE_LLVM
      if (externC) {
        (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
      } else {
        USR_FATAL(new BlockStmt(), "extern block syntax is turned off. Use --extern-c flag to turn on.");
      }
#else
      USR_FATAL(new BlockStmt(), "Chapel must be built with llvm in order to use the extern block syntax");
#endif
    }
#line 4666 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 573 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 4672 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 574 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4678 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 575 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4684 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 576 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 4690 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 577 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4696 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 578 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 4702 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 579 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false,  true); }
#line 4708 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 580 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 4714 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 581 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false,  true); }
#line 4720 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 582 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4726 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 583 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt)); }
#line 4732 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 584 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt)); }
#line 4738 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 585 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), true); }
#line 4744 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 586 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true); }
#line 4750 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 587 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt)); }
#line 4756 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 588 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt)); }
#line 4762 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 590 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4772 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 596 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4782 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 602 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true);
    }
#line 4792 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 608 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true);
    }
#line 4802 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 614 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4813 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 101:
#line 621 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4824 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 630 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("_build_tuple", (yyvsp[-1].pcallexpr)); }
#line 4830 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 103:
#line 634 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 4836 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 635 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4842 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 105:
#line 636 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 4848 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 106:
#line 637 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 4854 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 107:
#line 642 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 4860 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 646 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(); }
#line 4866 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 647 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 4872 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 110:
#line 652 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 4878 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 654 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 4884 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 661 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch), NULL, (yyvsp[-5].ptype), (yyvsp[-3].pcallexpr), (yyvsp[-1].pblockstmt), FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 4893 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 666 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch), (yyvsp[-6].pch), (yyvsp[-5].ptype), (yyvsp[-3].pcallexpr), (yyvsp[-1].pblockstmt), FLAG_EXTERN,
                                             (yylsp[-5]).comment));
    }
#line 4902 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 673 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_CLASS);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4912 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 678 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_RECORD);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4922 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 683 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_UNION);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4932 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 117:
#line 691 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = NULL; }
#line 4938 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 692 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 4944 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 697 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 4950 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 699 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 4956 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 701 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 4962 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 706 "chapel.ypp" /* yacc.c:1661  */
    {
      EnumType* pdt = (yyvsp[-1].penumtype);
      TypeSymbol* pst = new TypeSymbol((yyvsp[-3].pch), pdt);
      (yyvsp[-1].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
#line 4973 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 716 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.penumtype) = new EnumType();
      (yyvsp[0].pdefexpr)->sym->type = (yyval.penumtype);
      (yyval.penumtype)->constants.insertAtTail((yyvsp[0].pdefexpr));
      (yyval.penumtype)->defaultValue = (yyvsp[0].pdefexpr)->sym;
      (yyval.penumtype)->doc = context->latestComment;
      context->latestComment = NULL;
    }
#line 4986 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 124:
#line 725 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.penumtype) = (yyvsp[-1].penumtype);
    }
#line 4994 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 125:
#line 729 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyvsp[-2].penumtype)->constants.insertAtTail((yyvsp[0].pdefexpr));
      (yyvsp[0].pdefexpr)->sym->type = (yyvsp[-2].penumtype);
    }
#line 5003 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 126:
#line 736 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 5009 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 737 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 5015 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 742 "chapel.ypp" /* yacc.c:1661  */
    {
      captureTokens = 1;
      captureString[0] = '\0';
    }
#line 5024 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 747 "chapel.ypp" /* yacc.c:1661  */
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 5033 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 752 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyvsp[-5].pfnsymbol)->retTag = (yyvsp[-3].retTag);
      if ((yyvsp[-3].retTag) == RET_REF)
        USR_FATAL("'ref' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[-2].pexpr))
        (yyvsp[-5].pfnsymbol)->retExprType = new BlockStmt((yyvsp[-2].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[-1].pexpr))
        (yyvsp[-5].pfnsymbol)->where = new BlockStmt((yyvsp[-1].pexpr));
      (yyvsp[-5].pfnsymbol)->insertAtTail((yyvsp[0].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[-5].pfnsymbol)));
    }
#line 5053 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 772 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 5064 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 778 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 5076 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 785 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol((yyvsp[0].pch));
                  (yyval.pfnsymbol)->addFlag(FLAG_EXPORT);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 5089 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 793 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol((yyvsp[0].pch));
                  (yyval.pfnsymbol)->addFlag(FLAG_EXTERN);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 5102 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 804 "chapel.ypp" /* yacc.c:1661  */
    {
      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString[0] = '\0';
    }
#line 5112 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 810 "chapel.ypp" /* yacc.c:1661  */
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 5123 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 817 "chapel.ypp" /* yacc.c:1661  */
    {
      FnSymbol* fn = (yyvsp[-5].pfnsymbol);

      fn->copyFlags((yyvsp[-8].pfnsymbol));
      // The user explicitly named this function (controls mangling).
      if (*(yyvsp[-8].pfnsymbol)->name)
        fn->cname = (yyvsp[-8].pfnsymbol)->name;

      if ((yyvsp[-7].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[-5].pfnsymbol), (yyvsp[-3].retTag), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), (yylsp[-8]).comment);
      context->latestComment = NULL;
    }
#line 5146 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 138:
#line 839 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 5154 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 843 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 5163 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 848 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pch));
    }
#line 5171 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 852 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pch));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 5180 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 860 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = astr("~", (yyvsp[0].pch)); }
#line 5186 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 144:
#line 861 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "&"; }
#line 5192 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 862 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "|"; }
#line 5198 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 863 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "^"; }
#line 5204 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 147:
#line 864 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "~"; }
#line 5210 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 865 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "=="; }
#line 5216 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 866 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "!="; }
#line 5222 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 867 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<="; }
#line 5228 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 868 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">="; }
#line 5234 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 869 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<"; }
#line 5240 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 153:
#line 870 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">"; }
#line 5246 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 871 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "+"; }
#line 5252 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 872 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "-"; }
#line 5258 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 873 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "*"; }
#line 5264 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 157:
#line 874 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "/"; }
#line 5270 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 875 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<<"; }
#line 5276 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 876 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">>"; }
#line 5282 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 877 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "%"; }
#line 5288 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 878 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "**"; }
#line 5294 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 879 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "!"; }
#line 5300 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 880 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "chpl_by"; }
#line 5306 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 164:
#line 881 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "#"; }
#line 5312 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 882 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "align"; }
#line 5318 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 883 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<=>"; }
#line 5324 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 884 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<~>"; }
#line 5330 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 888 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "="; }
#line 5336 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 889 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "+="; }
#line 5342 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 890 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "-="; }
#line 5348 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 891 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "*="; }
#line 5354 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 892 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "/="; }
#line 5360 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 893 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "%="; }
#line 5366 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 894 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "**="; }
#line 5372 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 895 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "&="; }
#line 5378 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 896 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "|="; }
#line 5384 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 897 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "^="; }
#line 5390 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 898 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">>="; }
#line 5396 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 899 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<<="; }
#line 5402 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 903 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 5408 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 904 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 5414 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 908 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 5420 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 912 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 5426 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 913 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 5432 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 914 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 5438 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 919 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 5444 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 921 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 5450 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 923 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 5456 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 925 "chapel.ypp" /* yacc.c:1661  */
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 5462 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 929 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_BLANK; }
#line 5468 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 930 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_IN; }
#line 5474 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 931 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_INOUT; }
#line 5480 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 932 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_OUT; }
#line 5486 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 933 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST; }
#line 5492 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 934 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST_IN; }
#line 5498 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 935 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST_REF; }
#line 5504 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 936 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_PARAM; }
#line 5510 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 937 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_REF; }
#line 5516 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 938 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_TYPE; }
#line 5522 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 942 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_BLANK; }
#line 5528 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 201:
#line 943 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_PARAM; }
#line 5534 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 202:
#line 944 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_REF;   }
#line 5540 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 945 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_TYPE;  }
#line 5546 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 949 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.procIter) = ProcIter_PROC; }
#line 5552 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 950 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.procIter) = ProcIter_ITER; }
#line 5558 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 954 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_VALUE; }
#line 5564 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 207:
#line 955 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_VALUE; }
#line 5570 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 208:
#line 956 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_REF; }
#line 5576 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 209:
#line 957 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_PARAM; }
#line 5582 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 210:
#line 958 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_TYPE; }
#line 5588 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 211:
#line 962 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = NULL; }
#line 5594 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 214:
#line 968 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 5600 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 215:
#line 973 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 5606 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 216:
#line 975 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
#line 5612 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 217:
#line 979 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
#line 5618 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 219:
#line 984 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5624 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 220:
#line 985 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[0].pdefexpr)->sym->addFlag(FLAG_PARAM); (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5630 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 221:
#line 989 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5636 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 222:
#line 990 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5642 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 223:
#line 995 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 5648 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 224:
#line 997 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 5654 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 225:
#line 999 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 5660 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 226:
#line 1004 "chapel.ypp" /* yacc.c:1661  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 5677 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 227:
#line 1017 "chapel.ypp" /* yacc.c:1661  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 5695 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 228:
#line 1033 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5701 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 229:
#line 1035 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5707 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 230:
#line 1037 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 5713 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 231:
#line 1042 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_PARAM);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5724 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 232:
#line 1049 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_CONST);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5735 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 233:
#line 1056 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_REF_VAR);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5746 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 234:
#line 1063 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-4].flag));
      flags.insert(FLAG_CONST);
      flags.insert(FLAG_REF_VAR);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-4]).comment);
    }
#line 5758 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 235:
#line 1071 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5768 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 236:
#line 1079 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_UNKNOWN; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5774 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 237:
#line 1080 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_CONFIG;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5780 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 238:
#line 1081 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_EXTERN;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5786 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 240:
#line 1087 "chapel.ypp" /* yacc.c:1661  */
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 5795 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 241:
#line 1095 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 5801 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 242:
#line 1097 "chapel.ypp" /* yacc.c:1661  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));
      var->addFlag(FLAG_ARRAY_ALIAS);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(var, (yyvsp[0].pexpr), (yyvsp[-2].pexpr)));
    }
#line 5811 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 243:
#line 1103 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 5817 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 244:
#line 1108 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 5823 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 245:
#line 1110 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 5829 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 246:
#line 1112 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 5835 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 247:
#line 1117 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 5841 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 248:
#line 1119 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 5847 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 249:
#line 1121 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 5853 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 250:
#line 1127 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5859 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 251:
#line 1128 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 5865 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 252:
#line 1129 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5871 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 253:
#line 1133 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5877 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 254:
#line 1135 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)); }
#line 5883 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 255:
#line 1139 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5889 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 256:
#line 1140 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5895 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 257:
#line 1141 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 5901 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 258:
#line 1142 "chapel.ypp" /* yacc.c:1661  */
    {printf("bad type specification"); }
#line 5907 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 259:
#line 1163 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 5915 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 260:
#line 1167 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 5923 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 261:
#line 1171 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 5935 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 262:
#line 1178 "chapel.ypp" /* yacc.c:1661  */
    {printf("bad array type specification"); clean_exit(1); }
#line 5941 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 263:
#line 1182 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5947 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 264:
#line 1183 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5953 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 265:
#line 1184 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5959 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 266:
#line 1189 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 5965 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 267:
#line 1191 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 5971 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 268:
#line 1197 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 5977 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 269:
#line 1199 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 5983 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 270:
#line 1201 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 5989 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 271:
#line 1205 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5995 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 272:
#line 1206 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 6001 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 273:
#line 1207 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 6007 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 274:
#line 1208 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("_domain"); }
#line 6013 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 275:
#line 1209 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr( "_singlevar"); }
#line 6019 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 276:
#line 1210 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr( "_syncvar"); }
#line 6025 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 277:
#line 1211 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 6031 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 278:
#line 1217 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 6037 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 279:
#line 1218 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pdefexpr)); }
#line 6043 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 280:
#line 1219 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6049 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 281:
#line 1220 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pdefexpr)); }
#line 6055 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 282:
#line 1224 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 6061 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 283:
#line 1225 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 6067 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 284:
#line 1226 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 6073 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 285:
#line 1230 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6079 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 286:
#line 1231 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6085 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 287:
#line 1235 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 6091 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 289:
#line 1240 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 6097 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 290:
#line 1241 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6103 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 291:
#line 1245 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pdefexpr)); }
#line 6109 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 292:
#line 1246 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 6115 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 293:
#line 1247 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedAliasActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 6121 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 294:
#line 1248 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 6127 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 296:
#line 1253 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 6133 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 302:
#line 1270 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 6139 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 303:
#line 1272 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 6145 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 304:
#line 1274 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 6151 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 305:
#line 1276 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 6157 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 306:
#line 1278 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 6163 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 307:
#line 1280 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 6169 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 308:
#line 1282 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 6175 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 309:
#line 1287 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6181 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 310:
#line 1289 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 6187 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 311:
#line 1291 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6193 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 312:
#line 1293 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6199 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 313:
#line 1295 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 6205 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 314:
#line 1297 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6211 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 315:
#line 1299 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6217 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 316:
#line 1301 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 6223 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 317:
#line 1303 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6229 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 318:
#line 1305 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6235 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 319:
#line 1307 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 6241 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 320:
#line 1309 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6247 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 321:
#line 1311 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 6258 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 322:
#line 1318 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 6268 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 323:
#line 1324 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 6278 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 324:
#line 1330 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 6288 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 325:
#line 1336 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 6298 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 326:
#line 1345 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(new DefExpr(buildIfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)))); }
#line 6304 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 327:
#line 1349 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new SymExpr(gNil); }
#line 6310 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 335:
#line 1365 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6316 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 336:
#line 1369 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = NULL; }
#line 6322 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 338:
#line 1374 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 6328 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 339:
#line 1379 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pIntentExpr).first, (yyvsp[0].pIntentExpr).second); }
#line 6334 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 340:
#line 1381 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pIntentExpr).first);
      (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pIntentExpr).second);
    }
#line 6343 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 341:
#line 1389 "chapel.ypp" /* yacc.c:1661  */
    {
      ArgSymbol* tiMark = tiMarkForIntent((yyvsp[-1].pt));
      if (!tiMark)
        USR_FATAL_CONT((yyvsp[0].pexpr), "Unsupported intent in with clause");
      (yyval.pIntentExpr).first = new SymExpr(tiMark);
      (yyval.pIntentExpr).second = (yyvsp[0].pexpr);
    }
#line 6355 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 342:
#line 1398 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pIntentExpr).first = (yyvsp[-2].pexpr), (yyval.pIntentExpr).second = (yyvsp[0].pexpr); }
#line 6361 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 344:
#line 1404 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6367 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 345:
#line 1409 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW, (yyvsp[0].pexpr)); }
#line 6373 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 346:
#line 1414 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 6379 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 355:
#line 1430 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 6385 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 356:
#line 1432 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("_cast", (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6391 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 357:
#line 1434 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_bounded_range", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6397 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 358:
#line 1436 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_partially_bounded_range", buildDotExpr("BoundedRangeType", "boundedLow"), (yyvsp[-1].pexpr)); }
#line 6403 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 359:
#line 1438 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_partially_bounded_range", buildDotExpr("BoundedRangeType", "boundedHigh"), (yyvsp[0].pexpr)); }
#line 6409 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 360:
#line 1440 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_unbounded_range", buildDotExpr("BoundedRangeType", "boundedNone")); }
#line 6415 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 367:
#line 1463 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 6421 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 368:
#line 1464 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 6427 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 369:
#line 1465 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 6433 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 370:
#line 1469 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 6439 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 371:
#line 1470 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 6445 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 372:
#line 1471 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 6451 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 373:
#line 1479 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 6457 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 374:
#line 1480 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 6463 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 375:
#line 1481 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 6469 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 376:
#line 1485 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch));    }
#line 6475 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 377:
#line 1486 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 6481 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 378:
#line 1487 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 6487 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 379:
#line 1488 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 6493 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 380:
#line 1489 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 6499 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 381:
#line 1490 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr)); }
#line 6505 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 382:
#line 1491 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 6511 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 383:
#line 1493 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 6519 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 384:
#line 1499 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6525 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 385:
#line 1500 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6531 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 386:
#line 1504 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6537 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 387:
#line 1505 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6543 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 388:
#line 1506 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6549 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 389:
#line 1507 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6555 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 390:
#line 1508 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6561 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 391:
#line 1509 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6567 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 392:
#line 1510 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6573 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 393:
#line 1511 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6579 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 394:
#line 1512 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6585 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 395:
#line 1513 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6591 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 396:
#line 1514 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6597 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 397:
#line 1515 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6603 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 398:
#line 1516 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6609 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 399:
#line 1517 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6615 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 400:
#line 1518 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6621 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 401:
#line 1519 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6627 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 402:
#line 1520 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6633 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 403:
#line 1521 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6639 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 404:
#line 1522 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6645 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 405:
#line 1523 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6651 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 406:
#line 1524 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6657 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 407:
#line 1525 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6663 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 408:
#line 1526 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6669 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 409:
#line 1530 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 6675 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 410:
#line 1531 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 6681 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 411:
#line 1532 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 6687 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 412:
#line 1533 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 6693 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 413:
#line 1534 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 6699 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 414:
#line 1535 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 6705 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 415:
#line 1539 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6711 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 416:
#line 1540 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6717 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 417:
#line 1541 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6723 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 418:
#line 1542 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6729 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 419:
#line 1546 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6735 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 420:
#line 1547 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6741 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 421:
#line 1548 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6747 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 422:
#line 1549 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6753 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 423:
#line 1554 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 6759 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 424:
#line 1555 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 6765 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 425:
#line 1556 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 6771 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 426:
#line 1557 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 6777 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 427:
#line 1558 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 6783 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 428:
#line 1559 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 6789 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 429:
#line 1560 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 6795 "bison-chapel.cpp" /* yacc.c:1661  */
    break;


#line 6799 "bison-chapel.cpp" /* yacc.c:1661  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, context);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  yyps->yynew = 1;

yypushreturn:
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
