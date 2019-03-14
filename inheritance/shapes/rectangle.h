#include "shape.h"
#include "point.h"

class Rectangle : public Shape
{
public:

    Rectangle();
    Rectangle(Point upperleft,double width,double height);
    void draw();
    void set_width(double width);
    void set_height(double height);
    double get_width() const;
    double get_height() const;

private:
    Point m_upperleft;
    double m_width;
    double m_height;
};
