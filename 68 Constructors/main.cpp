#include <iostream>

const double PI = 3.14;
class Cylinder{
    public:

        //construtors
        Cylinder()
        {
            base_radius = 2;
            height = 2;
        }
        
        Cylinder(double rad_parma, double height_param)
        {
            base_radius= rad_parma;

            height = height_param;
        }

        //methods
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }

    private:
        //member variables
        double base_radius=1;
        double height=1;

};

int main()
{
    Cylinder cylinder1(3,4);
    std::cout << cylinder1.volume()<<std::endl;
    return 0;
}