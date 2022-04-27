#include <iostream>

int main()
{
    char char1 = 'a';
    std::cout << char1<<std::endl;
    

    char1 = 66;
    std::cout << "char1 : "<<char1 << std::endl;
    std::cout <<"value(int) : "<<static_cast<int> (char1)<<std::endl;

    //auto type deduction
    auto var3 = 333u;

    var3=-22;
    std::cout<< "var3 : "<<var3 <<std::endl;
    return 0;
}
