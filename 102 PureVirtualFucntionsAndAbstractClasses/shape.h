#ifndef SHAPE_H
#define SHAPE_H 

#include <iostream>
#include <string_view>
#include <string>

class Shape
{
    public: 
        Shape() = default;
        Shape(std::string_view description);
        virtual ~Shape();
        
        virtual double perimeter() const = 0;
        virtual double surface() const = 0;


    private:
        std::string m_description = "";


};

#endif 