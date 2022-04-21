#include "derived.h"

int main()
{
    //base ptr : uses polymorphism
    Base * base_ptr1 = new Derived();
    double result = base_ptr1->add();
    std::cout << "Result (base_ptr) : " << result << std::endl;

    //base ref : uses polymorphism
    Derived derived1;
    Base & base_ref1 = derived1;
    result = base_ref1.add();
    std::cout << "Result (base_ref) : "<< result << std::endl;

    std::cout << "-------------------"<<std::endl;

    //raw objects
    Base base3;
    result = base3.add();
    std::cout << "raw result : " << result << std::endl;

    //slicing
    base3 = derived1;
    result = base3.add();
    std::cout << "raw result : " << result << std::endl;


    return 0;
}