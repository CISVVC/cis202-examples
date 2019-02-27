#ifndef PERSON_H
#define PERSON_H
#include<string>

class Person
{
public:

   Person(const std::string &name);
   void set_name(const std::string &name);
   std::string get_name();
   std::string to_string();
private:
   std::string m_name;
};


#endif
