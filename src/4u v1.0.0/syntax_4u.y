%{

#include "4u.h"
bool error_syntaxical=false;
bool error_semantical=false;
/* Our hash table */
GHashTable* table_variable;

/* Function to delete variables declared inside a syntax tree */
void supprime_variable(GNode*);

/* Function to tell if a tree node contains a decimal or not */
bool decimal(GNode*);

/* Our Variable structure which has as member the type and a generic pointer to the value */
typedef struct Variable Variable;
typedef struct Function Function;

struct Variable{
	char* type;
	GNode* value;
};

struct Function{
	char* type;
	GNode* value;
};

%}

/* The union in Bison is used to type our tokens as well as our non-terminals. Here we have declared a union with three types: number of type int, text of type pointer to char (char*) and syntactic tree node (AST) of type (GNode*) */

%union {
	long entier;
	double decimal;
	char* texte;
	GNode*	noeud;
}

/* Here we have the operators, they are defined by their order of priority. If I define for example the multiplication first and the addition after, then the + will prevail over the * in the language. Parentheses take precedence with %right */

%left	TOK_INCREMENTATION	TOK_DECREMENTATION	/* ++ -- */
%left	TOK_PLUS			TOK_MOINS			/* +- */
%left	TOK_MUL				TOK_DIV				TOK_MOD		/* / * × % */
%left	TOK_PUISSANCE		/* ^ */
%left	TOK_ET				TOK_OU				TOK_NON		/* et ou non */
%left	TOK_EQU				TOK_DIFF			TOK_SUP		TOK_INF			TOK_SUPEQU	TOK_INFEQU	/* comparaisons */
%right	TOK_PARG			TOK_PARD			/* ( ) */

/* We have the list of our expressions (the non-terminal ones). We type them all in node of the syntax tree (GNode*) */

%type<noeud>		code
%type<noeud>		bloc_code
%type<noeud>		commentaire
%type<noeud>		instruction
%type<noeud>		condition
%type<noeud>		condition_si
%type<noeud>		condition_sinon
%type<noeud>		boucle_for
%type<noeud>		boucle_while
%type<noeud>		boucle_do_while
%type<noeud>		variable_entiere
%type<noeud>		variable_decimale
%type<noeud>		variable_booleenne
%type<noeud>		variable_texte
%type<noeud>		affectation
%type<noeud>		affichage
%type<noeud>		suppression
%type<noeud>		expression_arithmetique
%type<noeud>		expression_booleenne
%type<noeud>		expression_texte
%type<noeud>		addition
%type<noeud>		soustraction
%type<noeud>		multiplication
%type<noeud>		division
%type<noeud>		modulo
%type<noeud>		saisie
%type<noeud>		function
%type<noeud>		nom_fonction

/* We have the list of our tokens (the terminals of our grammar) */

%token<entier>		TOK_ENTIER
%token<decimal>		TOK_DECIMAL
%token				TOK_VRAI		/* true */
%token				TOK_FAUX		/* false */
%token				TOK_AFFECT	  /* = */
%token				TOK_FINSTR	  /* ; */
%token				TOK_IN		  /* dans */
%token				TOK_CROG	TOK_CROD	/* [] */
%token				TOK_DISPLAY	 /* display */
%token				TOK_DEF_VAR		/* var */
%token<texte>		TOK_VARB		/* variable booleenne */
%token<texte>		TOK_VARE		/* variable entiere */
%token<texte>		TOK_VARD		/* variable decimale */
%token<texte>		TOK_VART
%token				TOK_IF		  /* if */
%token				TOK_ALORS	   /* alors */
%token				TOK_SINON	   /* sinon */
%token				TOK_COMMENT		/* commentaire */
%token				TOK_AFFECT_PLUS	TOK_AFFECT_MOINS	TOK_AFFECT_MUL	TOK_AFFECT_DIV	TOK_AFFECT_MOD	/* += -= *= /= %= */
%token				TOK_AFFECT_ET	TOK_AFFECT_OU	/* &= |= */
%token				TOK_POINT_INTERROGATION	/* ? */
%token				TOK_DOUBLE_POINT	/* : */
%token				TOK_FAIRE		/* faire */
%token				TOK_CROIX		/* x */
%token<texte>		TOK_TEXTE		/* texte libre */
%token				TOK_SUPPR		/* supprimer */
%token				TOK_SAISIR		/* saisir */
%token				TOK_FUNCTION	/* fonction */
%token				TOK_RETURN		/* return */

%%

/* We define all the grammatical rules for each non-terminal in our language. By default we begin to define the axiom, that is to say here the non-terminal code. If we don't define it first we have to specify it as an option in Bison with %start */

entree:	code{
			if(lang == "c")	genere_code_c($1);
			else if(lang == "js") genere_code_js($1);
			g_node_destroy($1);
		};

bloc_code:	code{
				$$=g_node_new((gpointer)BLOC_CODE);
				g_node_append($$,$1);
				supprime_variable($1);
			}

code:	%empty{$$=g_node_new((gpointer)CODE_VIDE);}
		|
		code commentaire{
			$$=g_node_new((gpointer)SEQUENCE);
			g_node_append($$,$1);
			g_node_append($$,$2);
		}
		|
 		code instruction{
			printf("Resultat : C'est une instruction valide !\n\n");
			$$=g_node_new((gpointer)SEQUENCE);
			g_node_append($$,$1);
			g_node_append($$,$2);
		}
		|
		code error{
			fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de syntaxe a la ligne %d.\n",lineno);
 			error_syntaxical=true;
		};

commentaire:	TOK_COMMENT{
					$$=g_node_new((gpointer)CODE_VIDE);
				};

instruction:	affectation{
					printf("\tInstruction type Affectation\n");
					$$=$1;
				}
				|
				affichage{
					printf("\tInstruction type Affichage\n");
					$$=$1;
				}
				|
				condition{
					printf("Condition si/sinon\n");
					$$=$1;
				}
				|
				boucle_for{
					printf("Boucle repetee\n");
					$$=$1;
				}
				|
				boucle_while{
					printf("Boucle tant que\n");
					$$=$1;
				}
				|
				boucle_do_while{
					printf("Boucle faire tant que\n");
					$$=$1;
				}
				|
				suppression{
					printf("\tInstruction type Suppression\n");
					$$=$1;
				}
				|
				saisie{
					printf("\tInstruction type Saisie\n");
					$$=$1;
				};

variable_entiere:	TOK_VARE{
						printf("\t\t\tVariable entiere %s\n",$1);
						$$=g_node_new((gpointer)VARIABLE);
						g_node_append_data($$,strdup($1));
					};
			
variable_decimale:	TOK_VARD{
						printf("\t\t\tVariable decimale %s\n",$1);
						$$=g_node_new((gpointer)VARIABLE);
						g_node_append_data($$,strdup($1));
					};

variable_booleenne:	TOK_VARB{
						printf("\t\t\tVariable booleenne %s\n",$1);
						$$=g_node_new((gpointer)VARIABLE);
						g_node_append_data($$,strdup($1));
					};

variable_texte:	TOK_VART{
					printf("\t\t\tVariable texte %s\n",$1);
					$$=g_node_new((gpointer)VARIABLE);
					g_node_append_data($$,strdup($1));
				};

condition:	condition_si TOK_FINSTR{
				printf("\tCondition si\n");
				$$=g_node_new((gpointer)CONDITION_SI);
				g_node_append($$,$1);
			}
			|
			condition_si condition_sinon TOK_FINSTR{
				printf("\tCondition si/sinon\n");
				$$=g_node_new((gpointer)CONDITION_SI_SINON);
				g_node_append($$,$1);
				g_node_append($$,$2);
			}
			|
			TOK_PARG expression_booleenne TOK_PARD TOK_POINT_INTERROGATION bloc_code TOK_DOUBLE_POINT bloc_code TOK_FINSTR{
				printf("\tCondition si/sinon\n");
				$$=g_node_new((gpointer)CONDITION_SI_SINON);
				g_node_append($$,g_node_new((gpointer)SI));
				g_node_append(g_node_nth_child($$,0),$2);
				g_node_append(g_node_nth_child($$,0),$5);
				g_node_append($$,g_node_new((gpointer)SINON));
				g_node_append(g_node_nth_child($$,1),$7);

			};

condition_si:	TOK_IF expression_booleenne TOK_ALORS bloc_code{
					$$=g_node_new((gpointer)SI);
					g_node_append($$,$2);
					g_node_append($$,$4);
				};

condition_sinon:	TOK_SINON bloc_code{
						$$=g_node_new((gpointer)SINON);
						g_node_append($$,$2);
					};

boucle_for:	TOK_PARG expression_arithmetique TOK_PARD TOK_CROIX bloc_code TOK_FINSTR{
				$$=g_node_new((gpointer)BOUCLE_FOR);
				g_node_append($$,g_node_new((gpointer)ENTIER));
				g_node_append_data(g_node_nth_child($$,0),strdup("0"));
				g_node_append($$,g_node_new((gpointer)ENTIER));
				g_node_append_data(g_node_nth_child($$,1),strdup("1"));
				g_node_append($$,$2);
				g_node_append($$,$5);
			}
			|
			TOK_PARG expression_arithmetique TOK_DOUBLE_POINT expression_arithmetique TOK_PARD bloc_code TOK_FINSTR{
				$$=g_node_new((gpointer)BOUCLE_FOR);
				g_node_append($$,$2);
				g_node_append($$,g_node_new((gpointer)ENTIER));
				g_node_append_data(g_node_nth_child($$,1),strdup("1"));
				g_node_append($$,$4);
				g_node_append($$,$6);
			}
			|
			TOK_PARG expression_arithmetique TOK_DOUBLE_POINT expression_arithmetique TOK_DOUBLE_POINT expression_arithmetique TOK_PARD bloc_code TOK_FINSTR{
				$$=g_node_new((gpointer)BOUCLE_FOR);
				g_node_append($$,$2);
				g_node_append($$,$4);
				g_node_append($$,$6);
				g_node_append($$,$8);
			};

boucle_while:	TOK_PARG expression_booleenne TOK_PARD TOK_POINT_INTERROGATION bloc_code TOK_FINSTR{
					$$=g_node_new((gpointer)BOUCLE_WHILE);
					g_node_append($$,$2);
					g_node_append($$,$5);
				};

boucle_do_while:	TOK_FAIRE bloc_code TOK_POINT_INTERROGATION TOK_PARG expression_booleenne TOK_PARD TOK_FINSTR{
						$$=g_node_new((gpointer)BOUCLE_DO_WHILE);
						g_node_append($$,$2);
						g_node_append($$,$5);
					};

affectation:	variable_entiere TOK_AFFECT expression_arithmetique TOK_FINSTR{
				/* $1 is the value of the first nonterminal. Here it is the value of the non-terminal variable. $3 is the value of the 2nd non terminal. */
				printf("\t\tAffectation sur la variable\n");
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					/* We create a Variable and assign it the type we know and the value */
					var=malloc(sizeof(Variable));
					if(var!=NULL){
						var->type=strdup("entier");
						var->value=$3;
						/* Insert it into the hash table (key: <variable_name> / value: <(type,value)>) */
						if(g_hash_table_insert(table_variable,g_node_nth_child($1,0)->data,var)){
							$$=g_node_new((gpointer)AFFECTATIONE);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}else{
							fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
							exit(-1); 
						}
					}else{
						fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
						exit(-1);
					}
				}else{
					$$=g_node_new((gpointer)AFFECTATION);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_entiere TOK_AFFECT_PLUS expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_PLUS);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_entiere TOK_AFFECT_MOINS expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_MOINS);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_entiere TOK_AFFECT_MUL expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_MUL);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_entiere TOK_AFFECT_DIV expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_DIV);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_entiere TOK_AFFECT_MOD expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_MOD);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_entiere TOK_INCREMENTATION TOK_FINSTR{
				printf("\t\t\tIncrementation de +1 sur la variable\n");
				$$=g_node_new((gpointer)AFFECTATION_INCR);
				g_node_append($$,$1);
			}
			|
			variable_entiere TOK_DECREMENTATION TOK_FINSTR{
				printf("\t\t\tDecrementation de -1 sur la variable\n");
				$$=g_node_new((gpointer)AFFECTATION_DECR);
				g_node_append($$,$1);
			}
			|
			variable_decimale TOK_AFFECT expression_arithmetique TOK_FINSTR{
				/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
				printf("\t\tAffectation sur la variable\n");
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
					var=malloc(sizeof(Variable));
					if(var!=NULL){
						var->type=strdup("decimal");
						var->value=$3;
						/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
						if(g_hash_table_insert(table_variable,g_node_nth_child($1,0)->data,var)){
							$$=g_node_new((gpointer)AFFECTATIOND);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}else{
							fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
							exit(-1); 
						}
					}else{
						fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
						exit(-1);
					}
				}else{
					$$=g_node_new((gpointer)AFFECTATION);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_decimale TOK_AFFECT_PLUS expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_PLUS);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_decimale TOK_AFFECT_MOINS expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_MOINS);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_decimale TOK_AFFECT_MUL expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_MUL);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_decimale TOK_AFFECT_DIV expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_DIV);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_decimale TOK_AFFECT_MOD expression_arithmetique TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_MOD);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_decimale TOK_INCREMENTATION TOK_FINSTR{
				printf("\t\t\tIncrementation de +1 sur la variable\n");
				$$=g_node_new((gpointer)AFFECTATION_INCR);
				g_node_append($$,$1);
			}
			|
			variable_decimale TOK_DECREMENTATION TOK_FINSTR{
				printf("\t\t\tDecrementation de -1 sur la variable\n");
				$$=g_node_new((gpointer)AFFECTATION_DECR);
				g_node_append($$,$1);
			}
			|
			variable_booleenne TOK_AFFECT expression_booleenne TOK_FINSTR{
				/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
				printf("\t\tAffectation sur la variable\n");
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
					var=malloc(sizeof(Variable));
					if(var!=NULL){
						var->type=strdup("booleen");
						var->value=$3;
						/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
						if(g_hash_table_insert(table_variable,g_node_nth_child($1,0)->data,var)){
							$$=g_node_new((gpointer)AFFECTATIONB);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}else{
							fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
							exit(-1); 
						}
					}else{
						fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
						exit(-1);
					}
				}else{
					$$=g_node_new((gpointer)AFFECTATION);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_booleenne TOK_AFFECT_ET expression_booleenne TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_ET);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_booleenne TOK_AFFECT_OU expression_booleenne TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATION_OU);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_texte TOK_AFFECT expression_texte TOK_FINSTR{
				/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
				printf("\t\tAffectation sur la variable\n");
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
					var=malloc(sizeof(Variable));
					if(var!=NULL){
						var->type=strdup("texte");
						var->value=$3;
						/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
						if(g_hash_table_insert(table_variable,g_node_nth_child($1,0)->data,var)){
							$$=g_node_new((gpointer)AFFECTATIONNT);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}else{
							fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
							exit(-1); 
						}
					}else{
						fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
						exit(-1);
					}
				}else{
					$$=g_node_new((gpointer)AFFECTATION);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			}
			|
			variable_texte TOK_AFFECT_PLUS expression_texte TOK_FINSTR{
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
				if(var==NULL){
					fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
					error_semantical=true;
				}else{
					$$=g_node_new((gpointer)AFFECTATIONT_CONCAT);
					g_node_append($$,$1);
					g_node_append($$,$3);
				}
			};
		
saisie:	TOK_SAISIR variable_texte TOK_FINSTR{
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($2,0)->data);
			if(var==NULL){
					/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
			var=malloc(sizeof(Variable));
			if(var!=NULL){
				var->type=strdup("texte");
				var->value=NULL;
				/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
				if(g_hash_table_insert(table_variable,g_node_nth_child($2,0)->data,var)){
					$$=g_node_new((gpointer)SAISIENT);
					g_node_append($$,$2);
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					exit(-1); 
				}
			}else{
				fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
				exit(-1);
			}
			}else{
				$$=g_node_new((gpointer)SAISIET);
				g_node_append($$,$2);
			}
		}
		|
		TOK_SAISIR variable_entiere TOK_FINSTR{
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($2,0)->data);
			if(var==NULL){
					/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
			var=malloc(sizeof(Variable));
			if(var!=NULL){
				var->type=strdup("entier");
				var->value=NULL;
				/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
				if(g_hash_table_insert(table_variable,g_node_nth_child($2,0)->data,var)){
					$$=g_node_new((gpointer)SAISIENE);
					g_node_append($$,$2);
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					exit(-1); 
				}
			}else{
				fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
				exit(-1);
			}
			}else{
				$$=g_node_new((gpointer)SAISIEE);
				g_node_append($$,$2);
			}
		}
		|
		TOK_SAISIR variable_booleenne TOK_FINSTR{
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($2,0)->data);
			if(var==NULL){
					/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
			var=malloc(sizeof(Variable));
			if(var!=NULL){
				var->type=strdup("booleen");
				var->value=NULL;
				/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
				if(g_hash_table_insert(table_variable,g_node_nth_child($2,0)->data,var)){
					$$=g_node_new((gpointer)SAISIENB);
					g_node_append($$,$2);
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					exit(-1); 
				}
			}else{
				fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
				exit(-1);
			}
			}else{
				$$=g_node_new((gpointer)SAISIEB);
				g_node_append($$,$2);
			}
		}
		|
		TOK_SAISIR variable_decimale TOK_FINSTR{
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($2,0)->data);
			if(var==NULL){
					/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
			var=malloc(sizeof(Variable));
			if(var!=NULL){
				var->type=strdup("decimal");
				var->value=NULL;
				/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
				if(g_hash_table_insert(table_variable,g_node_nth_child($2,0)->data,var)){
					$$=g_node_new((gpointer)SAISIEND);
					g_node_append($$,$2);
				}else{
					fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME CREATION VARIABLE !\n");
					exit(-1); 
				}
			}else{
				fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
				exit(-1);
			}
			}else{
				$$=g_node_new((gpointer)SAISIED);
				g_node_append($$,$2);
			}
		};

affichage:	TOK_DISPLAY expression_arithmetique TOK_FINSTR{
				printf("\t\tAffichage de la valeur de l'expression arithmetique\n");
				if(decimal($2)){
					$$=g_node_new((gpointer)AFFICHAGED);
					g_node_append($$,$2);
				}else{
					$$=g_node_new((gpointer)AFFICHAGEE);
					g_node_append($$,$2);
				}
			}
			|
			TOK_DISPLAY expression_booleenne TOK_FINSTR{
				printf("\t\tAffichage de la valeur de l'expression booleenne\n");
				$$=g_node_new((gpointer)AFFICHAGEB);
				g_node_append($$,$2);
			}
			|
			TOK_DISPLAY expression_texte TOK_FINSTR{
				printf("\t\tAffichage de la valeur de l'expression textuelle\n");
				$$=g_node_new((gpointer)AFFICHAGET);
				g_node_append($$,$2);
			};

suppression:	TOK_SUPPR variable_texte TOK_FINSTR{
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($2,0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"texte")==0){
							printf("\t\t\tSuppression de la variable texte\n");
							$$=g_node_new((gpointer)SUPPRESSIONT);
							g_node_append($$,$2);
							/* suppression de la variable dans la table de hachage */
							printf("suppresion variable %s\n",(char*)g_node_nth_child($2,0)->data);
							if(g_hash_table_remove(table_variable,(char*)g_node_nth_child($2,0)->data)){
								printf("Variable supprimee !\n");
							}else{
								fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME DE SUPPRESSION VARIABLE !\n");
								exit(-1);
							}
						}else{
							fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible !\n",lineno);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($2,0)->data);
						error_semantical=true;
					}
				};

expression_arithmetique:	TOK_ENTIER{
								printf("\t\t\tNombre entier : %ld\n",$1);
								/* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
								int length=snprintf(NULL,0,"%ld",$1);
								char* str=malloc(length+1);
								snprintf(str,length+1,"%ld",$1);
								$$=g_node_new((gpointer)ENTIER);
								g_node_append_data($$,strdup(str));
								free(str);
							}
							|
							TOK_DECIMAL{
								printf("\t\t\tNombre decimal : %f\n",$1);
								/* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
								int length=snprintf(NULL,0,"%f",$1);
								char* str=malloc(length+1);
								snprintf(str,length+1,"%f",$1);
								$$=g_node_new((gpointer)DECIMAL);
								g_node_append_data($$,strdup(str));
								free(str);
							}
							|
							variable_entiere{
								/* On recupere un pointeur vers la structure Variable */
								Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
								/* Si on a trouve un pointeur valable */
								if(var!=NULL){
									/* On verifie que le type est bien un entier ou un decimal - Inutile car impose a l'analyse syntaxique */
									if(strcmp(var->type,"entier")==0){
										$$=$1;
									}else{
										fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible (entier attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child($1,0)->data);
										error_semantical=true;
									}
								/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
								}else{
									fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
									error_semantical=true;
								}
							}
							|
							variable_decimale{
								/* On recupere un pointeur vers la structure Variable */
								Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
								/* Si on a trouve un pointeur valable */
								if(var!=NULL){
									/* On verifie que le type est bien un entier ou un decimal - Inutile car impose a l'analyse syntaxique */
									if(strcmp(var->type,"decimal")==0){
										$$=$1;
									}else{
										fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible (decimal attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child($1,0)->data);
										error_semantical=true;
									}
								/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
								}else{
									fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
									error_semantical=true;
								}
							}
							|
							addition{
								$$=$1;
							}
							|
							soustraction{
								$$=$1;
							}
							|
							multiplication{
								$$=$1;
							}
							|
							division{
								$$=$1;
							}
							|
							modulo{
								$$=$1;
							}
							|
							TOK_PLUS expression_arithmetique{
								$$=$2;
							}
							|
							expression_arithmetique TOK_INCREMENTATION{
								printf("\t\t\tIncrementation de +1\n");
								$$=g_node_new((gpointer)INCREMENTATION);
								g_node_append($$,$1);
							}
							|
							expression_arithmetique TOK_DECREMENTATION{
								printf("\t\t\tDecrementation de -1\n");
								$$=g_node_new((gpointer)DECREMENTATION);
								g_node_append($$,$1);
							}
							|
							TOK_MOINS expression_arithmetique{
								printf("\t\t\tOperation unaire negation\n");
								$$=g_node_new((gpointer)NEGATIF);
								g_node_append($$,$2);
							}
							|
							TOK_PARG expression_arithmetique TOK_PARD{
								printf("\t\t\tC'est une expression arithmetique entre parentheses\n");
								$$=g_node_new((gpointer)EXPR_PAR);
								g_node_append($$,$2);
							};

expression_booleenne:	TOK_VRAI{
							printf("\t\t\tBooleen Vrai\n");
							$$=g_node_new((gpointer)VRAI);
						}
						|
						TOK_FAUX{
							printf("\t\t\tBooleen Faux\n");
							$$=g_node_new((gpointer)FAUX);
						}
						|
						variable_booleenne{
							/* On recupere un pointeur vers la structure Variable */
							Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
							/* Si on a trouve un pointeur valable */
							if(var!=NULL){
								/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
								if(strcmp(var->type,"booleen")==0){
									$$=$1;
								}else{
									fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible (booleen attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child($1,0)->data);
									error_semantical=true;
								}
							/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
							}else{
								fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
								error_semantical=true;
							}
						}
						|
						TOK_NON expression_booleenne{
							printf("\t\t\tOperation booleenne Non\n");
							$$=g_node_new((gpointer)NON);
							g_node_append($$,$2);
						}
						|
						expression_booleenne TOK_ET expression_booleenne{
							printf("\t\t\tOperation booleenne Et\n");
							$$=g_node_new((gpointer)ET);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_booleenne TOK_OU expression_booleenne{
							printf("\t\t\tOperation booleenne Ou\n");
							$$=g_node_new((gpointer)OU);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						TOK_PARG expression_booleenne TOK_PARD{
							printf("\t\t\tC'est une expression booleenne entre parentheses\n");
							$$=g_node_new((gpointer)EXPR_PAR);
							g_node_append($$,$2);
						}
						|
						expression_booleenne TOK_EQU expression_booleenne{
							printf("\t\t\tOperateur d'egalite ==\n");
							$$=g_node_new((gpointer)EGALITE);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_booleenne TOK_DIFF expression_booleenne{
							printf("\t\t\tOperateur d'inegalite !=\n");
							$$=g_node_new((gpointer)DIFFERENT);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_arithmetique TOK_EQU expression_arithmetique{
							printf("\t\t\tOperateur d'egalite ==\n");
							$$=g_node_new((gpointer)EGALITE);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_arithmetique TOK_DIFF expression_arithmetique{
							printf("\t\t\tOperateur d'inegalite !=\n");
							$$=g_node_new((gpointer)DIFFERENT);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_arithmetique TOK_SUP expression_arithmetique{
							printf("\t\t\tOperateur de superiorite >\n");
							$$=g_node_new((gpointer)SUPERIEUR);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_arithmetique TOK_INF expression_arithmetique{
							printf("\t\t\tOperateur d'inferiorite <\n");
							$$=g_node_new((gpointer)INFERIEUR);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_arithmetique TOK_SUPEQU expression_arithmetique{
							printf("\t\t\tOperateur >=\n");
							$$=g_node_new((gpointer)SUPEGAL);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_arithmetique TOK_INFEQU expression_arithmetique{
							printf("\t\t\tOperateur <=\n");
							$$=g_node_new((gpointer)INFEGAL);
							g_node_append($$,$1);
							g_node_append($$,$3);
						}
						|
						expression_arithmetique TOK_IN TOK_CROG expression_arithmetique TOK_FINSTR expression_arithmetique TOK_CROD{
							printf("\t\t\tOperateur dans\n");
							$$=g_node_new((gpointer)DANSII);
							g_node_append($$,$1);
							g_node_append($$,$4);
							g_node_append($$,$6);
						}
						|
						expression_arithmetique TOK_IN TOK_CROD expression_arithmetique TOK_FINSTR expression_arithmetique TOK_CROD{
							printf("\t\t\tOperateur dans\n");
							$$=g_node_new((gpointer)DANSEI);
							g_node_append($$,$1);
							g_node_append($$,$4);
							g_node_append($$,$6);
						}
						|
						expression_arithmetique TOK_IN TOK_CROG expression_arithmetique TOK_FINSTR expression_arithmetique TOK_CROG{
							printf("\t\t\tOperateur dans\n");
							$$=g_node_new((gpointer)DANSIE);
							g_node_append($$,$1);
							g_node_append($$,$4);
							g_node_append($$,$6);
						}
						|
						expression_arithmetique TOK_IN TOK_CROD expression_arithmetique TOK_FINSTR expression_arithmetique TOK_CROG{
							printf("\t\t\tOperateur dans\n");
							$$=g_node_new((gpointer)DANSEE);
							g_node_append($$,$1);
							g_node_append($$,$4);
							g_node_append($$,$6);
						};

expression_texte:	TOK_TEXTE{
						printf("\t\t\tTexte %s\n",$1);
						$$=g_node_new((gpointer)TEXTE);
						g_node_append_data($$,strdup($1));
					}
					|
					variable_texte{
						/* On recupere un pointeur vers la structure Variable */
						Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child($1,0)->data);
						/* Si on a trouve un pointeur valable */
						if(var!=NULL){
							/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
							if(strcmp(var->type,"texte")==0){
								$$=$1;
							}else{
								fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Type incompatible (texte attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child($1,0)->data);
								error_semantical=true;
							}
						/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
						}else{
							fprintf(stderr,"\t\033[31m\033[01mERREUR\033[0m : \033[31m\033[01mERREUR\033[0m de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child($1,0)->data);
							error_semantical=true;
						}
					};

addition:	expression_arithmetique TOK_PLUS expression_arithmetique{
				printf("\t\t\tAddition\n");
				$$=g_node_new((gpointer)ADDITION);
				g_node_append($$,$1);
				g_node_append($$,$3);
			};

soustraction:	expression_arithmetique TOK_MOINS expression_arithmetique{
					printf("\t\t\tSoustraction\n");
					$$=g_node_new((gpointer)SOUSTRACTION);
					g_node_append($$,$1);
					g_node_append($$,$3);
				};

multiplication:	expression_arithmetique TOK_MUL expression_arithmetique{
					printf("\t\t\tMultiplication\n");
					$$=g_node_new((gpointer)MULTIPLICATION);
					g_node_append($$,$1);
					g_node_append($$,$3);
				};

division:	expression_arithmetique TOK_DIV expression_arithmetique{
				printf("\t\t\tDivision\n");
				$$=g_node_new((gpointer)DIVISION);
				g_node_append($$,$1);
				g_node_append($$,$3);
			};

modulo:	expression_arithmetique TOK_MOD expression_arithmetique{
			printf("\t\t\tModulo\n");
			$$=g_node_new((gpointer)MODULO);
			g_node_append($$,$1);
			g_node_append($$,$3);
		};

function:	TOK_FUNCTION nom_fonction TOK_PARD expression_arithmetique TOK_PARG{
				printf("\t\t\tFonction\n");
				$$=g_node_new((gpointer)FUNCTION);
				g_node_append($$,$3);
			};

%%

/* In the main function, we call the yyparse() routine which will be generated by Bison. 
 * This routine will call yylex() from our lexical analyzer. */

int main(int argc, char** argv){
	/* get input file name (4U language) given as parameter */
	char* fichier_entree=strdup(argv[1]);
	/* open file for reading in stdin input stream */
	stdin=fopen(fichier_entree,"r");
	/* create output file (C or JS language in HTML) */
	char* fichier_sortie=strdup(argv[1]);
	char* lang = argv[2];
	/*printf("\"");
	printf("%i", lang);
	printf("\"");
	printf("\n");
	lang = rindex(lang, 'T');
	printf("\"");
	printf("%lu", lang);
	printf("\"");
	printf("\n");
	printf("\"");
	printf("%c", *lang);
	printf("\"");
	printf("\n");
	printf("\"");
	printf("%i", lang == "ToC");
	printf("\"");
	printf("\n");*/
	if(lang == "c"){
		/* remplace l'extension par .c */
		strcpy(rindex(fichier_sortie, '.'), ".c");
		printf("C Ok!\n");
	}
	else if(lang == "js"){
		/* remplace l'extension par .html */
		strcpy(rindex(fichier_sortie, '.'), ".html");
		printf("JS Ok!\n");
	}
	else{
		strcpy(rindex(fichier_sortie, '.'), "");
		printf("\nNo Ok.\n");
	}
	/* ouvre le fichier cree en ecriture */
	fichier=fopen(fichier_sortie, "w");
	/* Creation de la table de hachage */
	table_variable=g_hash_table_new_full(g_str_hash,g_str_equal,NULL,free);
	printf("Debut de l'analyse syntaxique :\n");
	if(lang == "c")	debut_code_c();
	else if(lang == "js") debut_code_js();
	yyparse();
	if(lang == "c")	fin_code_c();
	else if(lang == "js") fin_code_js();
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
	/* Suppression du fichier genere si \033[31m\033[01mERREUR\033[0ms analyse */
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
	fprintf(stderr, "\033[31m\033[01mERREUR\033[0m de syntaxe a la ligne %d: %s\n", lineno, s);
}

/* This function deletes in the hash table all the variables declared for the first time in the syntax tree given as parameter */

void supprime_variable(GNode* ast){
	/* si l'element n'est pas NULL et que ce n'est pas une feuille et que ce n'est pas un type bloc code (pour eviter de supprimer une variable deja suprimee) */
	if(ast&&!G_NODE_IS_LEAF(ast)&&(long)ast->data!=BLOC_CODE){
		/* si le noeud est de type declaration */
		if((long)ast->data==AFFECTATIONB||(long)ast->data==AFFECTATIONE|(long)ast->data==AFFECTATIONNT|(long)ast->data==AFFECTATIOND){
			/* suppression de la variable dans la table de hachage */
			if(g_hash_table_remove(table_variable,(char*)g_node_nth_child(g_node_nth_child(ast,0),0)->data)){
				printf("Variable supprimee !\n");
			}else{
				fprintf(stderr,"\033[31m\033[01mERREUR\033[0m - PROBLEME DE SUPPRESSION VARIABLE !\n");
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

/* This function says if a tree contains a decimal */

bool decimal(GNode* ast){
	/* if the element is not NULL and it is not a leaf and it is not a code block type (to avoid deleting a variable already deleted) */
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
