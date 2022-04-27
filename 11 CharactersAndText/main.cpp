#include <iostream>

int main()
{
    char char1 = 'a';
    std::cout << char1<<std::endl;
    

    char value = 65;
    std::cout << "value : "<<value << std::endl;
    std::cout <<"value(int) : "<<static_cast<int> (value)<<std::endl;
    return 0;
}