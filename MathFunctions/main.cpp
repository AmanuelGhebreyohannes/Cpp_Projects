#include <iostream>
#include <cmath>

int main()
{
    double weight = 7.7;

    std::cout << std::ceil(weight)<<std::endl;
    std::cout << std::floor(weight)<<std::endl;
    double saving = -5000;
    std::cout << std::abs(saving)<<std::endl;
    std::cout << std::pow(2,3)<<std::endl;
    std::cout << std::exp(2)<<std::endl;
    std::cout << std::log(54.59)<<std::endl;
    std::cout << std::log10(10)<<std::endl;
    std::cout << std::sqrt(81)<<std::endl;
    std::cout << std::round(weight)<<std::endl;

    return 0;

}