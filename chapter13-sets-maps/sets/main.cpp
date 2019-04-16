#include<iostream>
#include<set>
#include<string>
#include <chrono>
#include <thread>
#include "ccc_time.h"

typedef std::set<std::string>::iterator set_iter;

int main() 
{

   std::set<std::string> names;
   std::multiset<Time*> times;

	names.insert("Romeo");
	names.insert("Juliet");
	names.insert("fred");
	names.insert("Fred");
	names.insert("Romeo"); // Has no effect: "Romeo" is already in the set

   times.insert(new Time);
   std::this_thread::sleep_for(std::chrono::milliseconds(1000));
   times.insert(new Time);
   std::this_thread::sleep_for(std::chrono::milliseconds(1000));
   times.insert(new Time);
   std::this_thread::sleep_for(std::chrono::milliseconds(1000));
   times.insert(new Time);
   std::this_thread::sleep_for(std::chrono::milliseconds(1000));
   times.insert(new Time);
   for(auto time : times)
      std::cout << time->get_seconds() << " ";
   std::cout << std::endl;
	//for(auto name : names)	
//		std::cout << name << std::endl;

   for(set_iter p = names.begin();p != names.end();p++)
		std::cout << *p << std::endl;

	names.erase("Juliet");
	names.erase("Juliet"); // Has no effect: "Juliet" is no longer in the set 



   std::multiset<int> integers;

   integers.insert(1);
   integers.insert(1);
   integers.insert(1);
   integers.insert(1);
   integers.insert(2);
   integers.insert(2);
   integers.insert(3);
   integers.insert(3);
   
   for(auto i : integers)
      std::cout << i << " ";
   std::cout << std::endl;
	return 0;
}
