#include <iostream>
#include <concepts>
//syntax 1
// template <typename T>
// requires std::integral<T>
// T add(T a, T b)
// {
//     return a+b;
// }
//systax 2
// template < std::integral T>
// T add(T a, T b)
// {
//     return a+b;
// }
// systax 3
// auto add(std::integral auto a,std::integral auto b)
// {
//     return a+b;
// }

//syntax 4
template < typename T>
T add(T a, T b) requires std::integral<T>
{
    return a+b;
}




int main()
{
    int b = 11,a=5;
    auto result_a = add(a,b);
    std::cout <<result_a<<std::endl;

    // double c=1.2,d=4.3;
    // auto result_b = add(c,b);
    // std::cout <<result_b<<std::endl;

    return 0;

}