#include<iostream>

class Foo
{
};

void swap(int &a,int &b)
{
   int temp = a;
   a = b;
   b = temp;
}

void swap(double &a,double &b)
{
   double temp = a;
   a = b;
   b = temp;
}

void swap(Foo &a,Foo &b)
{
   Foo temp = a;
   a = b;
   b = temp;
}

int main()
{

}
