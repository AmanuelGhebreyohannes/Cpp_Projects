#include <iostream>

int main()
{
    double a= 10;
    double b =20;
    int c=4;

    // auto func =[=](){
    //     std::cout << a<<" " << &a<<std::endl;

    // };
    // for(size_t i = 0 ; i < 5 ;i++){
    //     std::cout << a<<" " << &a<<std::endl;
    //     func();
    //     ++a;
    // }
    auto func =[&](){
        std::cout << a<<" " << &a<<std::endl;

    };
    for(size_t i = 0 ; i < 5 ;i++){
        std::cout << a<<" " << &a<<std::endl;
        func();
        ++a;
    }

    
    
    return 0;
}