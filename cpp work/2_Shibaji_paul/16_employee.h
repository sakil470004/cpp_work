#ifndef EMPLOYEE_H
#define EMPLOYEE_H
//if not define Employee_h define Employee_h;
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Employee class represents an Employee type
class Employee
{
private:
     string name;             // name of Employee
     vector<int> hoursWorked; // hours worked on each day
     double rate;             // pay rate
     mutable bool is_added;
     mutable double t_salary;

public:
     Employee(string name, double rate); // constructor
     string getName() const;             // getter for name
     double getRate() const;             // getter for rate
     void setRate(double rate);          // setter for rate
     void addHours(int hours);           // add hours passed into the vector
     double getSalary() const;           // calculates and returns salary
};
// following method prints the detail of employee into the console
// this is not a member method of employee class, instead just a global method.
void printEmployee(const Employee &e); //for read only here give const


#endif                                 // EMPLOYEE_H
