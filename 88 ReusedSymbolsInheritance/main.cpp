#include <iostream>
#include "child.h"

int main()
{
    // Parent p1;
    // p1.print_var();

    Child child(33);
    child.print_var();
    child.Parent::print_var();

    std::cout << " ------------ "<< std::endl;
    child.show_values();    

    
    return 0;
}