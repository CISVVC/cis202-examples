#include<iostream>
#include<vector>


class Foo
{
};

int main()
{
   std::vector<int *> intPointers;
   intPointers.push_back(new int);
   intPointers.push_back(new int);
   intPointers.push_back(new int);
   intPointers.push_back(new int);
   intPointers.push_back(new int);

   std::vector<Foo *> fooPointers;
   Foo *fooptr = new Foo;
   fooPointers.push_back(fooptr);
   fooPointers.push_back(new Foo);
   fooPointers.push_back(new Foo);
   fooPointers.push_back(new Foo);
   fooPointers.push_back(new Foo);

   return 0;
}
