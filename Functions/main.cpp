#include <iostream>
#include <iomanip>

void enter_bar(unsigned int age)
{
    if(age > 10)
        std::cout <<age << std::endl;
    else
        std::cout<<"Sorry"<<std::endl;

    return ;
}

int main()
{
    enter_bar(12);
    enter_bar(2);

    for(size_t i = 1; i<20;i++)
    {
        enter_bar(i);

    }
    std::cout << sizeof(size_t)<<std::endl;

    
    return 0;
}