#include "sym.h"

sym::sym(std::string type, std::string name, bool initialized, std::string value_type){


    
    this->type = type;
    this->name = name;
    this->initialized = initialized;
    this->value_type = value_type;

}




bool sym::checktype(){
    if (initialized){
        if (value_type != type)
            return false;
    }
    return true;
}
std::string sym::getname(){
    return name;
}

std::string sym::gettype(){
    return type;
}

bool sym::getinitialized(){
    return initialized;
}


void sym::setInit(bool initialized){
    this->initialized = initialized;
}
