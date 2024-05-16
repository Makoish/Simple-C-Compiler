#include <iostream>
using namespace std;
#include <cctype> 
#include <fstream>
#include "../src/FunctionTable.h"
#include "../src/SymbolTable.h"
#include <stack>




class QUAD{
    private:
        int LAST_REG_NUM;
        int LAST_LABEL_NUM;
        int LAST_OUT;
        stack<int> else_labels;
        int level;
        stack<string> LOOP_LABELS;
        stack<string> EXIT_LOOP_LABELS;
        string case_name;
        stack<string> STACK_OF_CASES;
        
        
        

    public:
        QUAD();
        void print_var_type(string fileName, int indentationLevel, string type, string var_name, bool parm);
        void print_label(string fileName, int indentationLevel, string label_name);
        void print_return(string fileName, int indentationLevel, string label_name);
        void print_call_function(string fileName, FunctionTable*global_functions, string funcName, int indentationLevel, string LHS);
        void print_call_parm(string fileName, string PARM, int indentationLevel);
        void print_for_label(string fileName, int indentationLevel);
        void print_assign_Quadruples(string fileName, string REGISTER, string LHS, int identationLevel, SymbolTable*curr);
        string printOperation(string fileName, string REG1, string REG2, int indentationLevel, string OPERATION);
        string printSingleOperation(string fileName, string REG1, int indentationLevel, string OPERATION);
        void printPostLoop(string fileName, string REG, string OPERATION, int indentationLevel);
        string print_Cond_Operation(string fileName, string REG1, string REG2, int Indentation, string OPERATION);
        void printJMP(string fileName, string jmp_type, string REGISTER, int Indentation);
        int addIFLabels(string fileName, int Indentation, string REGISTER);
        int getLevel();
        void PRE_ELSE(string fileName, int Indentation);
        void POST_ELSE(string fileName, int Indentation);
        int addElseIFLabels(string fileName, int Indentation, string REGISTER);
        void printContinue(string fileName, int indentation);
        void printExitLOOP(string fileName, int Indentation);
        void addLOOPExit();
        void printBREAK(string fileName, int Indentation);
        void remove_FOR_LABEL();
        void addSwitchExit();
        void printSwitchLabel(string fileName, int Indentation, string Name);
        string print_CASE_Cond_Operation(string fileName, string REGISTER, int indentation, string OPERATION);
        void printPRECASE(string fileName, string REG, int indentation); 
        void printPOSTCASE(string fileName, int indentation);

    

};