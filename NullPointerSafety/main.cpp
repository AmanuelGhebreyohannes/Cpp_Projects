#include <iostream>

int main()
{
    // int *p_number;
    // if(!(p_number == nullptr))
    //     std::cout << p_number <<std::endl;
    // else std::cout<<"invalid address"<<std::endl;

    int *p_number;
    //p_number = new int(7);
    if(!(p_number == nullptr))
        std::cout << p_number <<std::endl;
    else std::cout<<"invalid address"<<std::endl;

    delete p_number;
    nullptr;

    int *p_number1;
    //delete p_number1;
    //p_number1 = nullptr;
    if(p_number1 != nullptr)
         delete p_number1;

    return 0;
}