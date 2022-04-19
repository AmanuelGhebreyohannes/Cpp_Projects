#ifndef OVAL_H
#define OVAL_H

#include "shape.h"
#include <string_view>

class Oval : public Shape{

    public:
        Oval()=default;
        Oval(double x_radius, double y_radius, const std::string_view description);
        ~Oval();
        virtual void draw() const override{
            std::cout << "Oval::draw() called . Drawing " << m_description << " with m_x_radius : "<< m_x_radius << " and m_y_radius :"
                        << m_y_radius << std::endl;
        }

        virtual void draw(int color_depth, std::string_view color) const{
            std::cout << "Drawing with color depth : "<< color_depth <<
            " and color : "<< color << std::endl;
        }
    protected:
        double get_x_rad() const{
            return m_x_radius;
        }
        double get_y_rad() const{
            return m_y_radius;
        }

    private: 
        double m_x_radius;
        double m_y_radius;
};

#endif