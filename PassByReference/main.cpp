#include <iostream>

void say_age(int& age)
{
    ++age;
    std::cout << &age << " " <<age << std::endl;
}

int main()
{
    int age = 33;
    std::cout << &age << " " <<age << std::endl;
    say_age(age);

    std::cout << &age << " " <<age << std::endl;
    return 0;
}