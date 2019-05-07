#include<iostream>
#include<ctime>
#include<cstdlib>

namespace arrays
{
    int* create(int size)
    {
        return new int[size];
    }

    int* create_random(int size,int low,int high)
    {
        static int count=0;
        if(!count)
        {
            srand(time(0));
            count++;
        }
        int* a_temp = create(size);
        for(int i=0;i<size;i++)
            a_temp[i] = rand() % high + low;
        return a_temp;
    }

    void clear(int* a_temp,int size)
    {
        for(int i=0;i<size;i++)
            a_temp[i] = 0;
    }

    std::ostream& print(std::ostream &o,int* a_temp,int size)
    {
        for(int i=0;i<size;i++)
            o << a_temp[i] << " ";
        return o;
    }
};
