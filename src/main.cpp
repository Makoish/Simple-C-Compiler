#include "SymbolTable.h"
#include <iostream>



int main(){

    SymbolTable * table = new SymbolTable();
    SymbolTable * curr = table;

    SymbolTable * table2 = new SymbolTable();
    table2->addParent(*curr);
    curr = table2;
    
}