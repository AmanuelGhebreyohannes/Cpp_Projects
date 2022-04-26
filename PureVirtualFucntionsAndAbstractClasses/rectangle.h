#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include <string_view>

class Rectangle : public Shape{

    public:
        Rectangle()=default;
        Rectangle(double x_radius, double y_radius, const std::string_view description);
        virtual ~Rectangle();

        virtual double perimeter() const override
        {
            return (2*m_width + 2*m_height);
        }

        virtual double surface() const override
        {
            return (m_width * m_height);
        }
        

    private: 
        double m_width = 0.0;
        double m_height = 0.0;
};

#endif