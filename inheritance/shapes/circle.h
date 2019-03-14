#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{
public:
    Circle();
    Circle(const Point &center,int radius);
    void draw();
    void set_radius(int radius);
private: 
    int m_radius;
};

#endif
