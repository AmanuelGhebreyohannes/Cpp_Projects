#include <iostream>
#include "shape.h"
#include "oval.h"

int main()
{
    Shape shape1("shape1");
    std::cout << "shape count : " << Shape::m_count << std::endl;

    Shape shape2("shape2");
    std::cout << "shape count : " << Shape::m_count << std::endl;

    Shape shape3("shape3");
    std::cout << "shape count : " << Shape::m_count << std::endl;

    std::cout << "********************"<< std::endl;

    //Ovals

    Oval oval(10,12,"oval1");
    std::cout << "shape count : " << Shape::m_count << std::endl;
    std::cout << "oval count : " << Oval::m_count << std::endl;


    //shape polymorphism

    Shape* shapes[] = {&shape1, &oval};

    for (auto &a : shapes)
    {
        std::cout << "count : " << a->get_count() << std::endl;
    }
    

    

    return 0;
}