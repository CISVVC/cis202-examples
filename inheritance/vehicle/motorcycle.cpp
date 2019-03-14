#include<iostream>
#include "motorcycle.h"

Motorcycle::Motorcycle() : Vehicle()
{
    std::cout << "Motorcycle constructor" << std::endl;
    set_wheels(2);
}

void Motorcycle::drive()
{
    std::cout << "motorcycle is being driven" << std::endl;
}
