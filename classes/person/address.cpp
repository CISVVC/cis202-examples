#include "address.h"

Address::Address( 
   const std::string &street,
   const std::string &city,
   const std::string &state,
   const std::string &zip)
{
   set_street(street);
   set_city(city);
   set_state(state);
   set_zip(zip);
}

void Address::set_street(const std::string &street)
{
   m_street = street;
}

void Address::set_city(const std::string &city)
{
   m_city = city;
}

void Address::set_state(const std::string &state)
{
   m_state = state;
}

void Address::set_zip(const std::string &zip)
{
   m_zip = zip;
}

std::string Address::get_street()
{
   return m_street;
}

std::string Address::get_city()
{
   return m_city;
}

std::string Address::get_state()
{
   return m_state;
}

std::string Address::get_zip()
{
   return m_zip;
}

void Address::add_person(Person *p)
{
   m_persons.push_back(p);
}

std::string Address::to_string()
{
   std::string ret = std::string("Street: ") + m_street + "\n"
          + "City: " + m_city + "\n"
          + "State: " + m_state + "\n"
          + "Zip: "  + m_zip + "\n"
          + "Occupants: \n";
   for(int i=0;i<m_persons.size();i++)
      ret += m_persons[i]->to_string() + "\n";

   return ret;
}


