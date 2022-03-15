#include <iostream>
#include <cstring>

template <typename T> T maximum(T a, T b){
    return (a>b)?a:b;
}

template<> const char * maximum<const char*>(const char * a, const char * b)
{
    return (std::strcmp(a,b)>0)?a:b;
}

int main()
{
    const char* g="wild";
    const char* h="animal";
    const char* result = maximum(g,h);
    std::cout<<result<<std::endl;
    return 0;
}