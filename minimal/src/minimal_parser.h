/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_MINIMAL_PARSER_H_INCLUDED
# define YY_YY_SRC_MINIMAL_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    YY_ID = 258,                   /* YY_ID  */
    YY_INTEGER = 259,              /* YY_INTEGER  */
    YY_STRING = 260,               /* YY_STRING  */
    YY_TYPESPEC = 261,             /* YY_TYPESPEC  */
    YY_FUNCTION = 262,             /* YY_FUNCTION  */
    YY_OPERATOR = 263,             /* YY_OPERATOR  */
    YY_SEMICOLON = 264,            /* YY_SEMICOLON  */
    YY_COMMA = 265,                /* YY_COMMA  */
    YY_EQ = 266,                   /* YY_EQ  */
    YY_OPENB = 267,                /* YY_OPENB  */
    YY_CLOSEB = 268,               /* YY_CLOSEB  */
    YY_OPENSQB = 269,              /* YY_OPENSQB  */
    YY_CLOSESQB = 270,             /* YY_CLOSESQB  */
    YY_IF = 271,                   /* YY_IF  */
    YY_THEN = 272,                 /* YY_THEN  */
    YY_ELSE = 273,                 /* YY_ELSE  */
    YY_ENDIF = 274,                /* YY_ENDIF  */
    YY_TESTOP = 275,               /* YY_TESTOP  */
    YY_LET = 276                   /* YY_LET  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_MINIMAL_PARSER_H_INCLUDED  */
