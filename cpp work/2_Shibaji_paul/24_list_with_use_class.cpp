//date: 2021-04-05
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

class employee
{
private:
    int id;
    string name;
    double pay;

public:
    employee(int id, string name, double pay) : id(id), name(name), pay(pay)
    {
    }
    employee(int id, string name) : id(id), name(name)
    {
        pay = 5000;
    }
    double get_tax()
    {
        if (pay < 10000.0)
            return pay * 0.05;
        else if (pay < 20000)
            return pay * 0.1;
        else
            return pay * 0.2;
    }
    int get_id()
    {
        return id;
    }
    string get_name()
    {
        return name;
    }
    double get_pay()
    {
        return pay;
    }
};

int main()
{

    list<employee> lst;
    // employee e1(1, "Alice", 6700);
    // employee e2(2, "Alex", 6400);

    // lst.insert(lst.end(), e1);
    // lst.insert(lst.end(), e2);

    lst.emplace(lst.end(), 1, "Alice", 6700);
    lst.emplace(lst.end(), 2, "Alex", 6400);
    lst.emplace(lst.end(), 3, "Namid");
    lst.emplace_front(4, "John");
    lst.emplace_back(5, "karim", 6299);

    for (list<employee>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << it->get_id() << ", "
             << it->get_name() << ", "
             << it->get_pay() << ", "
             << it->get_tax() << endl;
    }

    return 0;
}