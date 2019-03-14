class Circle
{
public:

    Circle(Point center,double radius);
    void draw();

private:
    Point &center;
    double radius;
};
