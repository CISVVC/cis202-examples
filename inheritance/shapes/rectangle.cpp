#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle() : Shape(Point(0,0)),m_width(1),m_height(1)
{
}

Rectangle::Rectangle(Point upperleft,double width,double height) : Shape(upperleft),m_width(width),m_height(height)
{
}

void Rectangle::draw()
{
   std::cout << "Rectangle::draw()" << std::endl;
}

void Rectangle::set_width(double width)
{
   m_width = width;
}
void Rectangle::set_height(double height)
{
   m_height = height;
}

double Rectangle::get_width() const
{
   return m_width;
}

double Rectangle::get_height() const
{
   return m_height;
}
