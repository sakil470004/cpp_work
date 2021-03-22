//date: 2021-03-18
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

class Employee
{
private:
    string name;
    int age;
    double basic;

public:
    Employee(string name, int age, double basic)
    {
        this->name = name;
        this->age = age;
        this->basic = basic;
    }
    // virtual double calculateSalary()=0;//it is abusturct;
    virtual double calculateSalary()

    {
        double salary = basic + basic * 0.1;
        return salary;
    }
    string getName()
    {
        return name;
    }
};
class Manager : public Employee
{
private:
    double hra; //house rant

public:
    Manager(string name, int age, double basic) : Employee(name, age, basic)
    {
        hra = basic * 0.15;
    }
    double calculateSalary()
    {
        double salary = Employee::calculateSalary();
        salary = salary + hra;
        return salary;
    }
};

class FactoryWorker : public Employee
{
private:
    double tiffinAllowences;

public:
    FactoryWorker(string name, int age, double basic) : Employee(name, age, basic)
    {
        tiffinAllowences = 0.05 * basic;
    }
    double calculateSalary()
    {
        double salary = Employee::calculateSalary();
        salary += tiffinAllowences;
        return salary;
    }
};
class Clerk : public Employee
{
private:
    int otHours; //overtimehours
    double otRate;

public:
    Clerk(string name, int age, double basic, int otHours, double otRate) : Employee(name, age, basic)
    {
        this->otHours = otHours;
        this->otRate = otRate;
    }
    double calculateSalary()
    {
        double salary = Employee::calculateSalary();
        salary += otRate * otHours;
        return salary;
    }
};

class Club
{
public:
    string getMembershipType(Employee *p)
    {
        double salary = p->calculateSalary();
        cout<<salary<<endl;
        if (salary >= 10000.0)
        {
            return "Red";
        }
        else if (salary >= 7500.0)
        {
    
            return "Blue";
        }
        else
        {
            return "Gray";
        }
    }
};

int
main()
{

    Manager *p = new Manager("Sakil", 23, 5000);
    cout << p->calculateSalary() << endl;

Club club;
cout<<club.getMembershipType(new Manager("Alice",45,4343))<<endl;
cout<<club.getMembershipType(new Clerk("Tanbir",45,4343,79,9))<<endl;

// cout<<club.getMembershipType(p);
    return 0;
}