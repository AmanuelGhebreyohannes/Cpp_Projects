#include <iostream>

int main()
{
    int tool = 5;
    switch(tool)
    {
        case 5:
            std::cout <<tool<<std::endl;
            break;
        case 3 :
            std::cout << tool -2 <<std::endl;
            break;
        default:
            std::cout << "no match found" << std::endl;
            break;
    }

    return 0;
}