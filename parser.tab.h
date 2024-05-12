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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    TYPE_INT = 258,                /* TYPE_INT  */
    TYPE_FLOAT = 259,              /* TYPE_FLOAT  */
    TYPE_DOUBLE = 260,             /* TYPE_DOUBLE  */
    TYPE_STRING = 261,             /* TYPE_STRING  */
    TYPE_CHAR = 262,               /* TYPE_CHAR  */
    TYPE_BOOL = 263,               /* TYPE_BOOL  */
    VARIABLE = 264,                /* VARIABLE  */
    FOR = 265,                     /* FOR  */
    BREAK = 266,                   /* BREAK  */
    CONTINUE = 267,                /* CONTINUE  */
    WHILE = 268,                   /* WHILE  */
    DO = 269,                      /* DO  */
    IF = 270,                      /* IF  */
    DEFAULT = 271,                 /* DEFAULT  */
    ELSE = 272,                    /* ELSE  */
    VOID = 273,                    /* VOID  */
    CASE = 274,                    /* CASE  */
    SWITCH = 275,                  /* SWITCH  */
    T_BOOL = 276,                  /* T_BOOL  */
    F_BOOL = 277,                  /* F_BOOL  */
    INTEGER = 278,                 /* INTEGER  */
    FLOAT = 279,                   /* FLOAT  */
    DOUBLE = 280,                  /* DOUBLE  */
    CHAR = 281,                    /* CHAR  */
    RETURN = 282,                  /* RETURN  */
    STRING = 283,                  /* STRING  */
    EQUAL = 284,                   /* EQUAL  */
    PLUS = 285,                    /* PLUS  */
    MINUS = 286,                   /* MINUS  */
    OR = 287,                      /* OR  */
    AND = 288,                     /* AND  */
    GT = 289,                      /* GT  */
    LT = 290,                      /* LT  */
    GTE = 291,                     /* GTE  */
    LTE = 292,                     /* LTE  */
    EQUEQU = 293,                  /* EQUEQU  */
    NOTEQU = 294,                  /* NOTEQU  */
    MINUSMINUS = 295,              /* MINUSMINUS  */
    PLUSPLUS = 296,                /* PLUSPLUS  */
    MULT = 297,                    /* MULT  */
    DIV = 298,                     /* DIV  */
    NEG = 299,                     /* NEG  */
    POW = 300,                     /* POW  */
    ELSIF = 301                    /* ELSIF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 36 "parser.y"
       
                   
    double d;               
    char* str;

    struct 
    {
      const char* value;
    } varval;     

    struct
    {
      const char * type;
      const char * value;
    } Ival;

    struct
    {
      const char * type;
      const char * name;
      const char * value;
      const char * REGISTER;
    } gval;

    

    struct
    {
      const char * type;
      const char * name;
      const char * value;
    } sval;


#line 145 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
