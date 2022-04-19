#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
#include <memory>

int main()
{
    
    Circle circle1(3.4,"circle1");
    Oval oval1(13.2,23.4, "Oval1");
    Circle circle2( 4.2, "circle2");
    Oval oval2(32.4,23.4, "oval2");
    Circle circle3(3,"circle3");
    Oval oval3(4,5, "oval3");

    circle1.draw();
    //circle1.draw(44);    overloading and overriding doesn't work 

    
    Oval * shape_ptr = & circle1;
    shape_ptr->draw(45,"Red");

    

    return 0;
}