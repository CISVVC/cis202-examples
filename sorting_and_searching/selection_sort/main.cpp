/**
 * file: main.cpp
 * description: entry point driver 
 */
#include<iostream>
#include "array_util.h"
#include "selection_sort.h"


const int SIZE = 10000000;
int main()
{
    int* a1 = create_random(SIZE,1,100);
    //print(std::cout,a1,SIZE);std::cout << std::endl;
    sort(a1,SIZE);
    //print(std::cout,a1,SIZE);std::cout << std::endl;
    return 0;
}
