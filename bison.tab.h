
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUMBER = 259,
     STR = 260,
     GREATEREQUAL = 261,
     LESSEQUAL = 262,
     GREATERTHAN = 263,
     LESSTHAN = 264,
     MINUS = 265,
     PLUS = 266,
     DIVISION = 267,
     MULTIPLICATION = 268,
     INT = 269,
     DOUBLE = 270,
     CHAR = 271,
     VOID = 272,
     WHILE = 273,
     FOR = 274,
     IF = 275,
     ELSE = 276,
     ELIF = 277,
     OPENBRACKET = 278,
     CLOSEBRACKET = 279,
     BRACKETBEGIN = 280,
     BRACKETEND = 281,
     SEMICOLON = 282,
     COMMA = 283,
     ASSIGN = 284,
     COLON = 285,
     EQUAL = 286,
     NOTEQUAL = 287,
     MAIN = 288,
     PRINT = 289,
     PRINTLN = 290,
     FUNCTION = 291,
     FACT = 292,
     HEADER = 293,
     SWITCH = 294,
     DEFAULT = 295,
     POWER = 296,
     IFX = 297,
     ELIFX = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 17 "bison.y"

    char str[1000];
    int val;



/* Line 1676 of yacc.c  */
#line 102 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


