#include <iostream>
#include <limits>

int main()
{
    std::cout <<std::numeric_limits<short>::min()<<" to "<<std::numeric_limits<short>::max()<<std::endl;
    std::cout <<std::numeric_limits<float>::min()<<" to "<<std::numeric_limits<float>::max()<<std::endl;
    std::cout <<std::numeric_limits<int>::min()<<" to "<<std::numeric_limits<int>::max()<<std::endl;
    std::cout <<std::numeric_limits<double>::min()<<" to "<<std::numeric_limits<double>::max()<<std::endl;
    std::cout <<std::numeric_limits<unsigned>::min()<<" to "<<std::numeric_limits<unsigned>::max()<<std::endl;
    std::cout <<std::numeric_limits<long>::min()<<" to "<<std::numeric_limits<long>::max()<<std::endl;
    return 0;
}