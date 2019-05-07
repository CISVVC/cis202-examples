#include<iostream>
namespace arrays
{
    int* create(int size);
    int* create_random(int size,int low,int high);
    void clear(int a[],int size);
    std::ostream& print(std::ostream &o,int a[],int size);
};
