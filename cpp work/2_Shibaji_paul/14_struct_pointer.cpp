//date: 2021-02-27
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

struct Employee
{
    int empId;
    string name;
    double salary;
};

int main()
{
    /*
    Employee e;
    Employee* eptr = &e;

    eptr->empId = 5;
    eptr->name = "John";
    eptr->salary = 5000.00;

    cout << eptr->empId << endl;
    cout << e.name << endl;
    cout << e.salary << endl;
    */

    Employee *p = new Employee;
    p->empId = 10;
    p->name = "Terry";
    p->salary = 6000.00;

    cout << (*p).empId << endl;
    cout << p->empId << endl;
    cout << (*p). name << endl;
    cout << (*p).salary << endl;

    delete p;
    return 0;
}