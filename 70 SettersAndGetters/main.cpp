#include <iostream>

const double PI = 3.14;
class Cylinder{
    public:

        //construtors
        Cylinder()= default;

        
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

        //setter and getter
        double get_base_radius()
        {
            return base_radius;
        }
        double get_height()
        {
            return height;
        }
        void set_base_radius(double rad_param)
        {
            base_radius = rad_param;
        
        }
        void set_height(double height_param)
        {
            height = height_param;
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
    Cylinder cylinder2;
    std::cout << cylinder2.volume()<<std::endl;
    std::cout << cylinder2.get_height() << " "<<cylinder2.get_base_radius()<<std::endl;
    cylinder2.set_base_radius(5);
    cylinder2.set_height(5);
    std::cout << cylinder2.get_height() << " "<<cylinder2.get_base_radius()<<std::endl;
    std::cout << cylinder2.volume()<<std::endl;

    return 0;
}