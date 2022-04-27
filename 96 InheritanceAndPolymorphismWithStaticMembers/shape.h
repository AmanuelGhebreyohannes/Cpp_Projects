#ifndef SHAPE_H
#define SHAPE_H 

#include <iostream>
#include <string_view>
#include <string>

class Shape
{
    public: 
        Shape();
        Shape(std::string_view description);
        ~Shape();
        virtual void draw()const{
            std::cout<< "Shape::draw() called. Drawing "<< m_description<< std::endl;
        }

        virtual int get_count() const{
            return m_count;
        }

        static int m_count;

    protected:
        std::string m_description = "";


};

#endif 