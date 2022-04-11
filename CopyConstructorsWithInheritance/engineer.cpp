#include "Person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer(){
    std::cout << "Default constructor for Engineer called ...."<<std::endl;
}
Engineer::~Engineer(){}

Engineer::Engineer(std::string_view fullname, int age , const std::string address,int contract_count_param)
:Person(fullname,age,address),contract_count(contract_count_param)
{
     std::cout << "Custom constructor for Engineer called ...."<<std::endl;
}


Engineer::Engineer(const Engineer& source)
:Person(source),contract_count(source.contract_count)
{
    std::cout <<"Custom copy constructor for Engineer called..."<<std::endl;
}
std::ostream& operator<<(std::ostream& out , const Engineer& operand)
{
    out << "Engineer [Full name : "<< operand.get_full_name() << ", Age: "<< 
                operand.get_age() << " , sAddress : "<< operand.get_address() << 
                ",practice certificate id : " << operand.contract_count << " ] ";
                

    return out;
}