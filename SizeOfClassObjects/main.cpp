#include <iostream>

class Dog{
    public:
    Dog() = default;

    private:
        size_t leg_count;
        size_t arm_count;
        int * p_age;
};

int main()
{
    Dog dog1;
    std::cout << sizeof(size_t)<<std::endl;
    std::cout << sizeof(dog1)<<std::endl;

    std::string name = "Hello world!";

    std::cout << sizeof(name)<<std::endl;


    return 0;
}