#ifndef POINT_H
#define POINT_H

class Point
{
public: 
   Point();
   Point(int x,int y);
   int get_x();
   int get_y();
private:
   int m_x;
   int m_y;
};

#endif
