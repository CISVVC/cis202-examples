#include<iostream>
#include<random>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<algorithm>

#include "ccc_time.h"

std::vector<int> create(int size,int upper)
{
   std::vector<int> temp;
   for(int i=0;i<size;i++)
      temp.push_back(rand() % upper + 1);
   return temp;
}

std::ostream& operator<<(std::ostream& o,Time t)
{
   o << t.timestamp();
   return o;
}

template<class T> 
void print(T v)
{
   for(typename T::iterator i=v.begin();i != v.end();i++)
      std::cout << *i << " ";
//   for(int i=0;i<v.size();i++)
//      std::cout << v[i] << " ";
   std::cout << std::endl;
}


bool compare(Time a,Time b)
{
   return a.timestamp() < b.timestamp();
}

const int SIZE = 20;
const int UPPER = 100;

int main()
{
   srand(time(0));
   
   Time t;
   std::cout << t.timestamp() << std::endl;
   //std::vector<int> v = create(SIZE,UPPER);
   std::random_device rd;
   std::mt19937 g(rd());

   std::vector<Time> vt;

   for(int i=0;i<SIZE;i++)
   {
      vt.push_back(Time());
      system("sleep 1");
   }
   std::shuffle(vt.begin(),vt.end(),g);
   print(vt);
   std::sort(vt.begin(),vt.end(),compare);
   print(vt);

   return 0;
}
