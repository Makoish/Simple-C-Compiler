

%{
    #include <stdio.h>
    #include <stdarg.h>
    int yylex(void);
    #include <string.h>
    void yyerror(const char *); 
    char *string_to_upper(const char *str);
    #include "src/SymbolTable.h"
    #include "src/FunctionTable.h"

    #include "src2/QUAD.h"

   
    SymbolTable * table = new SymbolTable("GLOBAL");
    SymbolTable * curr = table;
    FunctionTable * currFunc = NULL;
    FunctionTable * TableOfFunctions = new FunctionTable();
    const char * currFuncName; // currentFunction being called
    int CallOrder = 0;
    extern int yylineno;
    const char * switched_var_type;
    bool print = true;
    int indentation = 0;
    QUAD * quadruples = new QUAD();
    char * currLabel;
    bool funcScope = false;
    bool PARM = false;
    const char * fileName = "quadruples.txt";
    
    
%}




%union {       
                   
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

};

%define parse.lac full
%define parse.error custom 
%define parse.trace


%token<gval> TYPE_INT 
%token TYPE_FLOAT
%token TYPE_DOUBLE
%token TYPE_STRING
%token TYPE_CHAR
%token TYPE_BOOL
%token <gval> VARIABLE
%token FOR
%token BREAK
%token CONTINUE
%token WHILE
%token DO
%token IF
%token DEFAULT
%token ELSE
%token VOID
%token CASE
%token SWITCH
%token <Ival> T_BOOL
%token <Ival> F_BOOL
%token <Ival> INTEGER
%token <Ival> FLOAT
%token <Ival> DOUBLE
%token <Ival> CHAR
%token RETURN

%token <Ival> STRING
%type <gval> rval
%type <gval> type
%type <gval> var_type
%type <gval> expr
%type <gval> ret
%type <gval> func_type
%type <gval> cond
%type <gval> INT_OR_CHAR






%right EQUAL
%left PLUS MINUS OR AND
%left GT LT GTE LTE
%left EQUEQU NOTEQU
%nonassoc MINUSMINUS PLUSPLUS
%left MULT DIV
%left NEG
%right POW
%token ELSIF




%start stmnt_list



%%


stmnt:   assignment ';'
        | expr ';'
        | declaration 
        | var_type EQUAL VARIABLE { currFuncName = $3.name; TableOfFunctions->CheckFunctionReturn($1.name, $1.type, $3.name, yylineno, &print, curr); } '(' call_list { quadruples->print_call_function(fileName, TableOfFunctions, $3.name, indentation, $1.name); } ')' ';' {CallOrder = 0;}
        | VARIABLE { currFuncName = $1.name; }  '(' call_list { quadruples->print_call_function(fileName, TableOfFunctions, $1.name, indentation, ""); }')' ';' {CallOrder = 0;}
        | VARIABLE EQUAL VARIABLE {currFuncName = $3.name; char * type = strdup(curr->getTypebyName($1.name).c_str()); TableOfFunctions->CheckFunctionReturn($1.name, type, $3.name, yylineno, &print, curr); }  '(' call_list { quadruples->print_call_function(fileName, TableOfFunctions, $3.name, indentation, $1.name); }')' ';' {CallOrder = 0;}
        | FOR '(' { quadruples->addLOOPExit(); curr = curr->newTable(); } assignment { quadruples->print_for_label(fileName, indentation); indentation+=5; }  ';' cond {quadruples->printJMP(fileName, "nz", $7.REGISTER, indentation);} ';' post_loop ')' '{'  stmnt_list { indentation-= 5; curr = curr->getParent(); quadruples->printExitLOOP(fileName, indentation); } '}'  { quadruples->remove_FOR_LABEL(); }
        | BREAK ';' { quadruples->printBREAK(fileName, indentation); }
        | CONTINUE ';' { quadruples->printContinue(fileName, indentation); }
        | WHILE { quadruples->addLOOPExit(); quadruples->print_for_label(fileName, indentation); indentation+=5; curr = curr->newTable(); }'(' cond ')' '{' { curr = curr->newTable(); } stmnt_list {quadruples->printJMP(fileName, "nz", $4.REGISTER, indentation);} '}'  { indentation-=5; curr = curr->getParent(); quadruples->printExitLOOP(fileName, indentation); } { quadruples->remove_FOR_LABEL(); }
        | DO { quadruples->addLOOPExit(); curr = curr->newTable(); quadruples->print_for_label(fileName, indentation); indentation+=5; }'{' stmnt_list '}' WHILE {curr = curr->getParent();} '(' cond ')' { quadruples->printJMP(fileName, "nz", $9.REGISTER, indentation); }';' { indentation-=5; quadruples->printExitLOOP(fileName, indentation); quadruples->remove_FOR_LABEL(); }
        | '{' {curr = curr->newTable(); } stmnt_list {curr = curr->getParent();} '}'
        | IF '(' cond  { quadruples->addIFLabels(fileName, indentation, $3.REGISTER); }')' '{' { curr = curr->newTable(); indentation+=5; } stmnt_list { curr = curr->getParent(); indentation-=5;  } '}' ef { quadruples->PRE_ELSE(fileName, indentation); } else { quadruples->POST_ELSE(fileName, indentation); }
        | func_type { funcScope = true; quadruples->print_label(fileName, indentation, $1.name); indentation+=5;  } '(' { currFunc = new FunctionTable(); currFunc = currFunc->newFuncTable($1.name, curr); curr = currFunc; TableOfFunctions->addFunction(currFunc, $1.type); PARM = true; } parm_list { PARM  = false; }')' '{' stmnt_list ret {
                                                                                          if (!strcmp($10.type, "VOID")){
                                                                                            
                                                                                                if (strcmp($1.type, "VOID") && print){
                                                                                                    print = false;
                                                                                                    printf("%s" "%d" "%s", "error at line: ", yylineno, ", return-statement with no value");
                                                                                                    printf("\n");
                                                                                                  }
                                                                                                
                                                                                                }
                                                                                            
                                                                                          else{
                                                                                            if (!strcmp($10.type, "NONE")){ //No return

                                                                                              if (strcmp($1.type, "VOID")){

                                                                                                printf("%s" "%d" "%s", "Warning at ", yylineno, ": Function has no return");
                                                                                                printf("\n");
                                                                                              }

                                                                                            }
                                                                                          
                                                                                          }
                                                                                          if (strcmp($10.type, "NONE")){
                                                                                            if (strcmp($1.type, $10.type) && print){
                                                                                                print = false;
                                                                                                printf("%s" "%d" "%s" "%s" "%s" "%s", "Error at line: ", yylineno, ": returning ", $10.type, " to ", $1.type);
                                                                                                printf("\n");
                                                                                              }
                                                                                          }
                                                                                          curr = curr->getParent();  funcScope = false;
                                                                                          } 
                                                                                          
                                                                                         
          '}' { indentation-=5;  quadruples->print_return(fileName, indentation, $10.value); }
        | SWITCH '(' VARIABLE       { quadruples->printSwitchLabel(fileName, indentation, $3.name); quadruples->addSwitchExit(); curr->checkCaseType($3.name, yylineno, &print); curr->checkTable($3.name, yylineno, &print); curr->checkInit($3.name, &print, yylineno, funcScope);} 
        ')' '{' { curr = curr->newTable(); indentation+=5; } case_stmnt case_def { curr = curr->getParent(); indentation-=5; quadruples->printExitLOOP(fileName, indentation); }'}'
        | error ';'
        | error '}';
        
      




ret: RETURN rval ';' { $$.type = $2.type; $$.value = $2.value;  }  
  | RETURN ';' {$$.type = "VOID"; $$.value = "";}
  | {$$.type = "NONE"; $$.value = "";} ;

else:  ELSE '{' { curr = curr->newTable();  } 
        { indentation+=5; } stmnt_list  { indentation-=5; }{curr = curr->getParent(); } '}' | ;


case_stmnt:  case_stmnt CASE INT_OR_CHAR { char * REG = strdup(quadruples->print_CASE_Cond_Operation(fileName, $3.REGISTER, indentation, "EQEQ").c_str()); quadruples->printPRECASE(fileName, REG, indentation); } ':' stmnt_list  { quadruples->printPOSTCASE(fileName, indentation); }
            | ; 

INT_OR_CHAR:  INTEGER {$$.type = "int"; $$.REGISTER = $1.value; }
            | CHAR {$$.type = "char"; $$.REGISTER = $1.value; };
        
type:  TYPE_INT {$$.type = "int";}
      | TYPE_BOOL{$$.type = "bool";} 
      | TYPE_FLOAT {$$.type = "float";} 
      | TYPE_DOUBLE {$$.type = "double";} 
      | TYPE_STRING {$$.type = "string";} 
      | TYPE_CHAR {$$.type = "char";};




case_def: DEFAULT ':' stmnt_list 
          | ;


/* x -> intermideate rule for function implementation */
parm_list: x | ;
x: var_type { currFunc->addparm($1.type); } ',' x 
| var_type { currFunc->addparm($1.type); } ;

/* y -> intermideate rule for function call to have zero parmeters */
call_list: y|;
y: rval {
  const char* type = $1.type;
  quadruples->print_call_parm(fileName, $1.name, indentation);
  TableOfFunctions->validateCallParm(currFuncName, type, CallOrder, yylineno, &print);
  CallOrder+=1;
  }',' y| rval {const char* type = $1.type;
  quadruples->print_call_parm(fileName, $1.name, indentation);
  TableOfFunctions->validateCallParm(currFuncName, type, CallOrder, yylineno, &print);
  CallOrder+=1;
  } ;


rval:   INTEGER{$$.type = "int"; $$.value = $1.value; $$.name = $1.value; $$.REGISTER = $1.value;}
      | STRING {$$.type = "string"; $$.value = $1.value; $$.name = $1.value;  $$.REGISTER = $1.value; }
      | F_BOOL {$$.type = "bool"; $$.value = $1.value; $$.name = $1.value; $$.REGISTER = "false"; }
      | T_BOOL{$$.type = "bool"; $$.value = $1.value; $$.name = $1.value; $$.REGISTER = "true"; }
      | FLOAT {$$.type = "float"; $$.value = $1.value; $$.name = $1.value; $$.REGISTER = $1.value; }
      | DOUBLE {$$.type = "double"; $$.value = $1.value; $$.name = $1.value; $$.REGISTER = $1.value; }
      | CHAR {$$.type = "char"; $$.value = $1.value; $$.name = $1.value; $$.REGISTER = $1.value; }
      | VARIABLE{

        char * type = strdup(curr->checkDef($1.name, yylineno, &print).c_str());
        curr->checkInit($1.name, &print, yylineno, funcScope);
        $$.name = $1.name;
        $$.type = type;
        $$.value = $1.name;
        $$.REGISTER = $1.name;
       
        };

expr: expr PLUS expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "Adding"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "PLUS").c_str());}
      |expr MINUS expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "Minusing"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "MINUS").c_str()); }
      |expr MULT expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "Multplying"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "MULTPLY").c_str()); }
      |expr DIV expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "Dividing"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "DIVIDE").c_str()); }    
      |expr POW expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "Powering"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "POWER").c_str()); }
      |expr AND expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "Anding"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "AND").c_str()); }      
      |expr OR expr  {curr->checkOperation($1.type, $3.type, yylineno, &print, "Oring"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "OR").c_str()); }    
      |expr EQUEQU expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "EQUATING"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "EQEQ").c_str()); } 
      |expr NOTEQU expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "NOT EQUATING"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "NOTEQ").c_str()); }
      |expr PLUSPLUS {curr->checkSingleOperation ($1.type, yylineno, &print, "PLUS PLUS"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printSingleOperation(fileName, $1.REGISTER, indentation, "PLUSPLUS").c_str()); }
      |expr MINUSMINUS {curr->checkSingleOperation ($1.type, yylineno, &print, "MINUS MINUS"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printSingleOperation(fileName, $1.REGISTER, indentation, "MINUSMINUS").c_str());} 
      |expr GT expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "GREATER_THAN"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "GT").c_str()); }     
      |expr GTE expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "GREATER_THAN_EQUAL"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "GTE").c_str()); } 
      |expr LT expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "LESS_THAN"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "LT").c_str()); }    
      |expr LTE expr {curr->checkOperation($1.type, $3.type, yylineno, &print, "LESS_THAN_EQUAL"); $$.type = $1.type; $$.REGISTER = strdup(quadruples->printOperation(fileName, $1.REGISTER, $3.REGISTER, indentation, "LTE").c_str()); }   
      |MINUS expr %prec NEG {curr->checkSingleOperation ($2.type, yylineno, &print, "NEGATIVE"); $$.type = $2.type; $$.REGISTER = strdup(quadruples->printSingleOperation(fileName, $2.REGISTER, indentation, "NEG").c_str());}
      |'(' expr ')' {$$.type = $2.type; $$.name = $2.name; $$.REGISTER = $2.REGISTER; }|
      rval{ $$.type = strdup($1.type); $$.value = $1.value; $$.REGISTER = $1.REGISTER; };
      




assignment: var_type EQUAL expr   { curr->initSymbol($1.name, $3.type, yylineno, &print); quadruples->print_assign_Quadruples(fileName, $3.REGISTER, $1.name, indentation, curr);}
            |VARIABLE EQUAL expr  {
                                  
                                    curr->checkDef($1.name, yylineno, &print);
                                    curr->initSymbol($1.name, $3.type, yylineno, &print);
                                    quadruples->print_assign_Quadruples(fileName, $3.REGISTER, $1.name, indentation, curr);
                                    
                          
                                  };

ef: ef ELSIF '('  cond  { quadruples->addElseIFLabels(fileName, indentation, $4.REGISTER); } ')' '{' { curr = curr->newTable(); indentation+=5; } 
          stmnt_list { curr = curr->getParent(); } '}' { indentation-=5; }|
    ;


var_type: type VARIABLE {

sym * s = new sym($1.type, $2.name, false, "");
bool added = curr->addSymbol(*s);
quadruples->print_var_type(fileName, indentation, $1.type, $2.name, PARM);



if (!added && print){
  print = false;
  printf("%s" "%d" "%s" "%s", "Error at ", yylineno, ": Redeclaration variable: ", $2.name);
  printf("\n");
}

$$.type = $1.type;
$$.name = $2.name;



}
                                                    
func_type: type VARIABLE {$$.type = $1.type; $$.name = $2.name;}| VOID VARIABLE {$$.type = "VOID"; $$.name = $2.name;};

declaration: var_type ';' ;


cond:   cond EQUEQU cond { curr->checkOperation($1.type, $3.type, yylineno, &print, "EQUEQU"); $$.REGISTER = strdup(quadruples->print_Cond_Operation(fileName, $1.REGISTER, $3.REGISTER, indentation, "EQEQ").c_str()); }
      | cond NOTEQU cond {curr->checkOperation($1.type, $3.type, yylineno, &print, "NOTEQU"); $$.REGISTER = strdup(quadruples->print_Cond_Operation(fileName, $1.REGISTER, $3.REGISTER, indentation, "NOTEQ").c_str()); }
      | cond LTE cond {curr->checkOperation($1.type, $3.type, yylineno, &print, "LTE"); $$.REGISTER = strdup(quadruples->print_Cond_Operation(fileName, $1.REGISTER, $3.REGISTER, indentation, "LTE").c_str());}
      | cond GTE cond {curr->checkOperation($1.type, $3.type, yylineno, &print, "GTE"); $$.REGISTER = strdup(quadruples->print_Cond_Operation(fileName, $1.REGISTER, $3.REGISTER, indentation, "GTE").c_str());}
      | cond LT cond {curr->checkOperation($1.type, $3.type, yylineno, &print, "LT"); $$.REGISTER = strdup(quadruples->print_Cond_Operation(fileName, $1.REGISTER, $3.REGISTER, indentation, "LT").c_str());}
      | cond AND cond {curr->checkOperation($1.type, $3.type, yylineno, &print, "AND"); $$.REGISTER = strdup(quadruples->print_Cond_Operation(fileName, $1.REGISTER, $3.REGISTER, indentation, "AND").c_str());}
      | cond OR cond {curr->checkOperation($1.type, $3.type, yylineno, &print, "OR"); $$.REGISTER = strdup(quadruples->print_Cond_Operation(fileName, $1.REGISTER, $3.REGISTER, indentation, "OR").c_str());}
      | cond GT cond {curr->checkOperation($1.type, $3.type, yylineno, &print, "OR"); $$.REGISTER = strdup(quadruples->print_Cond_Operation(fileName, $1.REGISTER, $3.REGISTER, indentation, "GT").c_str());}
      | F_BOOL {$$.type = "bool"; $$.REGISTER = "false";}
      | T_BOOL {$$.type = "bool"; $$.REGISTER = "true";}
      | VARIABLE {curr->checkTable($1.name, yylineno, &print); curr->checkInit($1.name, &print, yylineno, funcScope); $$.type = strdup(curr->getTypebyName($1.name).c_str()); $$.REGISTER = $1.name;}
      | VARIABLE {currFuncName = $1.name; } '(' call_list ')' {CallOrder = 0; $$.REGISTER = $1.name;}
      | INTEGER { $$.type = "int"; $$.REGISTER = $1.value; };
       

post_loop:  expr PLUSPLUS {quadruples->printPostLoop(fileName, $1.REGISTER, "PLUS", indentation);}
          | expr MINUSMINUS {quadruples->printPostLoop(fileName, $1.REGISTER, "MINUS", indentation);};
          


stmnt_list: stmnt_list stmnt | ; 











%%




static int
yyreport_syntax_error (const yypcontext_t *ctx)
{
  if(!print)
    return 0;
  print = false;
  int res = 0;
  fprintf(stderr, "%d", yylineno);
  fprintf (stderr, ": syntax error");
  
  // Report the tokens expected at this point.
  {
    enum { TOKENMAX = 5 };
    yysymbol_kind_t expected[TOKENMAX];
    int n = yypcontext_expected_tokens (ctx, expected, TOKENMAX);
    if (n < 0)
      // Forward errors to yyparse.
      res = n;
    else
      for (int i = 0; i < n; ++i)
        fprintf (stderr, "%s %s",
                 i == 0 ? ": expected" : " or", yysymbol_name (expected[i]));
  }
  // Report the unexpected token.
  {
    yysymbol_kind_t lookahead = yypcontext_token (ctx);
    if (lookahead != YYSYMBOL_YYEMPTY)
      fprintf (stderr, " before %s", yysymbol_name (lookahead));
  }
  fprintf (stderr, "\n");
  return res;
}

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}



char *string_to_upper(const char *str) {
    // Calculate the length of the input string
    size_t len = strlen(str);

    // Allocate memory for a new string to hold the uppercase version
    char *upper_str = (char *)malloc(len + 1); // +1 for null terminator
    if (upper_str == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // Copy the input string to the new string and convert to uppercase
    for (size_t i = 0; i < len; i++) {
        upper_str[i] = toupper(str[i]);
    }
    upper_str[len] = '\0'; // Add null terminator at the end

    return upper_str;
}

int main(void) {
    //yydebug = 1;
    remove("quadruples.txt");
    remove("output.txt");
    yyparse();
    if(!print)
      remove("quadruples.txt");
    
    int level = 0;
    curr->printTable(level);
    printf("%d", quadruples->getLevel());
    return 0;
}