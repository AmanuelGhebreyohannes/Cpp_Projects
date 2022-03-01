#include <iostream>

int main()
{
    char message [5]= {'H','e','l','l','o'};

    std::cout <<" message : ";

    for (auto c : message)
    {
        std::cout <<c ;

    }
    std::cout <<std::endl;

    message[1]='a';
    std::cout <<" message : ";

    for (auto c : message)
    {
        std::cout <<c ;

    }
    std::cout <<std::endl;

    char mesg[6]={'H','e','l','l','o','\0'};

    std::cout << "message : "<<mesg <<std::endl;

    char mesg2[6]={'H','e','l','l','o'};

    std::cout << "message : "<<mesg2 <<std::endl;

    char mesg3[]={'H','e','l','l','o'};

    std::cout << "message : "<<mesg3 <<std::endl;

    char message4 [] = {"Hello"};
    std::cout <<message4<<std::endl;
    std::cout <<std::size(message4)<<std::endl;

    return 0;

}