#include <iostream>
#include "rectangle.h"
#include "circle.h"

int main()
{
   //Shape * shape_ptr = new Shape(); // error since shape is abstract class

   const Shape * shape_rect = new Rectangle(10,10,"rect1");
   double surface = shape_rect->surface();
   std::cout << "dynamic type of shape_rect : "<< typeid(*shape_rect).name() << std::endl;
   std::cout << "the surface of shape rect is : "<<surface << std::endl; 

   std::cout << "-----------------"<<std::endl;
   const Shape * shape_circle = new Circle(10,"circle1");
   surface = shape_circle->surface();
   std::cout << "dynamic type of shape_circle : "<< typeid(*shape_circle).name() << std::endl;
   std::cout << "the surface of shape circle is : "<<surface << std::endl; 

    return 0;
}