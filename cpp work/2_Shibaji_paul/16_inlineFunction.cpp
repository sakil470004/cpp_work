//date: 2021-03-05
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

class Human
{
private:
    string _name;

public:
    Human(string name) : _name(name)
    {
    }
    inline void smile()
    {
        cout << _name << " is smiling" << endl;
    }
};

int main()
{
    Human h("John");
    h.smile();

    return 0;
}