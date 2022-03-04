#include <iostream>

int main()
{
    size_t size = 10;

    double * p_salaries = new double [size];
    int *p_students = new (std::nothrow) int [size];
    double *p_scores = new (std::nothrow) double[size]{1,2,3,4,5};
    if(p_scores)
    {
        std::cout << sizeof(p_scores)<<std::endl;
        for (size_t i = 0 ;i < size ;i++)
            std::cout << p_scores[i] << " : "<< *(p_scores + i)<<std::endl;

    }
    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;
    delete [] p_salaries;
    p_salaries = nullptr;

    //static arrays
    int scores[10]={1,2,3,4,5};
    std::cout <<std::size(scores)<<std::endl;
    for (auto score: scores)
    {
        std::cout << score<<std::endl;
    }

    int *p_scores1 = new int[10]{1,2,3,4,5};
    //std::cout <<std::size(p_scores)<<std::endl;
    // for (auto score: p_scores1)
    // {
    //     std::cout << score<<std::endl;
    // }
    return 0;


}