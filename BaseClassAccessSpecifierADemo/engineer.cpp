#include "Person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer(){}
Engineer::~Engineer(){}

std::ostream& operator<<(std::ostream& out , const Engineer& operand)
{
    out << "Nurse [Full name : "<< operand.get_full_name() << ", Age: "<< 
                operand.get_age() << " , Address : "<< operand.get_address() << 
                ",practice certificate id : " << operand.contract_count << " ] ";
                

    return out;
}