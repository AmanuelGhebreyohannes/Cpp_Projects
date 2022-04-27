#include <iostream>

int main()
{
    int age = 27;
    const int& ref_age = age;

    std::cout<<age<<" "<<ref_age<<std::endl;
    age++;
    //ref_age++;  //dous not work as its const but can be modified by 'age' variable
    std::cout<<age<<" "<<ref_age<<std::endl;
    return 0;
}