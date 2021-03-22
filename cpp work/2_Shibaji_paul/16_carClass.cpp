#include <iostream>
#include <sstream>
#include <string>

using namespace std;
/*
    before writing a class to represent a thing, be sure about what are the properties
    and behaviors that you are going to include for the class.
    For our example Car class, just to make it simple, we consider there is color,  speed as
    properties and startEngine, stopEngine, acceleration, applyBrake
    as behaviors. We can add more properties and behaviors to make the car class more general,
    flexible and nearer to real world car. For the beginning this will be fine to limit
    ourself only these features.

*/

class Car
{
private:
    string color;
    int speed;
    bool isEngineOn;

public:
    Car(); //write outside the class
    Car(string c);

    // Car(string c, int sp)
    // {
    //     color = c;
    //     speed = sp;
    // }
    void acceleration();
    void applyBreak();
    int getSpeed();
    void startEngine();
    void stopEngine();
    string toString();
};

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

int main()
{
    Car car1, car2("Red");
    cout << car1.toString() << endl;
    car1.startEngine();
    cout << car1.toString() << endl;
    cout << car2.toString() << endl;
    car2.startEngine();

    car1.acceleration();
    car2.acceleration();

car1.applyBreak();


    cout << car1.toString() << endl;
    cout << car2.toString() << endl;

    return 0;
}
