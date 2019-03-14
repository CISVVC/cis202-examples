#include<iostream>
#include<vector>
#include "car.h"
#include "bicycle.h"
#include "motorcycle.h"


int main()
{
    Car c;
    Bicycle b;
    Motorcycle m;
    
    std::vector<Vehicle*> garage;

    garage.push_back(&c);
    garage.push_back(&b);
    garage.push_back(&m);


    std::cout << "-----------------" << std::endl;
    std::cout << "Let's drive the vehicles in the garage:" << std::endl;
    std::vector<Vehicle*>::reverse_iterator it;

    std::cout << "-----------------" << std::endl;
    std::cout << "Enhanced for loop:" << std::endl;
    for(auto v : garage)
        v->drive();

    std::cout << "-----------------" << std::endl;
    std::cout << "for loop with iterator:" << std::endl;
    for(it = garage.rbegin();it != garage.rend();it++)
        (*it)->drive();

    return 0;








}
