#include <iostream>

const double PI = 3.14;
class Cylinder{
    public:
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }

    public:
        //member variables
        double base_radius=1;
        double height=1;

};

int main()
{
    Cylinder cylinder1;
    std::cout << cylinder1.volume()<<std::endl;
    cylinder1.base_radius=10;
    cylinder1.height = 4;
    std::cout << cylinder1.volume()<<std::endl;
    // std::cout <<cylinder1.base_radius <<std::endl;
    // std::cout << cylinder1.height <<std::endl;
    return 0;
}