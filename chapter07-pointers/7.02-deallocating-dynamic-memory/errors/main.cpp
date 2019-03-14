#include<iostream>
#include<string>


class Person
{
public:
   Person(const std::string &name);
   ~Person();
   std::string to_string();
private:
   std::string m_name;
   std::string *m_a_bad_string;

};

Person::Person(const std::string &name)
{
   m_name = name;
   m_a_bad_string = new std::string("This is a string created on the heap");
}

Person::~Person()
{
    delete m_a_bad_string;
}

std::string Person::to_string()
{
   return "Person - m_name = " + m_name;
}

 // Why is this the implementation of this function a serious problem?
void function1()
{
   Person *p = new Person("Bob -- created in function1");
   delete p;
   p = NULL;
   std::cout << p->to_string() << std::endl;
}

int main()
{
   while(true)
   {
        Person *p = new Person("Bob");
        delete p;
        p = NULL;
        std::cout << p << " " << p->to_string() << std::endl;
   }

   return 0;
}
