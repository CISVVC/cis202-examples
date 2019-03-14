#include "shape.h"
#include<iostream>

Shape::Shape(const Point &position)
{
    m_position = position;
}

Point Shape::get_position()
{
    return m_position;
}

void Shape::set_position(const Point &position)
{
     m_position = position;
}

void Shape::draw()
{
    std::cout << "Will draw something";
}

