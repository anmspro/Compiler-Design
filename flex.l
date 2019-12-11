
%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
    #include <math.h>
	#include "bison.tab.h"    
    extern FILE *yyin;
	extern FILE *yyout;
%}

Header "$".*
identifiers "var_"[a-zA-Z0-9]+
integer [+-]?[0-9]+
float [+-]?[0-9]+[.][0-9]+|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+
double [+-]?[0-9]+[.][0-9]+{6,12}|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+{6,12}
char [A-Za-z]+
single_line_comment [#][#].*
multiple_line_comment [ ]*[#][/][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[/][#]


%%


{single_line_comment} {
	printf("single line comment\n");

}
{multiple_line_comment} {
	printf("multiline comment");
}

"["	 { return LB; }
"]"	  { return RB; }
"break_loop"    {   return BREAK;     }
"select"      { return CASE;      }
"switch"      { return SWITCH;	}
"default"     {  return DEFAULT; 	}
"print"	{return PRINT;}
"loop_while" { return WHILE;}
"intData"	{ return INT; }
"floatData"	{ return FLOAT; }
"doubleData"	{return DOUBLE;}
"charType"	{ return CHAR; }
":"     { return COL;}
{integer}	{ 
		yylval.number = atoi(yytext);
		return NUM;
	}
"loop_for"   { return FOR;}	
"<"	{ return LP; }
">"	{ return RP; }
"|"	{ return CM; }
"."	{ return SM; }
"add"	{ return PLUS;}
"sub"	{ return MINUS; }
"mul"	{ return MULT; }
"div"	{ return DIV; }
"pow"	{ return POW; }
"fact"	{ return FACT; }
"min"	{ return MINIMUM; }
"max"	{ return MAXIMUM; }
":="		{ return ASSIGN;  }
"bigger"	{ return GT; }
"smaller"	{ return LT; }
"smalleq" {return LOE;}
"bigeq" {return GOT;}

{identifiers} {
	 yylval.string=strdup(yytext);
	 return VAR;
	}

"if"		{ return IF;}
"else"		{ return ELSE;}
"elif"	{ return ELIF; }

"function "[A-Za-z]+	{ return FUNCTION; }
{Header}        {fprintf(yyout,"This is a Header file \n");}
[ \t\n]*	

%%

