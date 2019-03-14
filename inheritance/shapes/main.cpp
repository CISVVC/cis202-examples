#include<iostream>
#include<vector>
#include "circle.h"
#include "rectangle.h"

int main()
{
    std::vector<Shape*> shapes();
    shapes.push_back(new Circle(Point(1,1),2));
    shapes.push_back(new Rectangle(Point(2,2),5,5));
   
    //for(int i= 0; i < shapes.size();i++)
    
    for(std::vector<Shape*>::iterator ip = shapes.begin();ip != shapes.end();ip++)
       (*ip)->draw();

    for(auto shape : shapes)
       shape->draw();

    return 0;
}
