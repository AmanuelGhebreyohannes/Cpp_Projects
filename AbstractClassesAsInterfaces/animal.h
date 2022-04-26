#ifndef ANIMAL_H
#define ANIMAL_H


#include <string>
#include <string_view>
#include <iostream>
#include "stream_insertable.h"

class Animal : public StreamInsertable
{
    public:
        Animal() = default;
        Animal(std::string_view description);
        virtual ~Animal();

        virtual void breath()const{
            std::cout << "Animal::breath called for : "<< m_description << std::endl;
        }
        virtual void stream_insert(std::ostream & out) const
        {
            out << "Animal [description : " << m_description << " ]";
        }

    
    protected:
        std::string m_description;



};

#endif