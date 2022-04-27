#include <iostream>
#include <string>


template <typename T>
T maximum(T a, T b)
{
    return (a>b)?a:b;
}

int main()
{
    int x=5,y=7;
    int * p1= &x;
    int * p2 = &y;
    auto result = maximum(p1,p2);
    std::cout << maximum<double> (x,y)<<std::endl;
    std::cout << maximum<double>(5,7.0)<<std::endl;
    std::string a = "Hello";
    std::string b = "World";
    std::cout << maximum(a,b)<<std::endl;

    return 0;
}