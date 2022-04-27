#include <iostream>

int max(int a, int b);
int main()
{
    int result = max (5,2);
    std::cout << result <<std::endl;
}

int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}
