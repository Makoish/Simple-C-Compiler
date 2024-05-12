#include "SymbolTable.h"
#include <fstream>
#include <iostream> 
#include <bits/stdc++.h>
#include <typeinfo>



using namespace std;


SymbolTable::SymbolTable(){

}


SymbolTable::SymbolTable(string name){
    this->name = name;
}


string SymbolTable::getTableName(){
    return name;
}





bool is_digit(string name)
{
  
    if (!(name[0] >= 48 && name[0] <= 57)) 
        return false;
    
    return true;
}

bool SymbolTable::addSymbol(sym s){

for (int i = 0; i<Symbols.size(); i++){
    if (Symbols[i].getname() == s.getname())
        return false;
    }   
   


Symbols.push_back(s);

return true;
}



void SymbolTable::initSymbol(string name, string value_type, int yylineno, bool *print)
{   
    if (this == NULL)
    {
        if (*print){
            *print = false;
             cout << "Error at line: " << yylineno << " undefined variable " << name << endl;
        }
        return;
    }

    for (int i = 0; i<Symbols.size(); i++){
        if (Symbols[i].getname() == name){
           
            if (value_type == Symbols[i].gettype()){
                
                Symbols[i].setInit(true);
                return;
            }
            else{
                *print = false;
                cout << "Error at line: " << yylineno << " type missmatch expected: " << Symbols[i].gettype() << " got " <<  value_type << endl;
                return;
            }
        }
    }   

    return parentTable->initSymbol(name, value_type, yylineno, print);
}

void SymbolTable::addParent(SymbolTable* Parent){

    this->parentTable = Parent;
    Parent->children.push_back(this);

}



SymbolTable* SymbolTable::getParent(){
    return parentTable;
} 



void SymbolTable::checkTable(string name, int yylineno, bool * print){


    if (this == NULL && print){
        *print = false;
        cout << "Error at line: " <<  yylineno << " Undefined variable: " << name << endl;
        return;
    }

    for (int i = 0; i<Symbols.size(); i++){
        if (Symbols[i].getname() == name){
          return;
        }
    }
    
    return parentTable->checkTable(name, yylineno, print);

}


string SymbolTable::getTypebyName(string name){
    // check if name is int or float

    if (this == NULL)
        return "NONE";
    
    for (int i = 0; i<Symbols.size(); i++){
        if (Symbols[i].getname() == name){
          return Symbols[i].gettype();
        }
    }


    return parentTable->getTypebyName(name);

}



SymbolTable* SymbolTable::newTable(string name){
    SymbolTable * table = new SymbolTable();
    table->name = name;
    table->addParent(this);
    return table;

}


void  SymbolTable::printTable(int &indentationLevel){


    
    ofstream outFile("output.txt", ios::app);
    
    if (!this) return; 

   
    outFile << string(indentationLevel, ' ') << "NAME "<< string(10, ' ') << "TYPE" <<  string(10, ' ')  << "INIT" << endl;
    for (int i = 0; i<Symbols.size(); i++){
        outFile << string(indentationLevel, ' ') << Symbols[i].getname() << string(15, ' ') <<Symbols[i].gettype() << string(11, ' ')  <<Symbols[i].getinitialized() << endl;
        }


    outFile << "\n\n";
    outFile.close();



    

    for (int i = 0; i<children.size(); i++){
        children[i]->printTable(indentationLevel+=5);
        indentationLevel-=5;
    }

}


bool SymbolTable::getinitbyName(string Name)
{

    if (this == NULL)
        return false;
    
    for (int i = 0; i<Symbols.size(); i++){
        if (Symbols[i].getname() == Name){
          return Symbols[i].getinitialized();
        }
    }


    return parentTable->getinitbyName(Name);


}


void SymbolTable::checkOperation(string first, string second, int yylineno, bool *print, string OPR){

    
  
    string first_type = first;
    string second_type = second;
    
    if (first_type != second_type && *print){
    *print = false;    
    cout << "Error at line " << yylineno << " " << OPR << " " << first_type << " with "  << second_type << endl;
    }
    


}

void SymbolTable::checkSingleOperation(string first, int yylineno,  bool *print, string OPR){

  
    string first_type = first;
   

    if ((first_type != "int" && first_type != "float") && *print){
    *print = false;
    cout << "Error at line " << yylineno << " " << OPR << " expected int or float " << "got "  << first_type << endl;
    }

    


}

void SymbolTable::checkInit(string name, bool *print, int lineno){
    
    bool init = getinitbyName(name);
    if (!init && *print){
        *print = false;
        cout << "Error at line: " << lineno << " variable: " << name << " is uninitialized" << endl;
    }
}


string SymbolTable::checkDef(string name, int lineno, bool* print){
    string type = getTypebyName(name).c_str();
   
    if (type == "NONE" && *print){
        *print = false;
        cout << "Error at " << lineno << " Undefined variable " << name << endl;
    }
    return type;
}

void SymbolTable::setName(string name){
    this->name = name;
}


string SymbolTable::getName(){
    return name;
}



void SymbolTable::checkCaseType(string var_name, int lineno, bool * print){
    string var_type = getTypebyName(var_name);

    if ( var_type != "int" && var_type != "char" && *print){
        *print = false;
        cout << "Error at line: " << lineno << " switch quantity not an integer or character " << endl;

    }
}


vector<pair<string, string>> SymbolTable::get_variable_to_reg(){
    return variable_to_reg;
}

string SymbolTable::getREGbyName(string var_name){

    if (this == NULL)
        return "NONE";
    
    for (int i = 0; i<variable_to_reg.size(); i++){
        if (variable_to_reg[i].first == var_name){
          return variable_to_reg[i].second;
        }
    }


    return parentTable->getREGbyName(var_name);



}