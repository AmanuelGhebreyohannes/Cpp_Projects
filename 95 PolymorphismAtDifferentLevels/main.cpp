#include <iostream> 
#include "pigeon.h"
#include "crow.h"
#include "dog.h"
#include "cat.h"

int main()
{
    Dog dog1("dark gray", "dog1");
    Cat cat1("black stripes","cat1");
    Pigeon pigeon1("white","pigeon1");
    Crow crow1("black", "crow1");

    Animal * animals[]= {&dog1, &cat1, &pigeon1, &crow1};

    for (const auto& animal : animals)
    {
        animal->breath();
    }

    std::cout << "-------------------"<<std::endl;

    Feline * felines[] = {&dog1, &cat1};
    for (const auto& feline : felines)
    {
        feline->run();
    }

    std::cout << "-------------------"<<std::endl;

    Bird * birds[] = {&pigeon1, &crow1};
    for (const auto& bird : birds)
    {
        bird->fly();
    }


    return 0;
}