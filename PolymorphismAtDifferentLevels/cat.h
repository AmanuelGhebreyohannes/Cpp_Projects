#ifndef CAT_H
#define CAT_H

#include "feline.h"

class Cat : public Feline
{
    public:
        Cat() = default;
        Cat(std::string_view fur_style, std::string_view description)
            :Feline(fur_style,description)
        {

        }
        ~Cat()=default;

        virtual void miaw() const{
            std::cout << "Cat::miaw() called for cat " << m_description << std::endl;
        }

        virtual void breath()const override{
            std::cout << "Cat::breath called for : "<< m_description << std::endl;
        }

};

#endif