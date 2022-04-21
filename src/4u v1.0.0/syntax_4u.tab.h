/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 27 "syntax_4u.y" /* yacc.c:1921  */

	long entier;
	double decimal;
	char* texte;
	GNode*	noeud;

#line 120 "syntax_4u.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_4U_TAB_H_INCLUDED  */
