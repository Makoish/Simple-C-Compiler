

#ifndef FUNCTIONTABLE_H
#define FUNCTIONTABLE_H
#include "SymbolTable.h"



using namespace std;
#include <vector>

class FunctionTable: public SymbolTable {

    private:
        string FunctionName;
        vector<string>parm_list_types;
        vector<FunctionTable*> FuncTables; // table of all functions
        string FunctionType;


    public:
        FunctionTable();
        FunctionTable(string);
        FunctionTable* newFuncTable(string, SymbolTable*);
        void addparm(string);
        vector<FunctionTable*> getFuncTables();
        vector<string> get_parm_list_types();
        void addFunction(FunctionTable*, string type);
        void validateCallParm(string Name, string type, int CallOrder, int lineno, bool * print);
        void setFunctionType(string type);
        string getType();
        void CheckFunctionReturn(string var_type, string functionName, int yylineno, bool * print);


        

        
        


    

};

#endif 