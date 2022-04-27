#include <iostream>

int main()
{
    int num1=15; //decimal
    int num2=017; //octal
    int num3=0x0F; //Hexamdecimal
    int num4=0b00001111;//binary

    std::cout<<num1<<" "<<num2<< " "<<num3<<" "<<num4<<std::endl;
    return 0;
}