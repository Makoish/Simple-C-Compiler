#pragma once
#include <iostream>
#include <string>
#include "sym.h"
#include "algorithm"
#include <vector> 
#include "string"
#include <fstream>


using namespace std;






class SymbolTable
{
private:
   
    int level;
    string name;
    vector<sym> Symbols;
    SymbolTable* parentTable;
    vector<SymbolTable* > children;
    vector<pair<string, string>> variable_to_reg;
    

public:
    SymbolTable();
    SymbolTable(string);
    bool addSymbol(sym s);
    void initSymbol(string name, string value_type, int yylineno, bool *print);
    string getTypebyName(string);
    bool getinitbyName(string);
    void addParent(SymbolTable* Table);
    SymbolTable * getParent();
    vector<SymbolTable> getChildren();
    void checkTable(string name, int yylineno, bool * print);
    SymbolTable* newTable(string name = "NULL");
    void printTable(int &indentationLevel);
    void checkOperation(string first, string second, int yylineno, bool *print, string OPR);
    void checkSingleOperation(string first, int yylineno,  bool *print, string OPR);
    void checkInit(string, bool*, int);
    string checkDef(string, int, bool*);
    string getTableName();
    void setName(string);
    string getName();
    void checkCaseType(string var_name, int lineno, bool * print);
    vector<pair<string, string>> get_variable_to_reg();
    string getREGbyName(string);
    

   
    


};

