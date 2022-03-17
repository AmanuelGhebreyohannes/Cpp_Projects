#include <iostream>
class Dog{
    std::string m_name;
};

struct Cat 
{
    std::string m_name;
};

struct Point
{
    double x;
    double y;
};
void print_point(const Point& point)
{
    std::cout << point.x << " , "<<point.y<<std::endl;
}
int main()
{
    Dog dog1;
    Cat cat1;

    //dog1.m_name = "abc";
    cat1.m_name="Junny";

    //std::cout << dog1.m_name <<std::endl;
    std::cout << cat1.m_name << std::endl;

    Point point1;
    point1.x =10;
    point1.y = 2;
    print_point(point1);

}