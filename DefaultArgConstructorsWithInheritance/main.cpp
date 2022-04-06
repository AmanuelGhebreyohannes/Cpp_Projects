#include <iostream>
#include "engineer.h"
#include "civilengineer.h"
#include "Person.h"
int main()
{
    

    //Engineer engineer1;
    
    Person person1("John Snow",27, "Winterfell Cold 33St#75");
    std::cout << "person1 : "<<person1<<std::endl;

    std::cout << "--------------------------------"<<std::endl;
    Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12);
    std::cout << "eng1 : "<<eng1 <<std::endl;

    std::cout << "--------------------------------"<<std::endl;
    CivilEngineer ce1("A B",41,"abcd abcd ", 33, "road construction");
    std::cout << "ce1 : "<<ce1 <<std::endl;
    

    std::cout <<"Done" << std::endl;


    return 0;
}