#include <iostream>
#include <cstring>

int main()
{
    char dest[50]="Hello ";
    char src[50]="World!";
    std::strcat(dest,src);
    std::strcat(dest, " Goodbye World!");
    //std::cout << dest <<std::endl;

    char *dest1 = new char [30]{'F','i','r','e','\0'};
    char *src1 = new char [30]{ ' ', 'i', 's', '\0'};
    std::strcat(dest1,src1);
    std::cout << std::strlen(dest1)<< ' '<< dest1<<std::endl;
    std::strncat(dest1, src1,3);
    std::cout << std::strlen(dest1)<< ' '<< dest1<<std::endl;

    std::strcpy(dest1, src1);
    std::cout << std::strlen(dest1)<< ' '<< dest1<<std::endl;
    std::strcpy(dest1,"hello");
    std:strncpy(dest1, src1,2);
    std::cout << std::strlen(dest1)<< ' '<< dest1<<std::endl;


    return 0;
}