#include<iostream>
#include<string>


class Person
{
public:
   Person(const std::string &name);
   std::string to_string();
private:
   std::string m_name;

};

Person::Person(const std::string &name)
{
   m_name = name;
}

std::string Person::to_string()
{
   return "Person - m_name = " + m_name;
}

 // Why is this the implementation of this function a serious problem?
void function1()
{
   Person *p = new Person("Bob -- created in function1");
   std::cout << p->to_string() << std::endl;
}

int main()
{
   Person *p = new Person("Bob");
   std::cout << p->to_string() << std::endl;
   function1();

   return 0;
}
