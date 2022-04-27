#include <iostream>

int main()
{
    const size_t count = 10;
    size_t i = 0;

    while (i<count)
    {
        std::cout << i << " : I love c++"<<std::endl;
        i++;
    }
    std::cout << "loop done !"<<std::endl;
    return 0;
}