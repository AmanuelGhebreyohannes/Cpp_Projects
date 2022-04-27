#include <iostream>

template <typename T> const T& maximum (const T &a,const T &b);

int main()
{
    double a=23.5,b=4.5;
    std::cout<<&a<<std::endl;
    auto result = maximum(a,b);
    std::cout<<&a<<std::endl;
    return 0;
}

template <typename T> const T &maximum (const T &a,const T &b)
{
    std::cout<<&a<<std::endl;
    return (a>b)?a:b;
}