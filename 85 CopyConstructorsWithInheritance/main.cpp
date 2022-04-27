#include <iostream>
#include "engineer.h"
#include "civilengineer.h"
int main()
{
    

    //Engineer engineer1;
    
    Engineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75",12);
    Engineer eng2(eng1);

    std::cout <<"eng2"<<eng2 << std::endl;

    std::cout <<"Done" << std::endl;

    CivilEngineer ce1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75",12,"Road Design");
    CivilEngineer ce2(ce1);

    std::cout <<"CE2 "<< ce2<<std::endl;

    return 0;
}