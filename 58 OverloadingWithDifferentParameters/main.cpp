#include <iostream>
#include <string>

int max(int a,int b)
{
    std::cout << "int overload called"<<std::endl;
    return (a>b)?a:b;
}

int max(double a, double b)
{
    std::cout << "double overload called"<<std::endl;
    return (a>b)?a:b;
}

double max(int a, double b)
{
    std::cout <<"custom overload called "<<std::endl;
    return (a>b)?a:b;
}

double max(int a, double b,int c)
{
    std::cout <<"custom 2 overload called "<<std::endl;
    return a;
}

std::string_view max(std::string_view a, std::string_view b)
{
     std::cout <<"string view overload called"<<std::endl;
     return (a>b)?a:b;
}
int main()
{
    int x=9,y=12;
    double a=5.4,b=6.5;
    auto result= max(x,y);
    result= max(a,b);
    result = max(x,a);
    result = max(x,a,b);
    max("hello","hi");
    

    return 0;
}
