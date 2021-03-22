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

void printEmployee(vector<Employee> &list)
{

    for (int i = 0; i < list.size(); i++)
    {
        Employee e = list[i];
        cout << "Emp Id : " << e.empId << endl;
        cout << "Emp name : " << e.name << endl;
        cout << "Emp salary : " << e.salary << endl
             << endl;
    }
}

int main()
{
    vector<Employee> empList;
    Employee e1{10001, "John", 7500.0};
    Employee e2{10002, "Sakil", 7000.0};
    Employee e3{10003, "Tanbir", 8000.0};
    Employee e4{10004, "Tahi", 9000.0};

    empList.push_back(e1);
    empList.push_back(e2);
    empList.push_back(e3);
    empList.push_back(e4);
    // for (int i = 0; i < empList.size(); i++)
    // {
    //     Employee e = empList[i];
    //     cout<<"Emp Id : "<<e.empId<<endl;
    //     cout<<"Emp name : "<<e.name<<endl;
    //     cout<<"Emp salary : "<<e.salary<<endl<<endl;
    // }
    printEmployee(empList);
    return 0;
}