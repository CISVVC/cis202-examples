#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include <vector>
#include "person.h"

class Address
{
public:
   Address( 
      const std::string &street,
      const std::string &city,
      const std::string &state,
      const std::string &zip);

   void set_street(const std::string &street);
   void set_city(const std::string &city);
   void set_state(const std::string &state);
   void set_zip(const std::string &zip);
   std::string get_street();
   std::string get_city();
   std::string get_state();
   std::string get_zip();
   void add_person(Person *p);
   std::string to_string();

private:
   std::string m_street;
   std::string m_city;
   std::string m_state;
   std::string m_zip;
   std::vector<Person *> m_persons;
};

#endif
