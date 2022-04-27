#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


class Circle : public Shape
{
    public:
        Circle() = default;
        Circle(double radius, const std::string_view description);
        virtual ~Circle() = default;

        virtual double perimeter() const override
        {
            return ( 2 * PI * m_radius);
        }

        virtual double surface() const override
        {

            return PI * m_radius * m_radius;
        }



    private :
        double m_radius = 0.0;
        inline static double PI = 3.14159;    
    
};


#endif