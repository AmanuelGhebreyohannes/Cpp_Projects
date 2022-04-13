#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    Shape shape1("Shape1");
    //shape1.draw();

    Oval oval1(2.0,3.4, "oval1");
    //oval1.draw();

    Circle circle1(3.3, "circle1");
    //circle1.draw();

    //Base pointers

    Shape * shape_ptr = &shape1;
    shape_ptr->draw();

    shape_ptr = & oval1;
    shape_ptr->draw();

    shape_ptr = & circle1;
    shape_ptr->draw();

    //Base references

    Shape& shape_ref = shape1;
    shape_ref.draw();

    shape_ref = oval1;
    shape_ref.draw();

    shape_ref = circle1;
    shape_ref.draw();

    

    return 0;
}