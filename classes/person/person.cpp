#include "person.h"

Person::Person(const std::string &name)
{
   set_name(name);
}


void Person::set_name(const std::string &name)
{
   m_name = name;
}

std::string Person::get_name()
{
   return m_name;
}

std::string Person::to_string()
{
   return m_name;
}
