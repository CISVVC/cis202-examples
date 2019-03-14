#ifndef BICYCLE_H
#define BICYCLE_H

#include "vehicle.h"

class Bicycle : public Vehicle
{
public:
    Bicycle();
    virtual void drive();
};

#endif
