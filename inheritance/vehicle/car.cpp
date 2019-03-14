#include<iostream>
#include "car.h"

Car::Car() : Vehicle()
{
    std::cout << "Car constructor" << std::endl;
    set_wheels(4);
}

void Car::drive()
{
    std::cout << "car is being driven" << std::endl;
}
