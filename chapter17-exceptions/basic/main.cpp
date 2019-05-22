#include<iostream>
#include<cstdlib>
#include<cassert>
#include<fstream>

void do_something() {

   std::ofstream f;

   f.open("input.txt");

   if(f.fail())
   {
      throw "Failure to open the file, line 14";
   }

   f << "Hello" << std::endl; 

   f.close();
}

int main() {
   try
   {
      do_something();
   }
   catch(const char* message)
   {
      std::cerr << "Error : " << message << std::endl;
   }
   return 0;
}
