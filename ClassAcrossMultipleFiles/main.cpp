#include <iostream>
#include "constants.h"
#include "cylinder.h"


int main()
{
    Cylinder cylinder1(3,4);
    std::cout << cylinder1.volume()<<std::endl;
    Cylinder cylinder2;
    std::cout << cylinder2.volume()<<std::endl;
    std::cout << cylinder2.get_height() << " "<<cylinder2.get_base_radius()<<std::endl;
    cylinder2.set_base_radius(5);
    cylinder2.set_height(5);
    std::cout << cylinder2.get_height() << " "<<cylinder2.get_base_radius()<<std::endl;
    std::cout << cylinder2.volume()<<std::endl;

    return 0;
}