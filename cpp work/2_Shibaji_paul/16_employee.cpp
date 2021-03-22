#include "16_employee.h"

Employee::Employee(std::string name, double rate)
{
    this->name = name;
    this->rate = rate;
    is_added = false;
}

std::string Employee::getName()const{
    return name;
}

double Employee::getRate() const{
    return rate;
}

void Employee::setRate(double rate){
    this->rate = rate;
}

void Employee::addHours(int hours){
    hoursWorked.push_back(hours);
    is_added = true;
}

double Employee::getSalary()const{
    int sum = 0;
    if (is_added){
        for(auto v : hoursWorked){
            sum += v;
        }
        if (sum > 40){
            t_salary = (sum - 40) * (rate * 1.5) + 40 * rate;
        }
        else{
            t_salary = sum * rate;
        }
        is_added = false;
    }
    return t_salary;
}

void printEmployee(const Employee& e){
    std::cout << "Name: " << e.getName() << endl;
    std::cout << "Pay Rate: " << e.getRate() << endl;
    std::cout << "Salary: " << e.getSalary() << endl;
}
