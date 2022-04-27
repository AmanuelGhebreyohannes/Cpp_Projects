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
        virtual void run() const{
            std::cout << "Cat "<< m_description << " is running "<<std::endl;
        }

        virtual void stream_insert(std::ostream & out) const
        {
            out << "Cat [description : "<< m_description << " , fur_style : "<< m_fur_style << " ] ";
        }

};

#endif