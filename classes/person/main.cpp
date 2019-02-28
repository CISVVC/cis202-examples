#include<iostream>
#include<string>
#include "person.h"
#include "address.h"


int main()
{
   Person p1("Fred Flintstone");
   Person *p2 = new Person("Wilma Flintstone");
   Address *a = new Address("100 Slate St.","Bedrock","California","99999");
   std::cout << d << " " << d2 << std::endl;
   a->add_person(&p1);
   a->add_person(p2);
   p2 = new Person("Barney Rubble");
   a->add_person(p2);
   a->add_person(new Person("Betty Rubble"));
   
   std::cout << a->to_string() << std::endl;

   return 0;
}
