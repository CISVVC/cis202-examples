#include<iostream>
#include "bicycle.h"

Bicycle::Bicycle() : Vehicle()
{
    std::cout << "Bicycle constructor" << std::endl;
    set_wheels(4);
}

void Bicycle::drive()
{
    std::cout << "bicycle is being driven" << std::endl;
}
