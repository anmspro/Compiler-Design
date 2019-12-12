SPECIAL [$_@]
DIGIT [0-9]
CHARACTER [a-zA-Z]
NEWLINE "\n"
SPACE " "
DATATYPE "int"|"double"|"char"|"void"
ARITHMETIC_OPERATOR "="|"+"|"-"|"/"|"*"|"&"|"|"|"%"
RELATIONAL_OPERATOR "<"|">"|"<="|">="|"&&"|"||"|"=="|"!="
IDENTIFIER ({CHARACTER}|{DIGIT}|{SPECIAL})+

%{
    #include "bison.tab.h"
    #include <string.h>
    int yyparse();
    int yylex();
    int yyerror();
    FILE *output;
    void count();
    int com=0;
%}

%%
"!!".* { 
	com=0;
	fprintf(output,"Single line comments found\n");
}
"!*".* {
    if(com==0){
        fprintf(output,"Multiple line comments started\n");
        com=1;
    }
}

"*!" {
    if(com==1){
        fprintf(output,"Multiple line comments ended\n");
        com=0;
    }
    else{
        printf("Compilation Error!\n");
        exit(-1);
    }
}
{NEWLINE} {
    if(com==0){
        count();
        }
    }
{SPACE} { 
    if(com==0){
        count();
        }
    }
";" {
        if(com==0){
            count();
            return SEMICOLON;
        }
    }
"," {
        if(com==0){
            count();
            return COMMA;
        }
    }
{DIGIT}+ {
    if(com==0){
        count();
        fprintf(output,"TOKEN 1 -> %s\n",yytext);
        yylval.val = atoi(yytext);
        return NUMBER;
    }
}

"fun->main" { 
    if(com==0){
        count();
        fprintf(output,"TOKEN 2 -> %s\n",yytext);
        return MAIN;
        }
    }
"fun->println" { 
    if(com==0){
        count();
        fprintf(output,"TOKEN 3 -> %s\n",yytext);
        return PRINTLN;
        }
    }
"fun->print" {
    if(com==0){
        count();
        fprintf(output,"TOKEN 4 -> %s\n",yytext);
        return PRINT;
        }
    }
"fun->"({CHARACTER}|{DIGIT}|{SPECIAL})+ {
    if(com==0){
        count();
        fprintf(output,"TOKEN 5 -> %s\n",yytext);
        return FUNCTION;
        }
    }
"var->"({CHARACTER}|{DIGIT}|{SPECIAL})+ {
    if(com==0){
        count();
        fprintf(output,"TOKEN 6 -> %s\n",yytext);
        strcpy(yylval.str,yytext);
        return ID;
        }
    }

"int" {
    if(com==0){
        count();
        fprintf(output,"TOKEN 7 -> %s\n",yytext);
        return INT;
        }
    }
"double" {
    if(com==0){
        count();
        fprintf(output,"TOKEN 8 -> %s\n",yytext);
        return DOUBLE;
        }
    }
"char" {
    if(com==0){
        count();
        fprintf(output,"TOKEN 9 -> %s\n",yytext);
        return CHAR;
        }
    }

"for" {
    if(com==0){
        count();
        fprintf(output,"TOKEN 10 -> %s\n",yytext);
        return FOR;
        }
    }
"while" {
    if(com==0){
        count();
        fprintf(output,"TOKEN 11 -> %s\n",yytext);
        return WHILE;
        }
    }

"(" {
    if(com==0){
        count();
        fprintf(output,"TOKEN 12 -> %s\n",yytext);
        return OPENBRACKET;
    }
}
")" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 13 -> %s\n",yytext);
            return CLOSEBRACKET;
        }
    }

"{" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 14 -> %s\n",yytext);
            return BRACKETBEGIN;
            }
    }
"}" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 15 -> %s\n",yytext);
            return BRACKETEND;
        }
    }

"<=" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 16 -> %s\n",yytext);
            return LESSEQUAL;
        }
    }
">=" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 17 -> %s\n",yytext);
            return GREATEREQUAL;
        }
    }
"==" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 18 -> %s\n",yytext);
            return EQUAL;
        }
    }
"!=" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 19 -> %s\n",yytext);
            return NOTEQUAL;
        }
    }
"=" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 20 -> %s\n",yytext);
            return ASSIGN;
        }
    }
"+" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 21 -> %s\n",yytext);
            return PLUS;
        }
    }
"-" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 22 -> %s\n",yytext);
            return MINUS;
        }
    }
"*" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 23 -> %s\n",yytext);
            return MULTIPLICATION;
        }
    }
"/" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 24 -> %s\n",yytext);
            return DIVISION;
        }
    }
"<" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 25 -> %s\n",yytext);
            return LESSTHAN;
        }
    }
">" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 26 -> %s\n",yytext);
            return GREATERTHAN;
            }
    }

"elif" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 27 -> %s\n",yytext);
            return ELIF;
        }
    }
"if" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 28 -> %s\n",yytext);
            return IF;
        }
    }
"else" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 29 -> %s\n",yytext);
            return ELSE;
        }
    }


"\""(.)*"\"" {
    if(com==0){
        count();
        fprintf(output,"TOKEN 30 -> %s\n",yytext);
        strcpy(yylval.str,yytext+1);
        yylval.str[strlen(yylval.str)-1]='\n';
        return STR;
    }
}

"fact" {
		if(com==0){
            count();
            fprintf(output,"TOKEN 31 -> %s\n",yytext);
            return FACT;
        }
	}
"header->"({CHARACTER}|{DIGIT}|{SPECIAL})+ {
    if(com==0){
	        count();
	        fprintf(output,"TOKEN 32 -> %s\n",yytext);
	        strcpy(yylval.str,yytext);
	        return HEADER;
        }
    }

 "Switch" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 33 -> %s\n",yytext);
            return SWITCH;
        }
    }

  ":" {
        if(com==0){
            count();
            fprintf(output,"TOKEN 34 -> %s\n",yytext);
            return COLON;
            }
    }
  "default" {
      if(com==0){
          count();
          fprintf(output,"TOKEN 35 -> %s\n",yytext);
          return DEFAULT;
      }
  }
  "power" {
		if(com==0){
            count();
            fprintf(output,"TOKEN 36 -> %s\n",yytext);
            return POWER;
        }
	}

. {
	if(com==0){
		printf("Compilation Error!\n");
		exit(-1);
	}
}

%%

int yywrap()
{
	return 1;
}

int col  = 0;
void count()
{
    int i;
    for(int i=0;yytext[i]!='\0';i++)
    {
        if(yytext[i]=='\n')
            col=0;
        else if(yytext[i]=='\t')
            col+=(8-(col%8));
        else col++;
    }
    ECHO;
}
int main(){
    freopen("input.txt","r",stdin);
	output = fopen("output.txt","w");
    yyparse();
    fclose(output);
}