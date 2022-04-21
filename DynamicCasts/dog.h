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
        virtual ~Dog(){
            std::cout << "dog destructor called "<< std::endl;

        };

        virtual void bark() const{
            std::cout << "Dog::bark called : Woof!" << std::endl;
        }
        virtual void breath()const override{
            std::cout << "Dog::breath called for : "<< m_description << std::endl;
        }
        virtual void run() const{
            std::cout << "Dog "<< m_description << " is running "<<std::endl;
        }

         void do_some_dog_thingy()
        {
            std::cout << "Doing some dog thingy ..., speed " << m_speed << std::endl;
        }   

    private :
        double m_speed = 0;

};

#endif