%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    #include "code.c"
    int yyparse();
    int yylex();
    int yyerror();
    int acceptedIf[1000];
    int ptrIf=0;
    int sz=0;
    int sdone=0;
    int svar;
%}

%union {
    char str[1000];
    int val;
}

%token <str> ID
%token <val> NUMBER
%token <str> STR

%type <val> exp

%left LESSTHAN GREATERTHAN LESSEQUAL GREATEREQUAL
%left PLUS MINUS
%left MULTIPLICATION DIVISION

%token INT DOUBLE CHAR VOID
%token WHILE FOR IF ELSE ELIF
%token OPENBRACKET CLOSEBRACKET BRACKETBEGIN BRACKETEND SEMICOLON COMMA ASSIGN COLON
%token MINUS MULTIPLICATION DIVISION LESSTHAN GREATERTHAN LESSEQUAL GREATEREQUAL EQUAL NOTEQUAL
%token MAIN PRINT PRINTLN FUNCTION
%token FACT HEADER SWITCH DEFAULT POWER

%nonassoc IFX
%nonassoc ELIFX
%nonassoc ELSE

%%
start    : header function program function { 
                printf("\n Compiled Successfully\n");
            }
            ;

header   :  /* empty */
            |header head
            ;

head     : HEADER { 
                printf("  Header Included\n");
            }
            ;

program     : INT MAIN OPENBRACKET CLOSEBRACKET BRACKETBEGIN statement BRACKETEND
            ;

statement   : /* empty */
            | statement declaration
            | statement assign
            | statement arithmeticexp
            | statement print
            | statement ifelse
            | statement whilestmt
            | statement forstmt
            | statement switchstmt
            ;
declaration : type variables SEMICOLON { }

type        : INT | DOUBLE | CHAR { }
            ;
variables   : variable COMMA variables { }
            | variable { }
            ;

arithmeticexp : exp SEMICOLON { }
            ;

assign    : ID ASSIGN exp COMMA assign { }
            | ID ASSIGN exp SEMICOLON
            {
                int idx = isCreated(sz,$1);
                if(idx==-1)
                {
                    printf("Compilation Error ->  Varribale %s is not declared\n",$1);
                    exit(-1);
                }
                else 
                {
                    int n = log10($3) + 1;
                    char *numberArray = calloc(n, sizeof(char));
                    sprintf(numberArray,"%ld",$3);
                    assignVal(sz,$1,numberArray);
                }
            }
        ;

exp        :NUMBER { $$ = $1; }
            | ID 
                {
                    int idx = isCreated(sz,$1);
                    if(idx==-1)
                    {
                        printf("Compilation Error ->  Varribale %s is not declared\n",$1);
                        exit(-1);
                    }
                    else 
                    {
                        if(id[idx].type==1)
                            $$ = id[idx].intval;
                        else if(id[idx].type==2)
                            $$ = id[idx].doubleval;
                    }
                }
            | exp PLUS exp
                {
                    $$ = $1+$3;
                }
            | exp MINUS exp 
                {
                    $$ = $1-$3;
                }
            | exp MULTIPLICATION exp 
                {
                    $$ = $1*$3;
                }
            | exp DIVISION exp 
                {
                    if($3==0)
                    {
                        printf("Compilation Error -> DIVISIONide by Zero Occured\n");
                        exit(-1);
                    }
                    $$ = $1/$3;
                }
            | exp LESSTHAN exp 
                {
                    $$ = ($1<$3);
                }
            | exp GREATERTHAN exp 
                {
                    $$ = ($1>$3);
                }
            | exp LESSEQUAL exp 
                {
                    $$ = ($1<=$3);
                    
                }
            | exp GREATEREQUAL exp 
                {
                    $$ = ($1>=$3);
                }
            | exp EQUAL exp 
                {
                    $$ = ($1==$3);
                }
            | exp NOTEQUAL exp 
                {
                    $$ = ($1!=$3);
                }
            | OPENBRACKET exp CLOSEBRACKET 
                {
                    $$ = $2;
                }
            | FACT OPENBRACKET exp CLOSEBRACKET
                {
                    int tmp = 1, k = 2, limit = (int)$3;
                    for(;k<=limit;k++){
                        tmp = tmp * k;
                    }
                    $$ = tmp;
                }
            | POWER OPENBRACKET exp COMMA exp CLOSEBRACKET
                {
                    int tmp = 1, k = 1, limit = (int)$5;
                    for(;k<=limit;k++){
                        tmp = tmp * $3;
                    }
                    $$ = tmp;
                }
            ;

variable    :ID
                {
                    int res = addNewID(sz,$1,"");
                    if(!res)
                    {
                        printf("Compilation Error ->  Varribale %s is already declared\n",$1);
                        exit(-1);
                    }
                    else sz++;
                }
            |ID ASSIGN exp 
                {
                    int n = log10($3) + 1;
                    char *numberArray = calloc(n, sizeof(char));
                    sprintf(numberArray,"%ld",$3);
                    int res = addNewID(sz,$1,numberArray);
                    if(!res) 
                    {
                        printf("Compilation Error ->  Varribale %s is already declared\n",$1);
                        exit(-1);
                    }
                    else sz++;
                } 
            ;

print   :PRINT OPENBRACKET exp CLOSEBRACKET SEMICOLON
            {
                printf("Value of exp : %f\n",$3);
            }
            |PRINT OPENBRACKET ID CLOSEBRACKET SEMICOLON
            {
                int idx = isCreated(sz,$3);
                if(idx==-1)
                {
                    printf("Compilation Error ->  Varribale %s is not declared\n",$3);
                    exit(-1);
                }
                else
                {
                    print(id[idx]);
                }
            }
        | PRINT OPENBRACKET STR CLOSEBRACKET SEMICOLON
            {
                printf("Print String -> %s\n",$3);
            }
        | PRINTLN OPENBRACKET CLOSEBRACKET SEMICOLON
            {
                printf("\n");
            }
        ;

ifelse      : IF OPENBRACKET exp CLOSEBRACKET BRACKETBEGIN statement BRACKETEND  {
                    ptrIf++;
                    if($3>0){
                        printf("IF Statement Executed\n");
                        acceptedIf[ptrIf]=1;
                    }
                } elif {
                    ptrIf--;
                }
            ;
elif : /* empty */
        | ELIF OPENBRACKET exp CLOSEBRACKET BRACKETBEGIN statement BRACKETEND
            {
                if(acceptedIf[ptrIf]==0 && $3>0){
                    acceptedIf[ptrIf]=1;
                    printf("ELIF Statement executed\n");
                }
            } elif
        | elif ELSE BRACKETBEGIN statement BRACKETEND 
            {
                if(acceptedIf[ptrIf]==0)
                    printf("ELSE Statement Executed\n");
            }
        ;

forstmt : FOR OPENBRACKET forassign SEMICOLON exp SEMICOLON forassign CLOSEBRACKET BRACKETBEGIN statement BRACKETEND{
                printf("for loop executed\n");
            }
            ;

forassign   :ID ASSIGN exp COMMA ID ASSIGN exp
            | ID ASSIGN exp

whilestmt   : WHILE OPENBRACKET exp CLOSEBRACKET BRACKETBEGIN statement BRACKETEND{
                printf("while condition executed for %d\n",$3);
            }
            ;

function    : /* empty */
            | function func
            ;
func        : type FUNCTION OPENBRACKET fparams CLOSEBRACKET BRACKETBEGIN statement BRACKETEND 
                {
                    printf("\nfunction declared\n");
                }
            ;
fparams  : /* empty */
            | type ID fparam
            ;
fparam   : /* empty */
            | fparam COMMA type ID 
            ;

switchstmt  : SWITCH OPENBRACKET condition CLOSEBRACKET BRACKETBEGIN cases BRACKETEND
                {
                    printf("switch statement executed\n");
                }
        ;

condition   :  exp
                    {
                        sdone = 0;
                        svar = $1;
                    }
            ;


cases    : /* empty */
                | cases exp COLON BRACKETBEGIN statement BRACKETEND 
                    {
                        if($2 == svar){
                            printf("%d Executed\n",$2);
                            sdone = 1;
                        }                   
                    }
                | cases DEFAULT COLON BRACKETBEGIN statement BRACKETEND 
                    {
                        if(sdone == 0){
                            sdone = 1;
                            printf("Default Block executed\n");
                        }
                    }
                ;

%%

extern char yytext[];
extern int col;
int yyerror(char *s){
    fflush(stdout);
	printf("\n%*s\n%*s\n", col, "^", col, s);
}