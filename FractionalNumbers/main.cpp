#include <iostream>
#include <iomanip>

int main()
{
    

    // float num1 {1.2479238741723597923857f}; //Precison : 7
    // double  num2 {1.23472983572930475293475}; // Precision : 15
    // long double num3 {1.297298417239874918273491723948L}; //Precision : 15+
    // std::cout<<"float var : "<<num1<<" , size : "
    //     <<sizeof(num1)<<" bytes"<<std::endl;
    // std::cout<<"double var : "<<num2<<" , size : "
    //     <<sizeof(num2)<<" bytes"<<std::endl;
    // std::cout<<"long double var : "<<num3<<" , size : "
    //     <<sizeof(num3)<<" bytes"<<std::endl;

    // std::cout << std::setprecision(20); //control the precision from std::cout
    // std::cout<<"float var : "<<num1<<std::endl;
    // std::cout<<"double var : "<<num2<<std::endl;
    // std::cout<<"long double var : "<<num3<<std::endl;

    double num1 = 5.6;
    double num2 = 0;
    double num3 = 0;
    //Inifinity
    double result = num1/num2;
    std::cout<<num1<<"/"<<num2<<" = "<<result<<std::endl;
    std::cout<<result << "+"<< num1 <<" = "<< result+num1<<std::endl;
    //Nan
    result = num2/num3;
    std::cout<<num2<<"/"<<num3<<" = "<<result<<std::endl;


    



    

    

    return 0;
}