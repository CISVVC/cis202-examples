#include<iostream>

class HelloWorld
{
public:
   HelloWorld();
   void print();
};


HelloWorld::HelloWorld() { }

void HelloWorld::print()
{
   std::cout << "Hello World" << std::endl;
}


int main()
{
   HelloWorld hw;

   hw.print();

   return 0;
}
