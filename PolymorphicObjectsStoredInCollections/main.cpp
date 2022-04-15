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

    std::cout << " sizeof(circle1) : "<< sizeof(circle1) << std::endl;

    Shape shape1[] = {circle1,oval1,circle2,oval2,circle3, oval3};

    for (Shape & s : shape1)
    {
        std::cout << " sizeof(s) : "<< sizeof(s) << std::endl;

        s.draw();
    }

    //can not have array of references

    // raw pointers
    //Shapes stored in collections
    // Shape* shape_collection[]={ &circle1, &oval1 , &circle2, &oval2, &circle3, &oval3};

    // for (Shape* ptr: shape_collection)
    // {
    //     std::cout << " sizeof(*ptr)) : "<< sizeof(*ptr) << std::endl;
    //     ptr->draw();
    // }
        

    //smart pointers

    // std::shared_ptr<Shape> shapes4[]={std::make_shared<Circle>(12.2, "Circle4"),
    //                                     std::make_shared<Oval>(12,34,"Oval4")};

    // for (auto& s: shapes4)
    //     s->draw();

    

    

    return 0;
}