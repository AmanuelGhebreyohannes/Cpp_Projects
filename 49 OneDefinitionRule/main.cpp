#include <iostream>
#include "person.h"

double weight ;

// double add (double a , double b);

struct Point
{
    double m_x=0;
    double m_y=0;
};

int main()
{   
//   double result = add (10,20);
//     std::cout << result <<std::endl;

//     Point p1;
//     std::cout << p1.m_x<< std::endl;

    Person p1("John Snow",35);
    p1.print_info();

    
    return 0;
}

// double add (double a, double b)
// {
//     return a+b;
// }