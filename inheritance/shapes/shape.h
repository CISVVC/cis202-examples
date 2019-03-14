#ifndef SHAPE_H
#define SHAPE_H
#include "point.h"

class Shape
{
public:
    Shape(const Point &position);
    Point get_position();
    void set_position(const Point &position);
    void draw();
protected:
    Point m_position;
    int color;
};

#endif
