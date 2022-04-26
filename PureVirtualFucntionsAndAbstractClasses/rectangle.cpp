#include "rectangle.h"

Rectangle::Rectangle(double x_radius, double y_radius, const std::string_view description)
: Shape(description),m_width(x_radius), m_height(y_radius)
{

}
Rectangle::~Rectangle(){
    
}