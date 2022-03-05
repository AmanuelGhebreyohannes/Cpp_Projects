#include <iostream>

int main()
{
    double double_value = 23.3;
    double & ref_double_value = double_value; //initalize it always
    double * p_double_value = &double_value;
    std::cout << double_value << " "<< ref_double_value <<" "<<p_double_value << ' '<<*p_double_value<<std::endl;

    *p_double_value = 14.55;
    std::cout << double_value << " "<< ref_double_value <<" "<<p_double_value << ' '<<*p_double_value<<std::endl;

    ref_double_value = 15.6;
    std::cout << double_value << " "<< ref_double_value <<" "<<p_double_value << ' '<<*p_double_value<<std::endl;

    double double_value_2 = 34;
    p_double_value = &double_value_2;
    std::cout << double_value << " "<< ref_double_value <<" "<<p_double_value << ' '<<*p_double_value<<std::endl;

    return 0;
}