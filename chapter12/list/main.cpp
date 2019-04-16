#include<iostream>
#include<list>
#include<string>

int main()
{
   std::list<std::string> the_list;

   the_list.push_back("Hello");
   the_list.push_back("to");
   the_list.push_back("the");
   the_list.push_back("world.");
   
   std::list<std::string>::iterator it = the_list.begin();

   for(it = the_list.begin();it != the_list.end();it++)
     std::cout << *it << std::endl;

   for(auto name : the_list)
      std::cout << name << std::endl;

   return 0;
}

