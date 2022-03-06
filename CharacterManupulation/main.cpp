#include <iostream>
#include <cctype>

int main()
{
    std::cout << std::isalnum('C')<<std::endl;
    std::cout << std::isalpha('a')<<std::endl;
    std::cout << std::isblank(' ')<<std::endl;
    std::cout << std::islower('a')<<std::endl;
    std::cout << std::isupper('A')<<std::endl;
    std::cout << std::isdigit('1')<<std::endl;
    std::cout << std::toupper('a')<<std::endl;
    std::cout << static_cast <char> (std::tolower('A'))<<std::endl;






    return 0;
}