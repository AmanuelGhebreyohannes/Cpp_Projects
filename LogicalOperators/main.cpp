#include <iostream>

int main()
{
    bool a = true;
    bool b = false;
    bool c = true;

    std::cout << std::boolalpha;
    std::cout << (a&&b)<<std::endl;
    std::cout << (a||b)<<std::endl;
    return 0;
}