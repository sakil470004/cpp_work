#ifndef anything
#define anything

#include <iostream>
#include <sstream>
#include <string>
using namespace std;



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


#endif