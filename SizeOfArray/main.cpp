#include <iostream>

int main()
{
    int scores[]={1,2,3,4,5,6,7,8,9,10,11,12};

    int coutn = std::size(scores);

    for(size_t i=0 ; i< coutn ;i++)
    {
        std::cout <<scores[i] <<std::endl;
    }

    std::cout  <<sizeof(scores) <<std::endl;
    std::cout << sizeof(scores[0])<<std::endl;

    coutn = sizeof(scores)/sizeof(scores[0]);

    std::cout<< coutn <<std::endl;

    return 0;
}