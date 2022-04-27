#ifndef DOG_H   
#define DOG_H
#include "feline.h"
class Dog: public Feline
{
    public :
        Dog() = default;
        Dog(std::string_view fur_style, std::string_view description)
            :Feline(fur_style,description)    
        {

        }
        ~Dog() = default;

        virtual void bark() const{
            std::cout << "Dog::bark called : Woof!" << std::endl;
        }
        virtual void breath()const override{
            std::cout << "Dog::breath called for : "<< m_description << std::endl;
        }
        virtual void run() const final{
            std::cout << "Dog "<< m_description << " is running "<<std::endl;
        }

};

#endif