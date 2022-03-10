#include <iostream>

int main()
{
    // auto func=[](){
    //     std::cout<<"Hello world"<<std::endl;
    // };
    // func();

    // [](){
    //     std::cout<<"Hello world"<<std::endl;
    // }();

    // [](double a, double b){
    //     std::cout <<a+b<<std::endl;

    // }(10.4,2);

    // auto func1=[](double a, double b){
    //     std::cout <<a+b<<std::endl;

    // };
    // func1(10.4,7);
    // func1(10,3);

    // auto result = [](double a, double b){
    //     return a+b;

    // }(10.4,7);
    // std::cout << result << std::endl;
    // std::cout<<[](double a, double b){
    //     return a+b;

    // }(10.4,5)<<std::endl;

    // auto result = [](double a, double b){
    //     return a+b;

    // };
    // auto result1=result(23.0,1);
    // auto result2 = result(3.0,5);
    // std::cout << result1 <<std::endl;
    // std::cout << result2 << std::endl;

    auto func3 = [](double a, double b)->int{
        return a+b;

    };
    auto func4= [](double a, double b){
        return a+b;

    };

    auto result3 = func3(6.9,3.5);
    auto result4 = func4(6.9,3.5);
    std::cout << result3<<std::endl;
    std::cout << result4 << std::endl;




    return 0;
}