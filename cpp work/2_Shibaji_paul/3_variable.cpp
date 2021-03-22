#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int age {10};

    signed x;

    cout << "Age is: " << age << endl;

    double rate_of_interest {0.07};
    cout << "Rate of interest: " << rate_of_interest << endl;

    auto myVar = 9.5;
    auto myIntVar = 0;

    cout << "Type of myVar: " << typeid(myVar).name() << endl;
    cout << "Type of myIntVar: " << typeid(myIntVar).name() << endl;



    return 0;
}
