#include <iostream>

int main()
{
    // signed int val1 {10};
    // signed int val2 {-300};
    // std::cout<<sizeof(val1)<<std::endl;
    
    // unsigned int val3 {4};
    // //unsigned int val4 {-5};
    // std::cout<<val3<<std::endl;

    int int_var {55}; 
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    long long_var {88};
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    long long long_long {888};
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};

    std::cout<<"int var : "<<int_var<<" , size : "
        <<sizeof(int_var)<<" bytes"<<std::endl;

    std::cout<<"Signed var : "<<signed_var<<" , size : "
        <<sizeof(signed_var)<<" bytes"<<std::endl;

    std::cout<<"signed_int : "<<signed_int<<" , size : "
        <<sizeof(signed_int)<<" bytes"<<std::endl;

    std::cout<<"unsigned_int: "<<unsigned_int<<" , size : "
        <<sizeof(unsigned_int)<<" bytes"<<std::endl;

    std::cout<<"long_var : "<<long_var<<" , size : "
        <<sizeof(long_var)<<" bytes"<<std::endl;

    std::cout<<"long_int : "<<long_int<<" , size : "
        <<sizeof(long_int)<<" bytes"<<std::endl;

    std::cout<<"signed_long : "<<signed_long<<" , size : "
        <<sizeof(signed_long)<<" bytes"<<std::endl;

    std::cout<<"signed_long_int : "<<signed_long_int<<" , size : "
        <<sizeof(signed_long_int)<<" bytes"<<std::endl;

    std::cout<<"unsigned_long_int : "<<unsigned_long_int<<" , size : "
        <<sizeof(unsigned_long_int)<<" bytes"<<std::endl;

    std::cout<<"long_long : "<<long_long<<" , size : "
        <<sizeof(long_long)<<" bytes"<<std::endl;

    std::cout<<"long_long_int : "<<long_long_int<<" , size : "
        <<sizeof(long_long_int)<<" bytes"<<std::endl;

    std::cout<<"signed_long_long : "<<signed_long_long<<" , size : "
        <<sizeof(signed_long_long)<<" bytes"<<std::endl;

    std::cout<<"signed_long_long_int : "<<signed_long_long_int<<" , size : "
        <<sizeof(signed_long_long_int)<<" bytes"<<std::endl;

    

    return 0;
}