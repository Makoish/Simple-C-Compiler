%{
#include <stdio.h>
#include <stdlib.h>
#include "parser.tab.h"


%}

%option yylineno

%%



int    {yylval.gval.type = "int"; return TYPE_INT;}
float  {yylval.gval.type = "float"; return TYPE_FLOAT ;}
double {yylval.gval.type = "double";return TYPE_DOUBLE ;}
string {yylval.gval.type = "string";return TYPE_STRING ;}
bool   {yylval.gval.type = "bool";return TYPE_BOOL ;}
char   {yylval.gval.type = "char";return TYPE_CHAR ;}




0|[1-9][0-9]* { yylval.Ival.value= strdup(yytext) ;  return INTEGER;}

0|[1-9][0-9]*\.[0-9]+ { yylval.Ival.value= strdup(yytext) ;  return FLOAT;}



\'.\' { yylval.Ival.value= strdup(yytext); return CHAR;}
\".*\" { yylval.Ival.value= strdup(yytext); return STRING;}




"for"  {return FOR;}
"while"  {return WHILE;}
"break"  {return BREAK;}
"continue"  {return CONTINUE;}
"do"  {return DO;}
"return" {return RETURN;};


if  {return IF;}
else  {return ELSE;}
elseif  {return ELSIF;}
default  {return DEFAULT;}
case  {return CASE;}
switch  {return SWITCH;}


true  {return T_BOOL ;}
false {return F_BOOL ;}



\= {return EQUAL;}
\+ {return PLUS;}
- {return MINUS;}
\|\| {return OR;}
&& {return AND;}
> {return GT;}
\< {return LT;}
>= {return GTE;}
\<= {return LTE;}
== {return EQUEQU;}
\!= {return NOTEQU;}
\-\- {return MINUSMINUS;}
\+\+ {return PLUSPLUS;}
\* {return MULT;}
\/ {return DIV;}
\^ {return POW;}


void { return VOID;}

[a-zA-Z][A-Za-z0-9_]* {yylval.gval.name = strdup(yytext); return VARIABLE;}

[ \t\n\r] {}
\#.*
using.* 
. {return yytext[0];}
%%



int yywrap(void) {
    return 1;
}