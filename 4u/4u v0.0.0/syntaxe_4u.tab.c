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
#line 1 "syntaxe_4u.y" /* yacc.c:337  */


#include "4u.h"
bool error_syntaxical=false;
bool error_semantical=false;
/* Notre table de hachage */
GHashTable* table_variable;

/* Fonction de suppression des variables declarees a l'interieur d'un arbre syntaxique */
void supprime_variable(GNode*);

/* Fonction permettant de dire si un noeud d'arbre contient un decimal ou non */
bool decimal(GNode*);

/* Notre structure Variable qui a comme membre le type et un pointeur generique vers la valeur */
typedef struct Variable Variable;

struct Variable{
	char* type;
	GNode* value;
};


#line 94 "syntaxe_4u.tab.c" /* yacc.c:337  */
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
   by #include "syntaxe_4u.tab.h".  */
#ifndef YY_YY_SYNTAXE_4U_TAB_H_INCLUDED
# define YY_YY_SYNTAXE_4U_TAB_H_INCLUDED
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
    TOK_AFFECT_PUI = 301,
    TOK_AFFECT_ET = 302,
    TOK_AFFECT_OU = 303,
    TOK_POINT_INTERROGATION = 304,
    TOK_DOUBLE_POINT = 305,
    TOK_FAIRE = 306,
    TOK_CROIX = 307,
    TOK_TEXTE = 308,
    TOK_SUPPR = 309,
    TOK_SAISIR = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "syntaxe_4u.y" /* yacc.c:352  */

	long entier;
	double decimal;
	char* texte;
	GNode*	noeud;

#line 200 "syntaxe_4u.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXE_4U_TAB_H_INCLUDED  */



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
#define YYLAST   537

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   114,   120,   122,   128,   135,   140,   144,
     149,   154,   159,   164,   169,   174,   179,   184,   190,   196,
     202,   208,   214,   220,   227,   238,   244,   249,   259,   268,
     276,   282,   288,   318,   330,   342,   354,   366,   390,   396,
     402,   432,   444,   456,   480,   492,   504,   510,   516,   546,
     558,   570,   600,   612,   638,   664,   690,   716,   727,   733,
     739,   768,   779,   790,   809,   828,   832,   836,   840,   844,
     852,   856,   862,   868,   874,   880,   885,   890,   909,   915,
     922,   929,   935,   942,   949,   956,   963,   970,   977,   984,
     991,   999,  1007,  1015,  1023,  1029,  1048,  1055,  1062,  1069,
    1076
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
  "TOK_AFFECT_DIV", "TOK_AFFECT_MOD", "TOK_AFFECT_PUI", "TOK_AFFECT_ET",
  "TOK_AFFECT_OU", "TOK_POINT_INTERROGATION", "TOK_DOUBLE_POINT",
  "TOK_FAIRE", "TOK_CROIX", "TOK_TEXTE", "TOK_SUPPR", "TOK_SAISIR",
  "$accept", "entree", "bloc_code", "code", "commentaire", "instruction",
  "def_variable", "variable_entiere", "variable_decimale",
  "variable_booleenne", "variable_texte", "condition", "condition_si",
  "condition_sinon", "boucle_for", "boucle_while", "boucle_do_while",
  "affectation", "saisie", "affichage", "suppression",
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
     305,   306,   307,   308,   309,   310
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
     -82,     5,   103,   -82,   -82,   238,   197,   -82,   -82,   -82,
     -82,   -82,   238,   -82,   -82,   -16,    52,   -82,   -82,    52,
      75,   126,   -24,   -14,   -82,     3,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   259,   259,   238,   238,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   220,    42,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   299,   134,     9,   351,    -1,   -10,   146,
      14,    25,    28,    31,    33,    38,    63,    86,    88,    97,
      99,   259,   259,   259,   259,   259,   101,   104,   259,   259,
     259,   259,   259,   238,   238,   -19,   -82,   -82,   106,   259,
     156,   156,    57,   325,   141,   -82,   -82,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,    89,    77,
     259,   238,   238,   238,   238,    66,   -82,   -82,   -82,   -82,
     122,   -82,   -82,   -82,   -82,   -82,   259,   259,   238,   -19,
     -82,   -82,   368,   377,   384,   393,   409,   -82,   -82,   418,
     425,   434,   450,   459,   177,   241,   117,   -82,   -82,   507,
     -82,   -82,   156,   156,   -82,   -82,   -82,   526,   526,   526,
     526,   526,   526,   -82,   259,   259,    41,    57,    57,   -82,
     -82,   -82,   -82,   238,   466,   475,   263,   123,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   124,   491,   500,   -82,   259,   -15,   194,   -82,   -82,
     -82,   -82,   -82,   259,   259,   147,   516,   -82,   -82,   148,
     280,   292,   -82,   -82,   149,   -82,   -82,   -82,   -82,   -82,
     157,   -82,   -82
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     7,     0,     0,    17,    20,    18,
      19,    21,     0,     8,     4,     0,     0,     5,     6,     0,
       0,     0,     0,     0,    11,     0,    12,    13,    14,     9,
      16,    10,    15,     0,     0,     0,     0,    61,    62,    75,
      76,    63,    64,    77,     0,     0,    65,    66,    67,    68,
      69,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     4,     0,     0,
      70,    73,    78,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    59,     4,
       0,    60,    54,    56,    55,    53,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    23,     0,
      74,    81,    96,    97,    98,    99,   100,    84,    85,    86,
      87,    88,    89,     4,     0,     0,     0,    79,    80,    82,
      83,     4,    25,     0,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    41,    42,    43,    44,    45,    49,    50,
      52,     0,     0,     0,     4,     0,     0,     0,    32,    40,
      48,    51,    27,     0,     0,     0,     0,    30,     4,     0,
       0,     0,    28,     4,     0,    31,    92,    90,    93,    91,
       0,    24,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -81,   187,   -82,   -82,   -82,     2,     6,    24,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,    -5,    -3,   -78,   -82,   -82,   -82,   -82,   -82
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    58,    59,    17,    18,    19,    41,    42,    43,
      52,    24,    25,    88,    26,    27,    28,    29,    30,    31,
      32,    56,    45,    55,    46,    47,    48,    49,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    53,    23,    54,    20,     3,   147,   146,    21,    57,
     111,   112,   207,   113,   114,    60,    64,    11,    61,    68,
      11,    65,    62,    83,    84,    66,    22,    85,    90,    91,
      86,    93,    92,    94,    51,   208,   118,   119,   172,   120,
      63,   121,    87,    67,    95,    96,    97,    98,    99,   100,
     101,   177,   122,   111,   112,   123,   113,   114,   124,    23,
     125,    20,   194,   115,   126,    21,   132,   133,   134,   135,
     136,   113,   114,   139,   140,   141,   142,   143,    69,    70,
     144,   145,   191,    22,   149,     8,     9,    10,    11,   127,
     196,   195,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -2,     4,   166,   164,   165,   167,   168,
     169,   170,   128,   205,   129,   171,    71,    72,    73,    74,
      75,   174,   175,     5,   130,   176,   131,   214,   137,    76,
      77,   138,   220,   148,     6,     7,     8,     9,    10,    11,
      12,   163,   173,    13,   190,   111,   112,     4,   113,   114,
     201,   202,   111,   112,    14,   113,   114,    15,    16,   192,
     193,   117,   151,    99,   100,   101,     5,    78,    79,    80,
     197,    81,    82,    -3,   212,   215,   221,     6,     7,     8,
       9,    10,    11,    12,   222,    -3,    13,     2,   111,   112,
     206,   113,   114,     0,     0,    -3,    -3,    14,   210,   211,
      15,    16,    33,    34,   188,   111,   112,     0,   113,   114,
      35,     0,     0,     0,     0,   209,     0,    36,     0,    37,
      38,    39,    40,    95,    96,    97,    98,    99,   100,   101,
       8,     9,    10,    11,   102,   103,   104,   105,   106,   107,
       0,   108,     0,    33,    34,     0,     0,     0,   109,     0,
      51,    35,   111,   112,     0,   113,   114,     0,    36,     0,
      37,    38,    39,    40,    33,    34,     0,     0,   189,     0,
     110,     8,     9,    10,   111,   112,     0,   113,   114,    89,
       0,    37,    38,    95,    96,    97,    98,    99,   100,   101,
     200,     0,     0,     9,    10,    95,    96,    97,    98,    99,
     100,   101,    95,    96,    97,    98,    99,   100,   101,   216,
     217,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,   218,   219,     0,     0,     0,   116,   109,    95,    96,
      97,    98,    99,   100,   101,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,   150,     0,     0,     0,
       0,     0,     0,   109,    95,    96,    97,    98,    99,   100,
     101,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,    95,    96,    97,    98,    99,   100,   101,     0,   109,
      95,    96,    97,    98,    99,   100,   101,    95,    96,    97,
      98,    99,   100,   101,     0,   178,    95,    96,    97,    98,
      99,   100,   101,     0,   179,     0,     0,     0,     0,     0,
       0,   180,    95,    96,    97,    98,    99,   100,   101,     0,
     181,    95,    96,    97,    98,    99,   100,   101,    95,    96,
      97,    98,    99,   100,   101,     0,   182,    95,    96,    97,
      98,    99,   100,   101,     0,   183,     0,     0,     0,     0,
       0,     0,   184,    95,    96,    97,    98,    99,   100,   101,
       0,   185,    95,    96,    97,    98,    99,   100,   101,    95,
      96,    97,    98,    99,   100,   101,     0,   186,    95,    96,
      97,    98,    99,   100,   101,     0,   187,     0,     0,     0,
       0,     0,     0,   198,    95,    96,    97,    98,    99,   100,
     101,     0,   199,    95,    96,    97,    98,    99,   100,   101,
      95,    96,    97,    98,    99,   100,   101,     0,   203,    95,
      96,    97,    98,    99,   100,   101,     0,   204,   150,    95,
      96,    97,    98,    99,   100,   101,     0,   213
};

static const yytype_int16 yycheck[] =
{
       5,     6,     2,     6,     2,     0,    87,    85,     2,    12,
      11,    12,    27,    14,    15,    15,    16,    36,    16,    19,
      36,    19,    16,    47,    48,    19,     2,    41,    33,    34,
      27,    36,    35,    36,    53,    50,    27,    38,   119,    49,
      16,    27,    39,    19,     3,     4,     5,     6,     7,     8,
       9,   129,    27,    11,    12,    27,    14,    15,    27,    59,
      27,    59,    21,    21,    26,    59,    71,    72,    73,    74,
      75,    14,    15,    78,    79,    80,    81,    82,     3,     4,
      83,    84,   163,    59,    89,    33,    34,    35,    36,    26,
     171,    50,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     0,     1,   110,    29,    30,   111,   112,
     113,   114,    26,   194,    26,    49,    41,    42,    43,    44,
      45,   126,   127,    20,    27,   128,    27,   208,    27,     3,
       4,    27,   213,    27,    31,    32,    33,    34,    35,    36,
      37,    52,    20,    40,    27,    11,    12,     1,    14,    15,
      27,    27,    11,    12,    51,    14,    15,    54,    55,   164,
     165,    27,    21,     7,     8,     9,    20,    41,    42,    43,
     173,    45,    46,    27,    27,    27,    27,    31,    32,    33,
      34,    35,    36,    37,    27,    39,    40,     0,    11,    12,
     195,    14,    15,    -1,    -1,    49,    50,    51,   203,   204,
      54,    55,     5,     6,    27,    11,    12,    -1,    14,    15,
      13,    -1,    -1,    -1,    -1,    21,    -1,    20,    -1,    22,
      23,    24,    25,     3,     4,     5,     6,     7,     8,     9,
      33,    34,    35,    36,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,     5,     6,    -1,    -1,    -1,    28,    -1,
      53,    13,    11,    12,    -1,    14,    15,    -1,    20,    -1,
      22,    23,    24,    25,     5,     6,    -1,    -1,    27,    -1,
      50,    33,    34,    35,    11,    12,    -1,    14,    15,    20,
      -1,    22,    23,     3,     4,     5,     6,     7,     8,     9,
      27,    -1,    -1,    34,    35,     3,     4,     5,     6,     7,
       8,     9,     3,     4,     5,     6,     7,     8,     9,    29,
      30,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    29,    30,    -1,    -1,    -1,    27,    28,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,     3,     4,     5,     6,     7,     8,     9,    -1,    28,
       3,     4,     5,     6,     7,     8,     9,     3,     4,     5,
       6,     7,     8,     9,    -1,    27,     3,     4,     5,     6,
       7,     8,     9,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    27,     3,     4,     5,     6,     7,     8,     9,    -1,
      27,     3,     4,     5,     6,     7,     8,     9,     3,     4,
       5,     6,     7,     8,     9,    -1,    27,     3,     4,     5,
       6,     7,     8,     9,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    27,     3,     4,     5,     6,     7,     8,     9,
      -1,    27,     3,     4,     5,     6,     7,     8,     9,     3,
       4,     5,     6,     7,     8,     9,    -1,    27,     3,     4,
       5,     6,     7,     8,     9,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    27,     3,     4,     5,     6,     7,     8,
       9,    -1,    27,     3,     4,     5,     6,     7,     8,     9,
       3,     4,     5,     6,     7,     8,     9,    -1,    27,     3,
       4,     5,     6,     7,     8,     9,    -1,    27,    21,     3,
       4,     5,     6,     7,     8,     9,    -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    59,     0,     1,    20,    31,    32,    33,    34,
      35,    36,    37,    40,    51,    54,    55,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,     5,     6,    13,    20,    22,    23,    24,
      25,    63,    64,    65,    77,    78,    80,    81,    82,    83,
      84,    53,    66,    77,    78,    79,    77,    78,    58,    59,
      66,    63,    64,    65,    66,    63,    64,    65,    66,     3,
       4,    41,    42,    43,    44,    45,     3,     4,    41,    42,
      43,    45,    46,    47,    48,    41,    27,    39,    69,    20,
      77,    77,    78,    77,    78,     3,     4,     5,     6,     7,
       8,     9,    14,    15,    16,    17,    18,    19,    21,    28,
      50,    11,    12,    14,    15,    21,    27,    27,    27,    38,
      49,    27,    27,    27,    27,    27,    26,    26,    26,    26,
      27,    27,    77,    77,    77,    77,    77,    27,    27,    77,
      77,    77,    77,    77,    78,    78,    79,    58,    27,    77,
      21,    21,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    52,    29,    30,    77,    78,    78,    78,
      78,    49,    58,    20,    77,    77,    78,    79,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    58,    77,    77,    21,    50,    58,    78,    27,    27,
      27,    27,    27,    27,    27,    58,    77,    27,    50,    21,
      77,    77,    27,    21,    58,    27,    29,    30,    29,    30,
      58,    27,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    59,    59,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    63,    64,
      65,    66,    67,    67,    67,    68,    69,    70,    70,    70,
      71,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    75,    75,    75,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    80,    81,    82,    83,
      84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     8,     4,     2,     6,     7,     9,
       6,     7,     5,     4,     4,     4,     4,     4,     3,     3,
       5,     4,     4,     4,     4,     4,     3,     3,     5,     4,
       4,     5,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     1,     1,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       7,     7,     7,     7,     1,     1,     3,     3,     3,     3,
       3
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
#line 109 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				genere_code((yyvsp[0].noeud));
				g_node_destroy((yyvsp[0].noeud));
			}
#line 1517 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 114 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				(yyval.noeud)=g_node_new((gpointer)BLOC_CODE);
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
				supprime_variable((yyvsp[0].noeud));
			}
#line 1527 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 120 "syntaxe_4u.y" /* yacc.c:1652  */
    {(yyval.noeud)=g_node_new((gpointer)CODE_VIDE);}
#line 1533 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 122 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			(yyval.noeud)=g_node_new((gpointer)SEQUENCE);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 1543 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 128 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("Resultat : C'est une instruction valide !\n\n");
			(yyval.noeud)=g_node_new((gpointer)SEQUENCE);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 1554 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 135 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			fprintf(stderr,"\tERREUR : Erreur de syntaxe a la ligne %d.\n",lineno);
 			error_syntaxical=true;
		}
#line 1563 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 140 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)CODE_VIDE);
				}
#line 1571 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 144 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\tInstruction type Affectation\n");
			(yyval.noeud)=(yyvsp[0].noeud);
 		}
#line 1580 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 149 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\tInstruction type Affichage\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1589 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 154 "syntaxe_4u.y" /* yacc.c:1652  */
    {
		    printf("Condition si/sinon\n");
		    (yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1598 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 159 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("Boucle repetee\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1607 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 164 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("Boucle tant que\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1616 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 169 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("Boucle faire tant que\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1625 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 174 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\tInstruction type Suppression\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1634 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 179 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\tInstruction type Saisie\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1643 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 184 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable definie %s\n");
				/*$$=g_node_new((gpointer)DEF_VAR);
				g_node_append_data($$,"var");*/
			}
#line 1653 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 190 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable entiere %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1663 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 196 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable decimale %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1673 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 202 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable booleenne %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1683 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 208 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tVariable texte %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1693 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 214 "syntaxe_4u.y" /* yacc.c:1652  */
    {
                    printf("\tCondition si\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI);
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
                }
#line 1703 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 220 "syntaxe_4u.y" /* yacc.c:1652  */
    {
                    printf("\tCondition si/sinon\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI_SINON);
                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
                }
#line 1714 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 227 "syntaxe_4u.y" /* yacc.c:1652  */
    {
                	printf("\tCondition si/sinon\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI_SINON);
                    g_node_append((yyval.noeud),g_node_new((gpointer)SI));
                    g_node_append(g_node_nth_child((yyval.noeud),0),(yyvsp[-6].noeud));
                    g_node_append(g_node_nth_child((yyval.noeud),0),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),g_node_new((gpointer)SINON));
                    g_node_append(g_node_nth_child((yyval.noeud),1),(yyvsp[-1].noeud));

                }
#line 1729 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 238 "syntaxe_4u.y" /* yacc.c:1652  */
    {
                    (yyval.noeud)=g_node_new((gpointer)SI);
                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
                    g_node_append((yyval.noeud),(yyvsp[0].noeud));
                }
#line 1739 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 244 "syntaxe_4u.y" /* yacc.c:1652  */
    {
                        (yyval.noeud)=g_node_new((gpointer)SINON);
                        g_node_append((yyval.noeud),(yyvsp[0].noeud));
                    }
#line 1748 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 249 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),0),strdup("0"));
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),1),strdup("1"));
                    g_node_append((yyval.noeud),(yyvsp[-4].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1762 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 259 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),(yyvsp[-5].noeud));
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),1),strdup("1"));
                    g_node_append((yyval.noeud),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1775 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 268 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),(yyvsp[-7].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-5].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1787 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 276 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_WHILE);
					g_node_append((yyval.noeud),(yyvsp[-4].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1797 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 282 "syntaxe_4u.y" /* yacc.c:1652  */
    {
						(yyval.noeud)=g_node_new((gpointer)BOUCLE_DO_WHILE);
						g_node_append((yyval.noeud),(yyvsp[-5].noeud));
	                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					}
#line 1807 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 288 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			/* $2 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $4 est la valeur du 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("entier");
					var->value=(yyvsp[-1].noeud);
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIONE);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1841 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 318 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_PLUS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1857 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 330 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOINS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1873 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 342 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MUL);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1889 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 354 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_DIV);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1905 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 366 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOD);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1921 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 390 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tIncrementation de +1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_INCR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 1931 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 396 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tDecrementation de -1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_DECR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 1941 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 402 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			/* $2 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $4 est la valeur du 2nd non terminal. */
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
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1975 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 432 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_PLUS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1991 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 444 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOINS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2007 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 456 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MUL);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2023 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 480 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOD);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2039 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 492 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_PUI);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2055 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 504 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tIncrementation de +1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_INCR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 2065 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 510 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tDecrementation de -1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_DECR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 2075 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 516 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			/* $2 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $4 est la valeur du 2nd non terminal. */
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
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2109 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 546 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_ET);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2125 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 558 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_OU);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2141 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 570 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			/* $2 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $4 est la valeur du 2nd non terminal. */
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
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2175 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 600 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATIONT_CONCAT);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2191 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 612 "syntaxe_4u.y" /* yacc.c:1652  */
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
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIET);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2221 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 638 "syntaxe_4u.y" /* yacc.c:1652  */
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
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIEE);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2251 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 664 "syntaxe_4u.y" /* yacc.c:1652  */
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
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIEB);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2281 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 690 "syntaxe_4u.y" /* yacc.c:1652  */
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
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1); 
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIED);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2311 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 716 "syntaxe_4u.y" /* yacc.c:1652  */
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
#line 2326 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 727 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\t\tAffichage de la valeur de l'expression booleenne\n");
			(yyval.noeud)=g_node_new((gpointer)AFFICHAGEB);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
		}
#line 2336 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 733 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\t\tAffichage de la valeur de l'expression textuelle\n");
			(yyval.noeud)=g_node_new((gpointer)AFFICHAGET);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
		}
#line 2346 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 739 "syntaxe_4u.y" /* yacc.c:1652  */
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
						        fprintf(stderr,"ERREUR - PROBLEME DE SUPPRESSION VARIABLE !\n");
						        exit(-1);
						    }
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible !\n",lineno);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2379 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 768 "syntaxe_4u.y" /* yacc.c:1652  */
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
#line 2394 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 779 "syntaxe_4u.y" /* yacc.c:1652  */
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
#line 2409 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 790 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier ou un decimal - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"entier")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (entier attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2432 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 809 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier ou un decimal - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"decimal")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (decimal attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2455 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 828 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2463 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 832 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2471 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 836 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2479 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 840 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2487 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 844 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2495 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 852 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				    (yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2503 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 856 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tIncrementation de +1\n");
				    (yyval.noeud)=g_node_new((gpointer)INCREMENTATION);
				    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2513 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 862 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tDecrementation de -1\n");
				    (yyval.noeud)=g_node_new((gpointer)DECREMENTATION);
				    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2523 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 868 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				    printf("\t\t\tOperation unaire negation\n");
				    (yyval.noeud)=g_node_new((gpointer)NEGATIF);
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2533 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 874 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tC'est une expression arithmetique entre parentheses\n");
					(yyval.noeud)=g_node_new((gpointer)EXPR_PAR);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2543 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 880 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tBooleen Vrai\n");
					(yyval.noeud)=g_node_new((gpointer)VRAI);
				}
#line 2552 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 885 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tBooleen Faux\n");
					(yyval.noeud)=g_node_new((gpointer)FAUX);
				}
#line 2561 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 890 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"booleen")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (booleen attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2584 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 909 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperation booleenne Non\n");
					(yyval.noeud)=g_node_new((gpointer)NON);
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2594 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 915 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperation booleenne Et\n");
					(yyval.noeud)=g_node_new((gpointer)ET);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2605 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 922 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperation booleenne Ou\n");
					(yyval.noeud)=g_node_new((gpointer)OU);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2616 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 929 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tC'est une expression booleenne entre parentheses\n");
					(yyval.noeud)=g_node_new((gpointer)EXPR_PAR);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2626 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 935 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'egalite ==\n");
					(yyval.noeud)=g_node_new((gpointer)EGALITE);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2637 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 942 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'inegalite !=\n");
					(yyval.noeud)=g_node_new((gpointer)DIFFERENT);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2648 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 949 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'egalite ==\n");
					(yyval.noeud)=g_node_new((gpointer)EGALITE);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2659 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 956 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'inegalite !=\n");
					(yyval.noeud)=g_node_new((gpointer)DIFFERENT);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2670 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 963 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur de superiorite >\n");
					(yyval.noeud)=g_node_new((gpointer)SUPERIEUR);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2681 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 970 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur d'inferiorite <\n");
					(yyval.noeud)=g_node_new((gpointer)INFERIEUR);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2692 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 977 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur >=\n");
					(yyval.noeud)=g_node_new((gpointer)SUPEGAL);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2703 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 984 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur <=\n");
					(yyval.noeud)=g_node_new((gpointer)INFEGAL);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2714 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 991 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSII);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2726 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 999 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSEI);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2738 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 1007 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSIE);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2750 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 1015 "syntaxe_4u.y" /* yacc.c:1652  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSEE);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2762 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 1023 "syntaxe_4u.y" /* yacc.c:1652  */
    {
						printf("\t\t\tTexte %s\n",(yyvsp[0].texte));
						(yyval.noeud)=g_node_new((gpointer)TEXTE);
						g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
					}
#line 2772 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 1029 "syntaxe_4u.y" /* yacc.c:1652  */
    {
						/* On recupere un pointeur vers la structure Variable */
						Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						/* Si on a trouve un pointeur valable */
						if(var!=NULL){
							/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
							if(strcmp(var->type,"texte")==0){
								(yyval.noeud)=(yyvsp[0].noeud);
							}else{
								fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (texte attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
								error_semantical=true;
							}
						/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					}
#line 2795 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 1048 "syntaxe_4u.y" /* yacc.c:1652  */
    {
    			printf("\t\t\tAddition\n");
    			(yyval.noeud)=g_node_new((gpointer)ADDITION);
    			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
    			g_node_append((yyval.noeud),(yyvsp[0].noeud));
    		}
#line 2806 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 1055 "syntaxe_4u.y" /* yacc.c:1652  */
    {
        			printf("\t\t\tSoustraction\n");
        			(yyval.noeud)=g_node_new((gpointer)SOUSTRACTION);
        			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
        			g_node_append((yyval.noeud),(yyvsp[0].noeud));
        		}
#line 2817 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 1062 "syntaxe_4u.y" /* yacc.c:1652  */
    {
			printf("\t\t\tMultiplication\n");
			(yyval.noeud)=g_node_new((gpointer)MULTIPLICATION);
			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 2828 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 1069 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tDivision\n");
				(yyval.noeud)=g_node_new((gpointer)DIVISION);
				g_node_append((yyval.noeud),(yyvsp[-2].noeud));
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
			}
#line 2839 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 1076 "syntaxe_4u.y" /* yacc.c:1652  */
    {
				printf("\t\t\tModulo\n");
				(yyval.noeud)=g_node_new((gpointer)MODULO);
				g_node_append((yyval.noeud),(yyvsp[-2].noeud));
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
			}
#line 2850 "syntaxe_4u.tab.c" /* yacc.c:1652  */
    break;


#line 2854 "syntaxe_4u.tab.c" /* yacc.c:1652  */
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
#line 1089 "syntaxe_4u.y" /* yacc.c:1918  */


/* Dans la fonction main on appelle bien la routine yyparse() qui sera genere par Bison. Cette routine appellera yylex() de notre analyseur lexical. */

int main(int argc, char** argv){
	/* recuperation du nom de fichier d'entree (langage Simple) donne en parametre */
	char* fichier_entree=strdup(argv[1]);
	/* ouverture du fichier en lecture dans le flux d'entree stdin */
	stdin=fopen(fichier_entree,"r");
	/* creation fichier de sortie (langage C) */
	char* fichier_sortie=strdup(argv[1]);
	/* remplace l'extension par .c */
	strcpy(rindex(fichier_sortie, '.'), ".c");
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
	/* Suppression du fichier genere si erreurs analyse */
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
        fprintf(stderr, "Erreur de syntaxe a la ligne %d: %s\n", lineno, s);
}

/* Cette fonction supprime dans la table de hachage toutes les variables declarees pour la premiere fois dans l'arbre syntaxique donne en parametre */

void supprime_variable(GNode* ast){
    /* si l'element n'est pas NULL et que ce n'est pas une feuille et que ce n'est pas un type bloc code (pour eviter de supprimer une variable deja suprimee) */
    if(ast&&!G_NODE_IS_LEAF(ast)&&(long)ast->data!=BLOC_CODE){
        /* si le noeud est de type declaration */
        if((long)ast->data==AFFECTATIONB||(long)ast->data==AFFECTATIONE|(long)ast->data==AFFECTATIONT|(long)ast->data==AFFECTATIOND){
            /* suppression de la variable dans la table de hachage */
            if(g_hash_table_remove(table_variable,(char*)g_node_nth_child(g_node_nth_child(ast,0),0)->data)){
                printf("Variable supprimee !\n");
            }else{
                fprintf(stderr,"ERREUR - PROBLEME DE SUPPRESSION VARIABLE !\n");
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

/* Cette fonction dit si un arbre contient un decimal */

bool decimal(GNode* ast){
    /* si l'element n'est pas NULL et que ce n'est pas une feuille et que ce n'est pas un type bloc code (pour eviter de supprimer une variable deja suprimee) */
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
