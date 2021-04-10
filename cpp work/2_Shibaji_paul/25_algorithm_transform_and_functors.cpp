//date: 2021-04-08
#include <bits/stdc++.h>
#include <algorithm> //for count_fuction
#include <vector>
using namespace std;
#define ullint unsigned long long int

class cent_to_fehr
{
public:
    double operator()(double c_value)
    {
        double f_value = c_value * (9.0 / 5.0) + 32.0;

        return f_value;
    }
};

void displayVector(vector<auto> &v)
{
    cout << "content of the vector is :" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " , ";
    }
    cout << endl;
}


struct convert
{
    string operator()(string str)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        return str;
    }
};

int main()
{
    vector<double> c_temp{10, 25, 35.9, 4.9, -57, -32.0};

    vector<double> f_temp(6);

    // f_temp.resize(c_temp);

    transform(c_temp.begin(), c_temp.end(), f_temp.begin(), cent_to_fehr());
    displayVector(c_temp);
    displayVector(f_temp);
    string str{"Hello Sakil"};
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    vector<string> names{"Soru", "Koru", "Foku", "Sakil"};
    displayVector(names);
    transform(names.begin(), names.end(), names.begin(), convert());
    displayVector(names);
    return 0;
}
