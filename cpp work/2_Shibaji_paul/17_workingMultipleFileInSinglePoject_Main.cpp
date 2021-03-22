
#include "17_workingMultipleFileInSinglePoject.cpp"
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