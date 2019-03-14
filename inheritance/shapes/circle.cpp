#include "circle.h"
#include <iostream>

Circle::Circle() : Shape(Point(0,0)),m_radius(1)
{
}

Circle::Circle(const Point &center,int radius) : Shape(center),m_radius(radius)
{
}

void Circle::draw()
{
    std::cout << "Will Draw a Circle" << std::endl;
}

void Circle::set_radius(int radius)
{
    m_radius = radius;
}
