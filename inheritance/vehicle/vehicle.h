#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
public:
    Vehicle();
    virtual void drive();
    void set_wheels(int wheels);
    int get_wheels();
private:
    int m_wheels;
};

#endif
