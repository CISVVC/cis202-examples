/**
 * file: main.cpp
 * description: entry point driver 
 */
#include<iostream>
#include "array_util.h"
#include "merge_sort.h"


const int SIZE = 10000000;
int main()
{
    int* a1 = arrays::create_random(SIZE,1,100);
//    arrays::print(std::cout,a1,SIZE);std::cout << std::endl;
    sort(a1,SIZE);
//    arrays::print(std::cout,a1,SIZE);std::cout << std::endl;
    return 0;
}
