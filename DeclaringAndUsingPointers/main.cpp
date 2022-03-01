#include <iostream>

int main()
{
    int* p_number ;
    double* p_fractional_number;

    int* p_number1 = nullptr;
    double* p_fractional_number1=nullptr;

    std::cout << sizeof(int*)<<std::endl;
    std::cout << sizeof(p_fractional_number1)<<std::endl;

    int int_var = 43;
    int *p_int = &int_var;
    std::cout << int_var<<std::endl;
    std::cout <<p_int<<std::endl;

    int int_var1=65;
    p_int = &int_var1;
    std::cout <<p_int<<std::endl;

    //Dereferencing a pointer
    int* p_int2= nullptr;
    int int_data= 56;
    p_int2=&int_data;
    std::cout <<"value : "<<*p_int2<<std::endl; 

    return 0;
}