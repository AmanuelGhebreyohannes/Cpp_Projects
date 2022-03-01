#include <iostream>

int main()
{
    const int count = 10;
    size_t i = 0;

    do{
        std::cout << i << " : I love c++"<<std::endl;
        i++;
    }while(i<count);

    std::cout<<" Loop is done!"<<std::endl;
    return 0;
    
}