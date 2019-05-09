#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<ctime>
#include<random>

std::vector<int> create(int size)
{
   std::vector<int> v;
   for(int i=0;i<size;i++)
      v.push_back(rand() % 1000 + 1);
   return v;
}


const int SIZE=10000000;

int main()
{
   srand(time(0));

   std::vector<int> v = create(SIZE);
 //  std::random_device rd;
 //  std::mt19937 g(rd());
//   std::shuffle(v.begin(),v.end(),g);
   std::sort(v.begin(),v.end());

   return 0;
}
