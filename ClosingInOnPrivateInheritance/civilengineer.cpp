#include "Person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer :: CivilEngineer(){

}
std::ostream& operator<<(std::ostream& out,const CivilEngineer& operand)
{
    out << "CivilEngineer [Full name : ";
    return out;
}

CivilEngineer::~CivilEngineer(){
    
}