%{
	#include<stdio.h>
	#include <math.h>
    extern FILE *yyin;
	extern FILE *yyout;
	int cnt=1,cnt2=1,val;
	typedef struct entry {
    	char *str;
    	int n;
	}storage;
	storage container[1000],sys[1000];
	void insert (storage *p, char *s, int n);
	int cnt3=1; 
	#define pi  3.1416
	
%}
%union 
{
        int number;
        char *string;
}
/* BISON Declarations */

%token <number> NUM
%token <string> VAR 
%token <string> IF ELIF ELSE MINIMUM MAXIMUM PRINT FUNCTION INT FLOAT DOUBLE CHAR LP RP LB RB CM SM PLUS MINUS MULT DIV POW FACT ASSIGN FOR COL WHILE BREAK COLON DEFAULT CASE SWITCH INCREMENT DECREMENT LOGIC LOE GOT
%type <string> statement
%type <number> expression
%nonassoc IFX
%nonassoc ELSEX
%nonassoc ELIFX
%left LT GT
%left PLUS MINUS
%left MULT DIV
%left FACT
%left POW

%%

program: FUNCTION LP RP LB cstatement RB { printf("\nSuccessful compilation\n"); }
	 ;

cstatement: /* empty */

	| cstatement statement
	
	| cdeclaration
	| cstatement print

	;

cdeclaration:	TYPE ID1 SM	{ printf("\nvalid declaration\n"); }
   
			;
			
TYPE : INT

     | FLOAT

     | CHAR
     ;

ID1  : ID1 CM VAR	{
						if(id_for_var($3))
						{
							printf("%s is already declared\n", $3 );
						}
						else
						{
							insert(&container[cnt],$3, cnt);
							cnt++;
							
						}
			}

     |VAR	{
				if(id_for_var($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					insert(&container[cnt],$1, cnt);
							cnt++;
				}
			}
     ;

statement: SM
	| SWITCH LP expression RP LB BASE RB    {printf("SWITCH case.\n");val=$3;} 

	| expression SM 			{ printf("\nvalue of expression: %d\n", ($1)); }

        | VAR ASSIGN expression SM 		{
							if(id_for_var($1)){
								int i = id_for_assignment($1);
								if (!i){
									insert(&sys[cnt2], $1, $3);
									printf("\n(%s) Value of the variable: %d\t\n",$1,$3);
									cnt2++;
								}else{
									sys[i].n = $3;
									printf("\n(%s) Value of the variable: %d\t\n",$1,$3);
								}
							}
							else {
								printf("%s not declared yet\n",$1);
							}
							
						}

	| IF LP expression RP LB expression SM RB %prec IFX {
								if($3)
								{
									printf("\nvalue of expression in IF: %d\n",($6));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							}

	| IF LP expression RP LB expression SM RB ELSE LB expression SM RB %prec ELSEX{
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$6);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$11);
									}
								   }
	| IF LP expression RP LB IF LP expression RP LB expression SM RB ELSE LB expression SM RB expression SM RB ELSE LB expression SM RB %prec IFX {
								 	if($3)
									{
										if($8)
											printf("\nvalue of expression middle IF: %d\n",$11);
										else
											printf("\nvalue of expression middle ELSE: %d\n",$16);
										printf("\nvalue of expression in first IF: %d\n",$19);
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",$24);
									}
								   }
	| IF LP expression RP LB expression SM RB ELIF LP expression RP LB expression SM RB ELSE LB expression SM RB %prec ELIFX{
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$6);
									}
									else if($11)
									{
										printf("\nvalue of expression in ELIF: %d\n",$14);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$19);
									}
								   }							   
	| FOR LP NUM COL NUM RP LB expression RB     {
	   int i=0;
	   for(i=$3;i<$5;i++){
	   printf("for loop statement\n");
	   }
	}
	| WHILE LP NUM GT NUM RP LB expression RB   {
										int i;
										printf("While LOOP: ");
										for(i=$3;i<=$5;i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										printf("value of the expression: %d\n",$8);

	}
	;
	
			BASE : Bas   
				 | Bas Dflt 
				 ;

			Bas   : /*NULL*/
				 | Bas Cs     
				 ;

			Cs    : CASE NUM COL expression SM   {
							  printf("\nCase No : %d  and Result :  %d\n",$2,$4);
					}
				 ;

			Dflt    : DEFAULT COL NUM SM    {					
							printf("\nResult in default Value is :  %d \n",$3);				
					}
				 ;    
	
	
expression: NUM				{ $$ = $1; 	}

	| VAR				{  int i = id_for_assignment($1);  $$ = sys[i].n; printf("Variable value: %d",$$)}

	| expression PLUS expression	{ $$ = $1 + $3; }

	| expression MINUS expression	{ $$ = $1 - $3; }

	| expression MULT expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
	| expression POW expression { $$ = pow($1,$3); }

	| expression FACT {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						
					 }	

	| expression LT expression	{ $$ = $1 < $3; }

	| expression GT expression	{ $$ = $1 > $3; }

	| LP expression RP		{ $$ = $2;	}

	| expression INCREMENT { $$ = 1; $$ = $1 + $$; }

	| MINIMUM LB expression CM expression RB	{ int p,q,r;
																p=$3;
																q=$5;
																if(p<q) $$=p;
																else $$=q;
															printf("Minimum value between %d and %d is: %d\n",$3,$5,$$);
															}
	| MAXIMUM LB expression CM expression RB	{ int p,q,r;
																p=$3;
																q=$5;
																if(p>q) $$=p;
																else $$=q;
															printf("Maximum value between %d and %d is: %d\n",$3,$5,$$);
															}
	
	
	;
%%

void insert(storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
}

int id_for_var(char *key)
{
    int i = 1;
    char *name = container[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = container[++i].str;
    }
    return 0;
}

int id_for_assignment(char *key)
{
    int i = 1;
    char *name = sys[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = sys[++i].str;
    }
    return 0;
}

int yywrap()
{
return 1;
}

int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();	
}

int yyerror(char *s){

	printf( "%s\n", s);
    return(0);
}