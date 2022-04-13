#ifndef OVAL_H
#define OVAL_H

#include "shape.h"
#include <string_view>

class Oval : public Shape{

    public:
        Oval()=default;
        Oval(double x_radius, double y_radius, const std::string_view description);
        ~Oval();
        void draw() const{
            std::cout << "Oval::draw() called . Drawing " << m_description << " with m_x_radius : "<< m_x_radius << " and m_y_radius :"
                        << m_y_radius << std::endl;
        }

    private: 
        double m_x_radius;
        double m_y_radius;
};

#endif