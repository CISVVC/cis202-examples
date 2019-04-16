#include<iostream>
#include<set>
#include<string>

typedef std::set<std::string>::iterator set_iter;

int main() 
{
   std::set<std::string> s;
   s.insert("Hello");
   s.insert("from");
   s.insert("from");
   s.insert("from");
   s.insert("c++");

   for(set_iter it = s.begin();it != s.end();it++)
      std::cout << *it << std::endl;

	return 0;
}
