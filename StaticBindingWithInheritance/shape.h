#ifndef SHAPE_H
#define SHAPE_H 

#include <iostream>
#include <string>

class Shape
{
    public: 
        Shape() = default;
        Shape(const std::string& description);
        ~Shape()=default;
        void draw()const{
            std::cout<< "Shape::draw() called. Drawing "<< m_descritption<< std::endl;
        }

    protected:
        std::string m_description = "";


};

#endif 