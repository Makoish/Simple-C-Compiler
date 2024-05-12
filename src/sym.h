#include <iostream>


#define C_NULL 0


class sym{
    private:
    std::string type;
    std::string value_type;
    std::string name;
    bool initialized;
    



    public:
    sym(std::string type, std::string name, bool initialized, std::string value_type);
    std::string getname();
    std::string gettype();
    bool getinitialized();
    bool checktype();
    void setInit(bool);

    

};