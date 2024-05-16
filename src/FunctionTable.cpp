#include "FunctionTable.h"



FunctionTable::FunctionTable(){

}



FunctionTable::FunctionTable(string name){

    this->setName(name);

}

FunctionTable* FunctionTable::newFuncTable(string name, SymbolTable* parent){

    FunctionTable * table = new FunctionTable();
    table->setName(name);
    table->addParent(parent);
    return table;

}


void FunctionTable::addparm(string type){
    parm_list_types.push_back(type);
}


vector<string> FunctionTable::get_parm_list_types(){
    return parm_list_types;
}

void FunctionTable::addFunction(FunctionTable* table, string type){
    table->setFunctionType(type);
    FuncTables.push_back(table);
}


void FunctionTable::validateCallParm(string Name, string type, int CallOrder, int lineno, bool * print){
    vector<string> parm_list_types;
    bool func_exist = false;
    for (int i = 0; i<FuncTables.size(); i++){
        if (FuncTables[i]->getName() == Name){
                func_exist = true;
                parm_list_types = FuncTables[i]->get_parm_list_types();
                break;
            }
    }

    if (!func_exist){
        if (*print){
        *print = false;
        cout << "Error at line number: " << lineno << " Function " << Name << " Doesn't exist" << endl;
        }
        return;

    }
    
    if ((parm_list_types[CallOrder] != type) && *print){
        *print = false;
        cout << "Error at line number: " << lineno << " unmatched call function" << endl;
    }
    
    

  
}


vector<FunctionTable*> FunctionTable::getFuncTables(){
    return FuncTables;
}


void FunctionTable::setFunctionType(string type){
    this->FunctionType = type;
}


string FunctionTable::getType(){
    return FunctionType;
}




void FunctionTable::CheckFunctionReturn(string var_name, string var_type, string functionName, int yylineno, bool * print, SymbolTable*curr){
    string type;
    for (int i = 0; i < FuncTables.size(); i++){
        if (functionName == FuncTables[i]->getName())
        {
            type = FuncTables[i]->getType();
            break;
        }
    }

    if ( var_type != type && *print ){
        *print = false;
        cout << "Error at line " << yylineno << ": " << "function return " << type  << " variable type: " << var_type << endl; 
    }
   
    curr->initSymbol(var_name, type, yylineno, print);
    

}