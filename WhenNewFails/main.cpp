#include <iostream>

int main()
{
    //int * data = new int [100000000000];

    // for (size_t i = 0 ; i < 10000000; i++)
    // {
    //     int * data = new int [10000000];
    // }

    //  for (size_t i = 0 ; i < 10000000; i++)
    // {
    //     try{
    //         int * data = new int [10000000000];
    //     }catch(std::exception& ex)
    //     {
    //         std::cout << "Something went wrong: "<< ex.what()<<std::endl;
    //     }
    // }
    // std::cout << "program run successfully"<<std::endl;


    //std::nothrow

    for(size_t i = 0 ; i < 100 ; i++)
    {
        int * data = new (std::nothrow) int[10000000000];
        if(data != nullptr){
            std::cout << "Data Allocated"<<std::endl;
        }
        else{
            std::cout <<"Data Allocation failed"<<std::endl;
        }
    }
    std::cout << "program run successfully"<<std::endl;
    return 0;


}