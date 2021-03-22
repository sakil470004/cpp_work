#include <iostream>

using namespace std;

// struct type to represent employee record
struct Employee{
    int empId;
    string name;
    double salary;
};

void inputEmployee(Employee e[], int size){
    for(int i = 0; i < size; ++i){
        cout << "Emp Id: ";
        cin >> (e+i)->empId;
        cout << "Emp Name: ";
        cin >> (e+i)->name;
        cout << "Salary: ";
        cin >> (e+i)->salary;
    }

}

void printEmployee(Employee e[], int size){
    cout << "Employee Details: " << endl;
    for(int i = 0; i < size; ++i){
        cout << "Employee Id: " << (e+i)->empId << endl
             << "Name: " << (e+i)->name << endl
             << "Salary: " << (e+i)->salary << endl;
        cout << "----------------------------" << endl;
    }

}

int main()
{
    const int SIZE = 3;
    Employee e[SIZE];
    /*
    e[0].empId = 1;
    e[0].name = "John";
    e[0].salary = 5000.0;

    e[1].empId = 2;
    */

    inputEmployee(e, SIZE);
    printEmployee(e, SIZE);



    return 0;
}
