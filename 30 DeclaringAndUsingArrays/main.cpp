#include <iostream>

int main()
{
    // int scores [10]={};
    // std::cout << scores[0]<<std::endl;
    // std::cout << scores[1]<<std::endl;

    // scores[0]=20;
    // scores[1]=21;
    // scores[2]=22;

    // for (size_t i =0; i<10; i++)
    // {
    //     scores[i]=i * 10;

    // }
    // for (size_t i =0; i<10; i++)
    // {
    //     std::cout <<scores[i]<<std::endl;

    // }


    // double salaries[5]={12.7, 7.5,13.2,8.1,9.3};
    // for(auto value: salaries)
    // {
    //     std::cout << value <<std::endl;
    // }

    // double salaries[]={12.7, 7.5,13.2,8.1,9.3};
    // for(auto value: salaries)
    // {
    //     std::cout << value <<std::endl;
    // }

    int scores [] = {2,5,8,2,4,5,6};
    int sum =0;

    for (int element: scores)
    {
        sum+=element;
    }
    std::cout << sum <<std::endl;

    
    return 0;
}