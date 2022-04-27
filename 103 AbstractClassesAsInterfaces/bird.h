#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird : public Animal
{
    public :
        Bird() = default;
        Bird(std::string_view wing_color, std::string_view description)
            :Animal(description),m_wing_color(wing_color)
        {

        }
        ~Bird()=default;

        virtual void fly() const{
            std::cout <<"Bird::fly() called for bird : " << m_description << std::endl;
        }

        virtual void breath()const override{
            std::cout << "Bird::breath called for : "<< m_description << std::endl;
        }

        virtual void stream_insert(std::ostream & out) const
        {
            out << "Bird [description : "<< m_description << " , wing_color : "<< m_wing_color << " ] ";
        }


    protected:
        std::string m_wing_color;
};

#endif