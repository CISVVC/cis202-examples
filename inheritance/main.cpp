#include "rectangle.h"
#include "circle.h"
#include <vector>


int main()
{ .....

   std::vector<Rectangle> shapes1;
   std::vector<Circle> shapes2;

   for(int i=0;i<shapes1.size();i++)
      shapes1.draw();

   for(int i=0;i<shapes2.size();i++)
      shapes2.draw();
}
