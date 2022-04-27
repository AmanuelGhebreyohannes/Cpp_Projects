#include <iostream>
#include <cstring>

int main()
{
    std::string str1;
    std::string str2 = "Planet Earth";
    std::string str3 = str2;
    std::string str4 {str2,6};
    std::string str5 = {str2,2,5};
    std::cout <<str1<<std::endl;
    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;
    std::cout << str4 << std::endl;
    std::cout << str5 << std::endl;
    

    return 0;

}