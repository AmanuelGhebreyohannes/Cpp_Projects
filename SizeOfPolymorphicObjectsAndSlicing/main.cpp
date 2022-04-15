#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    
    //Comapre object sizes

    std::cout <<  "sizeof(Shape) : " << sizeof(Shape) << std::endl;
    std::cout << "sizeof(Oval) : " << sizeof(Oval) << std::endl;
    std::cout << "sizeof(Circle) : " << sizeof(Circle) << std::endl;

    //Slicing

    Circle cirlce1(3.3, "Circle1");
    std::cout << "sizeof(Circle1) : " << sizeof(cirlce1) << std::endl;
    Shape shape = cirlce1;
    std::cout << "sizeof(shape) : " << sizeof(shape) << std::endl;
    shape.draw();
    

    

    return 0;
}