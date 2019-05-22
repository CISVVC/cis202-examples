#include<iostream>
#include<string>
#include<map>


int main() 
{

   std::map<std::string,int> map = {
      {"apple",10},
      {"orange",12},
      {"pear",13},   
      {"banana",11}   
   };
   for(auto m : map)
      std::cout << m.first << " -> " << m.second << std::endl;

   return 0;
}
