#include<iostream>
#include<stack>



int main() 
{
   std::stack<int> ints;

   ints.push(1);
   ints.push(2);
   ints.push(3);
   while(!ints.empty()) {
      std::cout << ints.top()<< std::endl;
      ints.pop();
   }
   return 0;
   
}
