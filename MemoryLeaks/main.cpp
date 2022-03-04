#include <iostream>

int main()
{
    // int *p_number = new int(67);
    // int number=55;
    // p_number = &number;
    // std::cout << "program ending well!"<<std::endl;

    // int *p_number1 = new int(55);
    // p_number1=new int (44);
    // delete p_number1;
    // p_number1 = nullptr ;
    // std::cout << "Program ending well"<<std::endl;

    {
        int *p_number2 = new int(57);
        //delete it here
        delete p_number2;
        p_number2 = nullptr;    

    }
    std::cout << "Program running well"<<std::endl;
    return 0;

    return 0;


    return 0;
}