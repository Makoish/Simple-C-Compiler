#include "QUAD.h"



QUAD::QUAD(){

    LAST_REG_NUM = 0;
    LAST_LABEL_NUM = 0;
    LAST_OUT = 0;
    level = 0;
    case_name = "";


}

void QUAD::print_var_type(string fileName, int Indentation, string type, string var_name, bool PARM=false){
    
            ofstream outputFile(fileName, ios::app);
            outputFile << string(Indentation, ' ');
            if (PARM)
                outputFile <<"PARM ";
            if (type == "int")
                outputFile << "INTEGER " << var_name << ";" << endl;
            else{
                for (char &c : type) {
                    c = std::toupper(c); 
                }
                outputFile << type << " " << var_name << ";" << endl;
    
            }

            outputFile.close();
        
}



void QUAD::print_label(string fileName, int Indentation, string label_name ){

    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << "LABEL: " << label_name << endl;
    outputFile.close();


}

void QUAD::print_return(string fileName, int Indentation, string RET){
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << "RETURN " << RET << endl;
    outputFile << "\n\n\n\n";
    outputFile.close();

    
}


void QUAD::print_call_function(string fileName, FunctionTable*global_functions_ptr, string funcName, int Indentation, string LHS){
    vector<FunctionTable*> global_functions = global_functions_ptr->getFuncTables();
    vector<string> types;
    int length = 0;
    for (int i = 0; i<global_functions.size(); i++){
        if (global_functions[i]->getName() == funcName)
            types = global_functions[i]->get_parm_list_types();
    }

    length = types.size();

    ofstream outputFile(fileName, ios::app);
    if (LHS == "")
        outputFile << string(Indentation, ' ') << "call " << funcName << ", " << length << endl;
    else
        outputFile << string(Indentation, ' ') << "call " << funcName << ", " << length << ", " << LHS << endl;
        
    


    outputFile.close();

}


void QUAD::print_call_parm(string fileName, string PARM, int Indentation){

    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << "PARM " << PARM << endl;
    outputFile.close();


}



void QUAD::print_for_label(string fileName, int Indentation){
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << "LABEL L" <<  LAST_LABEL_NUM << ':' << endl;
    outputFile.close();
    LAST_LABEL_NUM+=1;
    LOOP_LABELS.push("L" + to_string(LAST_LABEL_NUM-1));

}


void QUAD::print_assign_Quadruples(string fileName, string REGISTER, string LHS, int Indentation, SymbolTable*curr){
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << "SET " << REGISTER << ", " <<  LHS << endl;
    curr->get_variable_to_reg().push_back(make_pair(LHS, REGISTER));
    outputFile.close();
    

}

string QUAD::printOperation(string fileName, string REG1, string REG2, int Indentation, string OPERATION){
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << OPERATION << " " <<  REG1 << ", " <<  REG2 << ", R" << LAST_REG_NUM << endl;
    outputFile.close();
    LAST_REG_NUM+=1;
    return "R" + to_string(LAST_REG_NUM-1);

}


string QUAD::printSingleOperation(string fileName, string REG1, int Indentation, string OPERATION){
    ofstream outputFile(fileName, ios::app);

    outputFile << string(Indentation, ' ') << OPERATION <<" " <<  REG1 << ", R"<< LAST_REG_NUM  << endl;
    outputFile.close();
    LAST_REG_NUM+=1;
    return "R" + to_string(LAST_REG_NUM-1);

}
void QUAD::printPostLoop(string fileName, string REG, string OPERATION, int Indentation){
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << OPERATION << " " <<  REG << ", "  << "1, " <<  REG  << endl;
    outputFile.close();
}


string QUAD::print_Cond_Operation(string fileName, string REG1, string REG2, int Indentation, string OPERATION){
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << OPERATION << " " <<  REG1 << ", " << REG2 << ", R" << LAST_REG_NUM << endl;
    outputFile.close();
    LAST_REG_NUM+=1;
    return "R" + to_string(LAST_REG_NUM-1);

}


void QUAD::printJMP(string fileName, string jmp_type, string REGISTER, int Indentation){
    ofstream outputFile(fileName, ios::app);
    string LABEL = LOOP_LABELS.top();
    outputFile << string(Indentation, ' ') << "JMP " <<  jmp_type << ", " << REGISTER << ", " << LABEL << endl;
    outputFile.close();
   
}


int QUAD::addIFLabels(string fileName, int Indentation, string REGISTER){

    LAST_LABEL_NUM+=1;
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << "JMP nz, " << REGISTER << ", " << "IF_LABEL_" << LAST_LABEL_NUM <<  endl;
    LAST_LABEL_NUM+=1;
    else_labels.push(LAST_LABEL_NUM);
    outputFile << string(Indentation, ' ') << "JUMP " << REGISTER << ", " << "ELSE_LABEL_" << LAST_LABEL_NUM <<  endl;
    outputFile << string(Indentation, ' ') << "IF_LABEL_" << LAST_LABEL_NUM-1 << ": "<< endl;
    outputFile.close();
    return LAST_LABEL_NUM;

}


int QUAD::addElseIFLabels(string fileName, int Indentation, string REGISTER){

    LAST_LABEL_NUM+=1;
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << "JMP nz, " << REGISTER << ", " << "IF_LABEL_" << LAST_LABEL_NUM <<  endl;
    int label = else_labels.top();
    outputFile << string(Indentation, ' ') << "JUMP " << REGISTER << ", " << "ELSE_LABEL_" << label <<  endl;
    outputFile << string(Indentation, ' ') << "IF_LABEL_" << LAST_LABEL_NUM << ": "<< endl;
    outputFile.close();
    return LAST_LABEL_NUM;

}

void QUAD::PRE_ELSE(string fileName, int Indentation){
    int LABEL = else_labels.top();
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << "Jump Done_Label_" << LABEL <<  endl;
    outputFile << string(Indentation, ' ') << "ELSE_LABEL_" << LABEL << ": " <<  endl;
    outputFile.close();
   


}

void QUAD::POST_ELSE(string fileName, int Indentation){
    int LABEL = else_labels.top();

    else_labels.pop();
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') <<  "Done_Label_" << LABEL <<": " <<  endl;
    outputFile.close();

}







int QUAD::getLevel(){
    return level;
}


void QUAD::printContinue(string fileName, int indentation){
    ofstream outputFile(fileName, ios::app);
    string LABEL = LOOP_LABELS.top();
    outputFile << string(indentation, ' ') <<  "JUMP " << LABEL <<  endl;
    outputFile.close();

}


void QUAD::printBREAK(string fileName, int Indentation){

    ofstream outputFile(fileName, ios::app);
    string LABEL = EXIT_LOOP_LABELS.top();
    outputFile << string(Indentation, ' ') <<  "JUMP " << LABEL <<  endl;
    outputFile.close();



}

void QUAD::printExitLOOP(string fileName, int Indentation){
    

    string LABEL = EXIT_LOOP_LABELS.top();
    EXIT_LOOP_LABELS.pop();
    ofstream outputFile(fileName, ios::app);
    outputFile << string(Indentation, ' ') << LABEL << endl;
    outputFile.close();
  


}

void QUAD::addLOOPExit(){
    LAST_LABEL_NUM+=1;
    EXIT_LOOP_LABELS.push("EXIT_" + to_string(LAST_LABEL_NUM));
}


void QUAD::remove_FOR_LABEL(){
    LOOP_LABELS.pop();
}

void QUAD::addSwitchExit(){
    LAST_LABEL_NUM+=1;
    EXIT_LOOP_LABELS.push("SWITCH_EXIT_" + to_string(LAST_LABEL_NUM));
}

void QUAD::printSwitchLabel(string fileName, int Indentation, string Name){

    ofstream outputFile(fileName, ios::app);
    case_name = Name;
    outputFile << string(Indentation, ' ') << "SWITCH_LABEL_" <<  LAST_LABEL_NUM << ':' << endl;
    outputFile.close();
    LAST_LABEL_NUM+=1;
    

}

string QUAD::print_CASE_Cond_Operation(string fileName, string REGISTER, int indentation, string OPERATION){
    ofstream outputFile(fileName, ios::app);
    outputFile << string(indentation, ' ') << "SET R" <<  LAST_REG_NUM << " =: " << OPERATION << " " << REGISTER << ", " << case_name << endl;
    outputFile.close();
    LAST_REG_NUM+=1;
    return "R" + to_string(LAST_REG_NUM-1);

    
}


void QUAD::printPRECASE(string fileName, string REG, int indentation){

    ofstream outputFile(fileName, ios::app);
    outputFile << string(indentation, ' ') << "JUMP nz, " <<  REG << " CASE:" <<LAST_LABEL_NUM << endl;
    outputFile << string(indentation, ' ') << "JUMP " << "OUT_CASE_" << LAST_LABEL_NUM << endl;
    STACK_OF_CASES.push( "OUT_CASE_" + to_string(LAST_LABEL_NUM));
    LAST_LABEL_NUM+=1;

}

void QUAD::printPOSTCASE(string fileName, int indentation){

    string LABEL = STACK_OF_CASES.top();
    STACK_OF_CASES.pop();
    ofstream outputFile(fileName, ios::app);
    outputFile << string(indentation, ' ') << LABEL << ":" << endl;
    

}