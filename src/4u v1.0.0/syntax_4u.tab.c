/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax_4u.y" /* yacc.c:337  */


#include "4u.h"
bool error_syntaxical=false;
bool error_semantical=false;
/* Our hash table */
GHashTable* table_variable;

/* Function to delete variables declared inside a syntax tree */
void supprime_variable(GNode*);

/* Function to tell if a tree node contains a decimal or not */
bool decimal(GNode*);

/* Our Variable structure which has as member the type and a generic pointer to the value */
typedef struct Variable Variable;

struct Variable{
	char* type;
	GNode* value;
};


#line 94 "syntax_4u.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "syntax_4u.tab.h".  */
#ifndef YY_YY_SYNTAX_4U_TAB_H_INCLUDED
# define YY_YY_SYNTAX_4U_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_INCREMENTATION = 258,
    TOK_DECREMENTATION = 259,
    TOK_PLUS = 260,
    TOK_MOINS = 261,
    TOK_MUL = 262,
    TOK_DIV = 263,
    TOK_MOD = 264,
    TOK_PUISSANCE = 265,
    TOK_ET = 266,
    TOK_OU = 267,
    TOK_NON = 268,
    TOK_EQU = 269,
    TOK_DIFF = 270,
    TOK_SUP = 271,
    TOK_INF = 272,
    TOK_SUPEQU = 273,
    TOK_INFEQU = 274,
    TOK_PARG = 275,
    TOK_PARD = 276,
    TOK_ENTIER = 277,
    TOK_DECIMAL = 278,
    TOK_VRAI = 279,
    TOK_FAUX = 280,
    TOK_AFFECT = 281,
    TOK_FINSTR = 282,
    TOK_IN = 283,
    TOK_CROG = 284,
    TOK_CROD = 285,
    TOK_AFFICHER = 286,
    TOK_DEF_VAR = 287,
    TOK_VARB = 288,
    TOK_VARE = 289,
    TOK_VARD = 290,
    TOK_VART = 291,
    TOK_SI = 292,
    TOK_ALORS = 293,
    TOK_SINON = 294,
    TOK_COMMENT = 295,
    TOK_AFFECT_PLUS = 296,
    TOK_AFFECT_MOINS = 297,
    TOK_AFFECT_MUL = 298,
    TOK_AFFECT_DIV = 299,
    TOK_AFFECT_MOD = 300,
    TOK_AFFECT_ET = 301,
    TOK_AFFECT_OU = 302,
    TOK_POINT_INTERROGATION = 303,
    TOK_DOUBLE_POINT = 304,
    TOK_FAIRE = 305,
    TOK_CROIX = 306,
    TOK_TEXTE = 307,
    TOK_SUPPR = 308,
    TOK_SAISIR = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "syntax_4u.y" /* yacc.c:352  */

	long entier;
	double decimal;
	char* texte;
	GNode*	noeud;

#line 199 "syntax_4u.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_4U_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

#define YYUNDEFTOK  2
#define YYMAXUTOK   309

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   112,   118,   120,   126,   133,   138,   142,
     147,   152,   157,   162,   167,   172,   177,   182,   188,   194,
     200,   206,   212,   219,   230,   236,   241,   251,   260,   268,
     274,   280,   310,   322,   334,   346,   358,   370,   376,   382,
     412,   424,   436,   448,   460,   472,   478,   484,   514,   526,
     538,   568,   580,   606,   632,   658,   684,   695,   701,   707,
     736,   747,   758,   777,   796,   800,   804,   808,   812,   816,
     820,   826,   832,   838,   844,   849,   854,   873,   879,   886,
     893,   899,   906,   913,   920,   927,   934,   941,   948,   955,
     963,   971,   979,   987,   993,  1012,  1019,  1026,  1033,  1040
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_INCREMENTATION",
  "TOK_DECREMENTATION", "TOK_PLUS", "TOK_MOINS", "TOK_MUL", "TOK_DIV",
  "TOK_MOD", "TOK_PUISSANCE", "TOK_ET", "TOK_OU", "TOK_NON", "TOK_EQU",
  "TOK_DIFF", "TOK_SUP", "TOK_INF", "TOK_SUPEQU", "TOK_INFEQU", "TOK_PARG",
  "TOK_PARD", "TOK_ENTIER", "TOK_DECIMAL", "TOK_VRAI", "TOK_FAUX",
  "TOK_AFFECT", "TOK_FINSTR", "TOK_IN", "TOK_CROG", "TOK_CROD",
  "TOK_AFFICHER", "TOK_DEF_VAR", "TOK_VARB", "TOK_VARE", "TOK_VARD",
  "TOK_VART", "TOK_SI", "TOK_ALORS", "TOK_SINON", "TOK_COMMENT",
  "TOK_AFFECT_PLUS", "TOK_AFFECT_MOINS", "TOK_AFFECT_MUL",
  "TOK_AFFECT_DIV", "TOK_AFFECT_MOD", "TOK_AFFECT_ET", "TOK_AFFECT_OU",
  "TOK_POINT_INTERROGATION", "TOK_DOUBLE_POINT", "TOK_FAIRE", "TOK_CROIX",
  "TOK_TEXTE", "TOK_SUPPR", "TOK_SAISIR", "$accept", "entree", "bloc_code",
  "code", "commentaire", "instruction", "variable_entiere",
  "variable_decimale", "variable_booleenne", "variable_texte", "condition",
  "condition_si", "condition_sinon", "boucle_for", "boucle_while",
  "boucle_do_while", "affectation", "saisie", "affichage", "suppression",
  "expression_arithmetique", "expression_booleenne", "expression_texte",
  "addition", "soustraction", "multiplication", "division", "modulo", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -82

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-82)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -82,     5,   112,   -82,   -82,   250,   174,   -82,   -82,   -82,
     -82,   250,   -82,   -82,   -27,    18,   -82,   -82,   216,   224,
     -13,    63,   -82,   -17,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,    96,    96,   250,   250,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   197,    35,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   290,   113,   -11,   342,     6,    27,   136,     8,    21,
      52,    54,    60,    78,    83,    96,    96,    96,    96,    96,
      96,    90,    93,    96,    96,    96,    96,    96,    96,   250,
     250,   250,   -29,   -29,   -82,   -82,   102,    96,    77,    77,
      44,   316,   233,   -82,   -82,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    -6,    85,    96,   250,
     250,   250,   250,    86,   -82,   -82,   -82,   -82,   121,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   226,   359,   368,   375,
     384,   400,   -82,   -82,   409,   416,   425,   441,   450,   457,
     124,   225,   327,   106,   115,   -82,   -82,   491,   -82,   -82,
      77,    77,   -82,   -82,   -82,   518,   518,   518,   518,   518,
     518,   -82,    96,    96,    34,    44,    44,   -82,   -82,   -82,
     -82,   250,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   117,
     466,   482,   -82,    96,   -21,   499,   -82,    96,    96,   123,
     498,   -82,   -82,   126,   273,   283,   -82,   -82,   127,   -82,
     -82,   -82,   -82,   -82,   128,   -82,   -82
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     7,     0,     0,    19,    17,    18,
      20,     0,     8,     4,     0,     0,     5,     6,     0,     0,
       0,     0,    11,     0,    12,    13,    14,     9,    16,    10,
      15,     0,     0,     0,     0,    60,    61,    74,    75,    62,
      63,    76,     0,     0,    64,    65,    66,    67,    68,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     4,     0,     0,    69,    72,
      77,     0,     0,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,    58,     4,     0,    59,
      53,    55,    54,    52,    37,    38,     0,     0,     0,     0,
       0,     0,    45,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    22,     0,    73,    80,
      95,    96,    97,    98,    99,    83,    84,    85,    86,    87,
      88,     4,     0,     0,     0,    78,    79,    81,    82,     4,
      24,     0,    31,    32,    33,    34,    35,    36,    39,    40,
      41,    42,    43,    44,    47,    48,    49,    50,    51,     0,
       0,     0,     4,     0,     0,     0,    26,     0,     0,     0,
       0,    29,     4,     0,     0,     0,    27,     4,     0,    30,
      91,    89,    92,    90,     0,    23,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -81,   159,   -82,   -82,     9,    10,    17,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
      -5,    -3,    40,   -82,   -82,   -82,   -82,   -82
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    56,    57,    16,    17,    39,    40,    41,    50,
      22,    23,    86,    24,    25,    26,    27,    28,    29,    30,
      54,    43,    53,    44,    45,    46,    47,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    51,    21,    52,   145,     3,   201,    10,    55,    10,
      84,    18,    19,    79,    58,    62,   116,   109,   110,    20,
     111,   112,    85,    49,    59,    60,    88,    89,   202,    91,
      90,    92,    61,    80,    81,   119,   170,    93,    94,    95,
      96,    97,    98,    99,   117,   161,   109,   110,   120,   111,
     112,     7,     8,     9,    10,   192,   113,    21,   111,   112,
     126,   127,   128,   129,   130,   131,    18,    19,   134,   135,
     136,   137,   138,   139,    20,   118,   140,   141,   142,   121,
     189,   122,   147,   193,    97,    98,    99,   123,   194,    82,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,    31,    32,   164,    83,   124,   165,   166,   167,   168,
     125,   199,    -2,     4,   162,   163,    87,   132,    35,    36,
     133,   208,   143,   144,   109,   110,   214,   111,   112,   146,
       8,     9,     5,   187,   169,   109,   110,     4,   111,   112,
     115,   171,   188,     6,   196,     7,     8,     9,    10,    11,
     206,   184,    12,   209,   215,   216,     5,   190,   191,     2,
       0,     0,    13,    -3,     0,    14,    15,     6,   195,     7,
       8,     9,    10,    11,     0,    -3,    12,     0,     0,    31,
      32,     0,     0,     0,    -3,    -3,    13,    33,   200,    14,
      15,     0,   204,   205,    34,     0,    35,    36,    37,    38,
      93,    94,    95,    96,    97,    98,    99,     7,     8,     9,
      10,   100,   101,   102,   103,   104,   105,     0,   106,    63,
      64,     0,     0,     0,     0,   107,    49,    71,    72,    93,
      94,    95,    96,    97,    98,    99,   109,   110,     0,   111,
     112,     0,    65,     0,   109,   110,   108,   111,   112,     0,
      73,     0,   185,   172,   149,    31,    32,    66,    67,    68,
      69,    70,     0,    33,     0,    74,    75,    76,    77,    78,
      34,     0,    35,    36,    37,    38,    93,    94,    95,    96,
      97,    98,    99,     7,     8,     9,    93,    94,    95,    96,
      97,    98,    99,    93,    94,    95,    96,    97,    98,    99,
       0,     0,   210,   211,   100,   101,   102,   103,   104,   105,
       0,     0,   212,   213,     0,     0,     0,   114,   107,    93,
      94,    95,    96,    97,    98,    99,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,   148,   109,   110,
       0,   111,   112,     0,   107,    93,    94,    95,    96,    97,
      98,    99,     0,     0,   186,     0,   100,   101,   102,   103,
     104,   105,    93,    94,    95,    96,    97,    98,    99,     0,
     107,    93,    94,    95,    96,    97,    98,    99,    93,    94,
      95,    96,    97,    98,    99,     0,   173,    93,    94,    95,
      96,    97,    98,    99,     0,   174,     0,     0,     0,     0,
       0,     0,   175,    93,    94,    95,    96,    97,    98,    99,
       0,   176,    93,    94,    95,    96,    97,    98,    99,    93,
      94,    95,    96,    97,    98,    99,     0,   177,    93,    94,
      95,    96,    97,    98,    99,     0,   178,     0,     0,     0,
       0,     0,     0,   179,    93,    94,    95,    96,    97,    98,
      99,     0,   180,    93,    94,    95,    96,    97,    98,    99,
      93,    94,    95,    96,    97,    98,    99,     0,   181,    93,
      94,    95,    96,    97,    98,    99,     0,   182,     0,     0,
       0,     0,     0,     0,   183,    93,    94,    95,    96,    97,
      98,    99,     0,   197,    93,    94,    95,    96,    97,    98,
      99,    93,    94,    95,    96,    97,    98,    99,     0,   198,
     109,   110,   148,   111,   112,     0,     0,     0,     0,   207,
     203,    93,    94,    95,    96,    97,    98,    99
};

static const yytype_int16 yycheck[] =
{
       5,     6,     2,     6,    85,     0,    27,    36,    11,    36,
      27,     2,     2,    26,    14,    15,    27,    11,    12,     2,
      14,    15,    39,    52,    15,    15,    31,    32,    49,    34,
      33,    34,    15,    46,    47,    27,   117,     3,     4,     5,
       6,     7,     8,     9,    38,    51,    11,    12,    27,    14,
      15,    33,    34,    35,    36,    21,    21,    57,    14,    15,
      65,    66,    67,    68,    69,    70,    57,    57,    73,    74,
      75,    76,    77,    78,    57,    48,    79,    80,    81,    27,
     161,    27,    87,    49,     7,     8,     9,    27,   169,    26,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     5,     6,   108,    41,    27,   109,   110,   111,   112,
      27,   192,     0,     1,    29,    30,    20,    27,    22,    23,
      27,   202,    82,    83,    11,    12,   207,    14,    15,    27,
      34,    35,    20,    27,    48,    11,    12,     1,    14,    15,
      27,    20,    27,    31,    27,    33,    34,    35,    36,    37,
      27,    27,    40,    27,    27,    27,    20,   162,   163,     0,
      -1,    -1,    50,    27,    -1,    53,    54,    31,   171,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,     5,
       6,    -1,    -1,    -1,    48,    49,    50,    13,   193,    53,
      54,    -1,   197,   198,    20,    -1,    22,    23,    24,    25,
       3,     4,     5,     6,     7,     8,     9,    33,    34,    35,
      36,    14,    15,    16,    17,    18,    19,    -1,    21,     3,
       4,    -1,    -1,    -1,    -1,    28,    52,     3,     4,     3,
       4,     5,     6,     7,     8,     9,    11,    12,    -1,    14,
      15,    -1,    26,    -1,    11,    12,    49,    14,    15,    -1,
      26,    -1,    27,    27,    21,     5,     6,    41,    42,    43,
      44,    45,    -1,    13,    -1,    41,    42,    43,    44,    45,
      20,    -1,    22,    23,    24,    25,     3,     4,     5,     6,
       7,     8,     9,    33,    34,    35,     3,     4,     5,     6,
       7,     8,     9,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    29,    30,    14,    15,    16,    17,    18,    19,
      -1,    -1,    29,    30,    -1,    -1,    -1,    27,    28,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    11,    12,
      -1,    14,    15,    -1,    28,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    27,    -1,    14,    15,    16,    17,
      18,    19,     3,     4,     5,     6,     7,     8,     9,    -1,
      28,     3,     4,     5,     6,     7,     8,     9,     3,     4,
       5,     6,     7,     8,     9,    -1,    27,     3,     4,     5,
       6,     7,     8,     9,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    27,     3,     4,     5,     6,     7,     8,     9,
      -1,    27,     3,     4,     5,     6,     7,     8,     9,     3,
       4,     5,     6,     7,     8,     9,    -1,    27,     3,     4,
       5,     6,     7,     8,     9,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    27,     3,     4,     5,     6,     7,     8,
       9,    -1,    27,     3,     4,     5,     6,     7,     8,     9,
       3,     4,     5,     6,     7,     8,     9,    -1,    27,     3,
       4,     5,     6,     7,     8,     9,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    27,     3,     4,     5,     6,     7,
       8,     9,    -1,    27,     3,     4,     5,     6,     7,     8,
       9,     3,     4,     5,     6,     7,     8,     9,    -1,    27,
      11,    12,    21,    14,    15,    -1,    -1,    -1,    -1,    21,
      21,     3,     4,     5,     6,     7,     8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    58,     0,     1,    20,    31,    33,    34,    35,
      36,    37,    40,    50,    53,    54,    59,    60,    61,    62,
      63,    64,    65,    66,    68,    69,    70,    71,    72,    73,
      74,     5,     6,    13,    20,    22,    23,    24,    25,    61,
      62,    63,    75,    76,    78,    79,    80,    81,    82,    52,
      64,    75,    76,    77,    75,    76,    57,    58,    64,    61,
      62,    63,    64,     3,     4,    26,    41,    42,    43,    44,
      45,     3,     4,    26,    41,    42,    43,    44,    45,    26,
      46,    47,    26,    41,    27,    39,    67,    20,    75,    75,
      76,    75,    76,     3,     4,     5,     6,     7,     8,     9,
      14,    15,    16,    17,    18,    19,    21,    28,    49,    11,
      12,    14,    15,    21,    27,    27,    27,    38,    48,    27,
      27,    27,    27,    27,    27,    27,    75,    75,    75,    75,
      75,    75,    27,    27,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    77,    77,    57,    27,    75,    21,    21,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    51,    29,    30,    75,    76,    76,    76,    76,    48,
      57,    20,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    57,
      75,    75,    21,    49,    57,    76,    27,    27,    27,    57,
      75,    27,    49,    21,    75,    75,    27,    21,    57,    27,
      29,    30,    29,    30,    57,    27,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    58,    58,    58,    58,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    62,    63,
      64,    65,    65,    65,    66,    67,    68,    68,    68,    69,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    72,    72,    73,    73,    73,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    79,    80,    81,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     8,     4,     2,     6,     7,     9,     6,
       7,     4,     4,     4,     4,     4,     4,     3,     3,     4,
       4,     4,     4,     4,     4,     3,     3,     4,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     3,     1,     1,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     7,
       7,     7,     7,     1,     1,     3,     3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 107 "syntax_4u.y" /* yacc.c:1652  */
    {
				genere_code((yyvsp[0].noeud));
				g_node_destroy((yyvsp[0].noeud));
			}
#line 1506 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 112 "syntax_4u.y" /* yacc.c:1652  */
    {
				(yyval.noeud)=g_node_new((gpointer)BLOC_CODE);
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
				supprime_variable((yyvsp[0].noeud));
			}
#line 1516 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 118 "syntax_4u.y" /* yacc.c:1652  */
    {(yyval.noeud)=g_node_new((gpointer)CODE_VIDE);}
#line 1522 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 120 "syntax_4u.y" /* yacc.c:1652  */
    {
			(yyval.noeud)=g_node_new((gpointer)SEQUENCE);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 1532 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 126 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("Resultat : C'est une instruction valide !\n\n");
			(yyval.noeud)=g_node_new((gpointer)SEQUENCE);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 1543 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 133 "syntax_4u.y" /* yacc.c:1652  */
    {
			fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de syntaxe a la ligne %d.\n",lineno);
 			error_syntaxical=true;
		}
#line 1552 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 138 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)CODE_VIDE);
				}
#line 1560 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 142 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\tInstruction type Affectation\n");
			(yyval.noeud)=(yyvsp[0].noeud);
 		}
#line 1569 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 147 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\tInstruction type Affichage\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1578 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 152 "syntax_4u.y" /* yacc.c:1652  */
    {
		    printf("Condition si/sinon\n");
		    (yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1587 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 157 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("Boucle repetee\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1596 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 162 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("Boucle tant que\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1605 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 167 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("Boucle faire tant que\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1614 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 172 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\tInstruction type Suppression\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1623 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 177 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\tInstruction type Saisie\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1632 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 182 "syntax_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable entiere %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1642 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 188 "syntax_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable decimale %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1652 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 194 "syntax_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable booleenne %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1662 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 200 "syntax_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable texte %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1672 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 206 "syntax_4u.y" /* yacc.c:1652  */
    {
                    printf("\tCondition si\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI);
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
                }
#line 1682 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 212 "syntax_4u.y" /* yacc.c:1652  */
    {
                    printf("\tCondition si/sinon\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI_SINON);
                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
                }
#line 1693 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 219 "syntax_4u.y" /* yacc.c:1652  */
    {
                	printf("\tCondition si/sinon\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI_SINON);
                    g_node_append((yyval.noeud),g_node_new((gpointer)SI));
                    g_node_append(g_node_nth_child((yyval.noeud),0),(yyvsp[-6].noeud));
                    g_node_append(g_node_nth_child((yyval.noeud),0),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),g_node_new((gpointer)SINON));
                    g_node_append(g_node_nth_child((yyval.noeud),1),(yyvsp[-1].noeud));

                }
#line 1708 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 230 "syntax_4u.y" /* yacc.c:1652  */
    {
                    (yyval.noeud)=g_node_new((gpointer)SI);
                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
                    g_node_append((yyval.noeud),(yyvsp[0].noeud));
                }
#line 1718 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 236 "syntax_4u.y" /* yacc.c:1652  */
    {
                        (yyval.noeud)=g_node_new((gpointer)SINON);
                        g_node_append((yyval.noeud),(yyvsp[0].noeud));
                    }
#line 1727 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 241 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),0),strdup("0"));
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),1),strdup("1"));
                    g_node_append((yyval.noeud),(yyvsp[-4].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1741 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 251 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),(yyvsp[-5].noeud));
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),1),strdup("1"));
                    g_node_append((yyval.noeud),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1754 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 260 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),(yyvsp[-7].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-5].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1766 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 268 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_WHILE);
					g_node_append((yyval.noeud),(yyvsp[-4].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1776 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 274 "syntax_4u.y" /* yacc.c:1652  */
    {
						(yyval.noeud)=g_node_new((gpointer)BOUCLE_DO_WHILE);
						g_node_append((yyval.noeud),(yyvsp[-5].noeud));
	                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					}
#line 1786 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 280 "syntax_4u.y" /* yacc.c:1652  */
    {
			/* $1 is the value of the first nonterminal. Here it is the value of the non-terminal variable. $3 is the value of the 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* We create a Variable and assign it the type we know and the value */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("entier");
					var->value=(yyvsp[-1].noeud);
					/* Insert it into the hash table (key: <variable_name> / value: <(type,value)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIONE);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1820 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 310 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_PLUS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1836 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 322 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOINS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1852 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 334 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MUL);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1868 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 346 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_DIV);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1884 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 358 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOD);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1900 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 370 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tIncrementation de +1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_INCR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 1910 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 376 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tDecrementation de -1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_DECR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 1920 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 382 "syntax_4u.y" /* yacc.c:1652  */
    {
			/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("decimal");
					var->value=(yyvsp[-1].noeud);
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIOND);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1954 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 412 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_PLUS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1970 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 424 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOINS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1986 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 436 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MUL);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2002 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 448 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_DIV);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2018 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 460 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOD);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2034 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 472 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tIncrementation de +1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_INCR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 2044 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 478 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tDecrementation de -1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_DECR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 2054 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 484 "syntax_4u.y" /* yacc.c:1652  */
    {
			/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("booleen");
					var->value=(yyvsp[-1].noeud);
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIONB);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2088 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 514 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_ET);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2104 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 526 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_OU);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2120 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 538 "syntax_4u.y" /* yacc.c:1652  */
    {
			/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("texte");
					var->value=(yyvsp[-1].noeud);
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIONNT);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2154 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 568 "syntax_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATIONT_CONCAT);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2170 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 580 "syntax_4u.y" /* yacc.c:1652  */
    {
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
				if(var==NULL){
						/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("texte");
					var->value=NULL;
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-1].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)SAISIENT);
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIET);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2200 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 606 "syntax_4u.y" /* yacc.c:1652  */
    {
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
				if(var==NULL){
						/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("entier");
					var->value=NULL;
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-1].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)SAISIENE);
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIEE);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2230 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 632 "syntax_4u.y" /* yacc.c:1652  */
    {
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
				if(var==NULL){
						/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("booleen");
					var->value=NULL;
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-1].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)SAISIENB);
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIEB);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2260 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 658 "syntax_4u.y" /* yacc.c:1652  */
    {
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
				if(var==NULL){
						/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("decimal");
					var->value=NULL;
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-1].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)SAISIEND);
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIED);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2290 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 684 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\t\tAffichage de la valeur de l'expression arithmetique\n");
			if(decimal((yyvsp[-1].noeud))){
				(yyval.noeud)=g_node_new((gpointer)AFFICHAGED);
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFICHAGEE);
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2305 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 695 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\t\tAffichage de la valeur de l'expression booleenne\n");
			(yyval.noeud)=g_node_new((gpointer)AFFICHAGEB);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
		}
#line 2315 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 701 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\t\tAffichage de la valeur de l'expression textuelle\n");
			(yyval.noeud)=g_node_new((gpointer)AFFICHAGET);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
		}
#line 2325 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 707 "syntax_4u.y" /* yacc.c:1652  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"texte")==0){
							printf("\t\t\tSuppression de la variable texte\n");
							(yyval.noeud)=g_node_new((gpointer)SUPPRESSIONT);
							g_node_append((yyval.noeud),(yyvsp[-1].noeud));
							/* suppression de la variable dans la table de hachage */
							printf("suppresion variable %s\n",(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
						    if(g_hash_table_remove(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data)){
						        printf("Variable supprimee !\n");
						    }else{
						        fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME DE SUPPRESSION VARIABLE !\n");
						        exit(-1);
						    }
						}else{
							fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible !\n",lineno);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2358 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 736 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tNombre entier : %ld\n",(yyvsp[0].entier));
					/* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
					int length=snprintf(NULL,0,"%ld",(yyvsp[0].entier));
					char* str=malloc(length+1);
					snprintf(str,length+1,"%ld",(yyvsp[0].entier));
					(yyval.noeud)=g_node_new((gpointer)ENTIER);
					g_node_append_data((yyval.noeud),strdup(str));
					free(str);
				}
#line 2373 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 747 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tNombre decimal : %f\n",(yyvsp[0].decimal));
					/* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
					int length=snprintf(NULL,0,"%f",(yyvsp[0].decimal));
					char* str=malloc(length+1);
					snprintf(str,length+1,"%f",(yyvsp[0].decimal));
					(yyval.noeud)=g_node_new((gpointer)DECIMAL);
					g_node_append_data((yyval.noeud),strdup(str));
					free(str);
				}
#line 2388 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 758 "syntax_4u.y" /* yacc.c:1652  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier ou un decimal - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"entier")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible (entier attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2411 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 777 "syntax_4u.y" /* yacc.c:1652  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier ou un decimal - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"decimal")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible (decimal attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2434 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 796 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2442 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 800 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2450 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 804 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2458 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 808 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2466 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 812 "syntax_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2474 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 816 "syntax_4u.y" /* yacc.c:1652  */
    {
				    (yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2482 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 820 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tIncrementation de +1\n");
				    (yyval.noeud)=g_node_new((gpointer)INCREMENTATION);
				    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2492 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 826 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tDecrementation de -1\n");
				    (yyval.noeud)=g_node_new((gpointer)DECREMENTATION);
				    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2502 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 832 "syntax_4u.y" /* yacc.c:1652  */
    {
				    printf("\t\t\tOperation unaire negation\n");
				    (yyval.noeud)=g_node_new((gpointer)NEGATIF);
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2512 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 838 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tC'est une expression arithmetique entre parentheses\n");
					(yyval.noeud)=g_node_new((gpointer)EXPR_PAR);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2522 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 844 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tBooleen Vrai\n");
					(yyval.noeud)=g_node_new((gpointer)VRAI);
				}
#line 2531 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 849 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tBooleen Faux\n");
					(yyval.noeud)=g_node_new((gpointer)FAUX);
				}
#line 2540 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 854 "syntax_4u.y" /* yacc.c:1652  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"booleen")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible (booleen attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2563 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 873 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperation booleenne Non\n");
					(yyval.noeud)=g_node_new((gpointer)NON);
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2573 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 879 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperation booleenne Et\n");
					(yyval.noeud)=g_node_new((gpointer)ET);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2584 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 886 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperation booleenne Ou\n");
					(yyval.noeud)=g_node_new((gpointer)OU);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2595 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 893 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tC'est une expression booleenne entre parentheses\n");
					(yyval.noeud)=g_node_new((gpointer)EXPR_PAR);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2605 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 899 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'egalite ==\n");
					(yyval.noeud)=g_node_new((gpointer)EGALITE);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2616 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 906 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'inegalite !=\n");
					(yyval.noeud)=g_node_new((gpointer)DIFFERENT);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2627 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 913 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'egalite ==\n");
					(yyval.noeud)=g_node_new((gpointer)EGALITE);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2638 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 920 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'inegalite !=\n");
					(yyval.noeud)=g_node_new((gpointer)DIFFERENT);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2649 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 927 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur de superiorite >\n");
					(yyval.noeud)=g_node_new((gpointer)SUPERIEUR);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2660 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 934 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'inferiorite <\n");
					(yyval.noeud)=g_node_new((gpointer)INFERIEUR);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2671 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 941 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur >=\n");
					(yyval.noeud)=g_node_new((gpointer)SUPEGAL);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2682 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 948 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur <=\n");
					(yyval.noeud)=g_node_new((gpointer)INFEGAL);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2693 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 955 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSII);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2705 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 963 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSEI);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2717 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 971 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSIE);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2729 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 979 "syntax_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSEE);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2741 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 987 "syntax_4u.y" /* yacc.c:1652  */
    {
						printf("\t\t\tTexte %s\n",(yyvsp[0].texte));
						(yyval.noeud)=g_node_new((gpointer)TEXTE);
						g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
					}
#line 2751 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 993 "syntax_4u.y" /* yacc.c:1652  */
    {
						/* On recupere un pointeur vers la structure Variable */
						Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						/* Si on a trouve un pointeur valable */
						if(var!=NULL){
							/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
							if(strcmp(var->type,"texte")==0){
								(yyval.noeud)=(yyvsp[0].noeud);
							}else{
								fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible (texte attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
								error_semantical=true;
							}
						/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
						}else{
							fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					}
#line 2774 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 1012 "syntax_4u.y" /* yacc.c:1652  */
    {
    			printf("\t\t\tAddition\n");
    			(yyval.noeud)=g_node_new((gpointer)ADDITION);
    			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
    			g_node_append((yyval.noeud),(yyvsp[0].noeud));
    		}
#line 2785 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 1019 "syntax_4u.y" /* yacc.c:1652  */
    {
        			printf("\t\t\tSoustraction\n");
        			(yyval.noeud)=g_node_new((gpointer)SOUSTRACTION);
        			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
        			g_node_append((yyval.noeud),(yyvsp[0].noeud));
        		}
#line 2796 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 1026 "syntax_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tMultiplication\n");
			(yyval.noeud)=g_node_new((gpointer)MULTIPLICATION);
			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 2807 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 1033 "syntax_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tDivision\n");
				(yyval.noeud)=g_node_new((gpointer)DIVISION);
				g_node_append((yyval.noeud),(yyvsp[-2].noeud));
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
			}
#line 2818 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 1040 "syntax_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tModulo\n");
				(yyval.noeud)=g_node_new((gpointer)MODULO);
				g_node_append((yyval.noeud),(yyvsp[-2].noeud));
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
			}
#line 2829 "syntax_4u.tab.c" /* yacc.c:1652  */
    break;


#line 2833 "syntax_4u.tab.c" /* yacc.c:1652  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1047 "syntax_4u.y" /* yacc.c:1918  */


/* In the main function, we call the yyparse() routine which will be generated by Bison. This routine will call yylex() from our lexical analyzer. */

int main(int argc, char** argv){
	/* recuperation du nom de fichier d'entree (langage 4U) donne en parametre */
	char* fichier_entree=strdup(argv[1]);
	/* ouverture du fichier en lecture dans le flux d'entree stdin */
	stdin=fopen(fichier_entree,"r");
	/* creation fichier de sortie (langage C ou JS dans du HTML) */
	char* fichier_sortie=strdup(argv[1]);
	char* lang = strdup(*argv[0]);
	printf("\"");
	printf("%i", lang);
	printf("\"");
	printf("\n");
	lang = rindex(lang, 'T');
	printf("\"");
	printf("%lu", lang);
	printf("\"");
	printf("\n");
	printf("\"");
	printf("%c", *lang);
	printf("\"");
	printf("\n");
	printf("\"");
	printf("%i", lang == "ToC");
	printf("\"");
	printf("\n");
	if(lang == "ToC"){
		/* remplace l'extension par .c */
		strcpy(rindex(fichier_sortie, '.'), ".c");
		printf("C Ok!\n");
	}
	else if(lang == "ToJs"){
		/* remplace l'extension par .html */
		strcpy(rindex(fichier_sortie, '.'), ".html");
		printf("JS Ok!\n");
	}
	else{
		printf("\nNo Ok.\n");
	}
	/* ouvre le fichier cree en ecriture */
	fichier=fopen(fichier_sortie, "w");
	/* Creation de la table de hachage */
	table_variable=g_hash_table_new_full(g_str_hash,g_str_equal,NULL,free);
	printf("Debut de l'analyse syntaxique :\n");
	debut_code();
	yyparse();
	fin_code();
	printf("Fin de l'analyse !\n");	
	printf("Resultat :\n");
        if(error_lexical){
                printf("\t-- Echec : Certains lexemes ne font pas partie du lexique du langage ! --\n");
		printf("\t-- Echec a l'analyse lexicale --\n");
        }
        else{
                printf("\t-- Succes a l'analyse lexicale ! --\n");
        }
	if(error_syntaxical){
                printf("\t-- Echec : Certaines phrases sont syntaxiquement incorrectes ! --\n");
		printf("\t-- Echec a l'analyse syntaxique --\n");
        }
        else{
                printf("\t-- Succes a l'analyse syntaxique ! --\n");
		if(error_semantical){
		        printf("\t-- Echec : Certaines phrases sont semantiquement incorrectes ! --\n");
			printf("\t-- Echec a l'analyse semantique --\n");
		}
		else{
		        printf("\t-- Succes a l'analyse semantique ! --\n");
		}
        }
	/* Suppression du fichier genere si \033[31m\033[01mERREUR\033[0ms analyse */
	if(error_lexical||error_syntaxical||error_semantical){
		remove(fichier_sortie);
		printf("ECHEC GENERATION CODE !\n");
	}
	else{
		printf("Le fichier \"%s\" a ete genere !\n",fichier_sortie);
	}
	/* Fermeture des flux */
	fclose(fichier);
	fclose(stdin);
	/* Liberation memoire */
	free(fichier_entree);
	free(fichier_sortie);
	g_hash_table_destroy(table_variable);
	return EXIT_SUCCESS;
}

void yyerror(char *s) {
        fprintf(stderr, "\033[31m\033[01mERREUR\033[0m de syntaxe a la ligne %d: %s\n", lineno, s);
}

/* This function deletes in the hash table all the variables declared for the first time in the syntax tree given as parameter */

void supprime_variable(GNode* ast){
    /* si l'element n'est pas NULL et que ce n'est pas une feuille et que ce n'est pas un type bloc code (pour eviter de supprimer une variable deja suprimee) */
    if(ast&&!G_NODE_IS_LEAF(ast)&&(long)ast->data!=BLOC_CODE){
        /* si le noeud est de type declaration */
        if((long)ast->data==AFFECTATIONB||(long)ast->data==AFFECTATIONE|(long)ast->data==AFFECTATIONNT|(long)ast->data==AFFECTATIOND){
            /* suppression de la variable dans la table de hachage */
            if(g_hash_table_remove(table_variable,(char*)g_node_nth_child(g_node_nth_child(ast,0),0)->data)){
                printf("Variable supprimee !\n");
            }else{
                fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME DE SUPPRESSION VARIABLE !\n");
                exit(-1);
            }
        /* sinon on continue de parcourir l'arbre */
        }else{
            int nb_enfant;
            for(nb_enfant=0;nb_enfant<=g_node_n_children(ast);nb_enfant++){
                supprime_variable(g_node_nth_child(ast,nb_enfant));
            }
        }
    }
}

/* This function says if a tree contains a decimal */

bool decimal(GNode* ast){
	/* if the element is not NULL and it is not a leaf and it is not a code block type (to avoid deleting a variable already deleted) */
    bool nbdecimal=false;
    if(ast&&!G_NODE_IS_LEAF(ast)){
        /* si le noeud est de type decimal */
        if((long)ast->data==DECIMAL){
            nbdecimal=true;
        /* si le noeud est une variable */
        }else if((long)ast->data==VARIABLE){
        	/* On recupere un pointeur vers la structure Variable */
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child(ast,0)->data);
			/* Si on a trouve un pointeur valable */
			if(var!=NULL){
				/* On regarde si le type de la variable est un decimal */
				if(strcmp(var->type,"decimal")==0)
					nbdecimal=true;	
			}
        /* sinon on continue de parcourir l'arbre */
        }else{
            int nb_enfant;
            for(nb_enfant=0;nb_enfant<=g_node_n_children(ast);nb_enfant++){
                nbdecimal|=decimal(g_node_nth_child(ast,nb_enfant));
            }
        }
    }
    return nbdecimal;
}
