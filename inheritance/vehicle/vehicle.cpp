#include "vehicle.h"
#include<iostream>

Vehicle::Vehicle()
{
    std::cout << "Vehicle is constructed" << std::endl;
}

void Vehicle::drive()
{
    std::cout << "Vehicle is driving" << std::endl;

}

void Vehicle::set_wheels(int wheels)
{
    m_wheels = wheels;
}

int Vehicle::get_wheels()
{
    return m_wheels;
}
