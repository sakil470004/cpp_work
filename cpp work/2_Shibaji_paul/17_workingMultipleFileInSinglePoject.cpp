#include "17_workingMultipleFileInSinglePoject.h"



string Car::toString()
{
    ostringstream oss;
    oss << "Color of the Car : " << color << endl;
    oss << "Current Speed : " << speed << endl;
    if (isEngineOn)
        oss << "Engine is On" << endl;
    else
        oss << "Engine is Off" << endl;
    return oss.str();
}

void Car::startEngine()
{
    if (!isEngineOn)
    {
        isEngineOn = true;
    }
}
void Car::stopEngine()
{
    if (isEngineOn)
    {
        isEngineOn = false;
        speed = 0;
    }
}

//constructor
Car::Car()
{
    color = "Gray";
    speed = 0;
    isEngineOn = false;
}
Car::Car(string color)
{
   this->color = color; //i cannot write here this.color like i did in java
    speed = 0;
    isEngineOn = false;
}

void Car::acceleration()
{
    if (isEngineOn)
    {
        speed += 10;
    }
}
void Car::applyBreak()
{
    if (speed - 8 >= 0)
        speed -= 8;
    else
        speed = 0;
}
int Car::getSpeed()
{
    return speed;
}