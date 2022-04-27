#include <iostream>
#include <cstring>

int main()
{
    // const char message1 []= "Hello World";
    // std::cout << std::strlen(message1)<<std::endl;
    // std::cout << std::size(message1) <<std::endl;

    const char * str1 = "Alabama";
    const char * str2 = "Blabama";

    char str3 [] = "Alabama";
    char str4 [] = "Blabama";

    // std::cout << std::strcmp(str1,str2)<<std::endl;
    // std::cout << std::strcmp(str4, str3)<<std::endl;

    // str1 = "Alabama";
    // str2 = "Alabama";
    // std::cout << std::strcmp(str1,str2)<<std::endl;

    // size_t n = 3;
    // std::cout << std::strncmp(str1,str2,n)<<std::endl;

    str1 = "LeTs";
    char target = 'T';
    std::cout << std::strchr(str1, target)<<std::endl;

    char input []= "/home/usre/hello.cpp";
    char * output= std::strrchr(input, '/');
    std::cout << ++output << std::endl;




    return 0;
}