//date: 2021-03-14
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

class Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    int getAge() const
    {
        return age;
    }
    string getName() const
    {
        return name;
    }
    bool operator<(const Person &p) const
    {
        return this->getAge() < p.getAge();
    }
    bool operator>(const Person &p) const
    {
        return this->getAge() > p.getAge();
    }
};

template <typename T>
int compareTo(T a, T b)
{
    if (a < b)
    {
        return -1;
    }
    else if (a > b)
    {
        return +1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    { //the bacate for my esayness
        string x = "sakil", y = "tanbir", i;
        i = to_string(compareTo(x, y));
        cout << i << endl;
    }
    {
        int x = 232, y = 545, i;
        i = compareTo(x, y);
        cout << i << endl;
    }
    {
        double x = 2324.5, y = 1545.43, i;
        i = compareTo(x, y);
        cout << i << endl;
    }
    int i;
    Person p1("Jhon ", 35), p2("Sakil", 20);
    i = compareTo(p1, p2);
    cout << i << endl;
    return 0;
}