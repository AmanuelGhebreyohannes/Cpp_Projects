#include <iostream>

int main()
{
    // Case 1
    // int * p_number;
    // std::cout << p_number << " "<<*p_number <<std::endl;

    //Case 2
    // int * p_number1 = new int (67);
    // std::cout << *p_number1<<std::endl;
    // delete p_number1;
    // std::cout << *p_number1<<std::endl;

    // Case 3
    // int *p_number3=new int(83);
    // int *p_number4=p_number3;
    // delete p_number3;
    // std::cout << p_number4 << " "<< *p_number4<<std::endl;

    //Solution 1
    // int *p_number5= nullptr;
    // int *p_number6 = nullptr;
    // // std::cout << *p_number5<<std::endl;
    // if(p_number5!=nullptr)
    // std::cout << *p_number5<<std::endl;


    //Solution 2
    // int *p_number8 = new int(382);
    // delete p_number8;
    // p_number8 = nullptr;
    // if(!(p_number8 == nullptr))
    // std::cout <<p_number8 << " "<< *p_number8 <<std::endl;

    //Solution 3
    int *p_number8 = new int(382);
    int *p_number9 = p_number8;

    delete p_number8;
    p_number8 = nullptr;
    if(!(p_number8 == nullptr))
    std::cout <<p_number9 << " "<< *p_number9 <<std::endl;





    return 0;
}