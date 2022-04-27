#include <iostream>

int sum(int a, int b)
{
    int result=a+b;
    std::cout << &result << std::endl;
    return result;

}


std::string add_string(std::string str1, std::string str2)
{
    std::string result = str1 + str2;
    std::cout << &result << std::endl;
    return result;
}

int main()
{
    // int x=5;
    // int y = 9;
    // int result = sum(x,y);
    // std::cout << &result <<std::endl;

    std::string str1="hi";
    std::string str2 = "world";

    std::string result = add_string(str1,str2);
    std::cout << &result<<std::endl;
}