#include <iostream>
#include "constants.h"
#include "cylinder.h"


int main()
{
    Cylinder cylinder1(3,4);
    std::cout << cylinder1.volume()<<std::endl;
    
    //managing a stack object through pointer

    Cylinder *p_cylinder1 = &cylinder1;
    std::cout << (*p_cylinder1).volume()<<std::endl;
    std::cout << p_cylinder1->volume()<<std::endl;

    //create a cylinder heap object through new operator
    Cylinder* p_cylinder12 = new Cylinder(10,20);
    std::cout << p_cylinder12->volume()<<std::endl;
    delete p_cylinder12;

    return 0;
}