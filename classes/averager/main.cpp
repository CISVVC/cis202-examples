#include<iostream>
#include<vector>
#include<cassert>


class MyDouble
{
   double m_double;

public:
   MyDouble(double d);
   void read();
   bool is_valid(double d);
   void set_value(double d);
   double value();
};

MyDouble::MyDouble(double d)
{
   set_value(d);
}

void MyDouble::read() {
   double temp;
   std::cin >> temp;
   set_value(temp);
}

bool MyDouble::is_valid(double d)
{
   return d >= 0;
}

void MyDouble::set_value(double d)
{
   if(is_valid(d))
   {
      m_double = d;
   }
   else
      assert(false);
}

double MyDouble::value()
{
   return m_double;
}

class Averager
{
   int count;
   std::vector<MyDouble> data;

public:
   Averager();
   
   void readData();
   double getTotal();
   double getAverage();
};
MyDouble obj_double(value);
Averager::Averager()
{
}

void Averager::readData()
{
   double value;
   std::cin >> value;
   MyDouble obj_double(value); 
   data.push_back(obj_double);
}

double Averager::getTotal()
{
   double total=0.0;
   for(int i=0;i < data.size(); i++)
      total += data[i].value();
   return total;
}

double Averager::getAverage()
{
   return getTotal() / data.size();
}



int main()
{
   Averager avg;
   

   avg.readData();
   avg.readData();
   avg.readData();
   std::cout << avg.getAverage() << std::endl;

   return 0;
}
