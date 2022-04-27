#include <iostream>

int main()
{
    double a= 10;
    double b =20;

    // auto func =[a,b](){
    //     std::cout <<a+b<<std::endl;

    // };
    // func();

    // auto func =[a](){
    //     std::cout << a<<" " << &a<<std::endl;

    // };
    // for(size_t i = 0 ; i < 5 ;i++){
    //     std::cout << a<<" " << &a<<std::endl;
    //     func();
    //     ++a;
    // }

    auto func =[&a](){
        std::cout << a<<" " << &a<<std::endl;

    };
    for(size_t i = 0 ; i < 5 ;i++){
        std::cout << a<<" " << &a<<std::endl;
        func();
        ++a;
    }
    
    return 0;
}