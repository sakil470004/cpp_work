//date: 2021-04-08
#include <bits/stdc++.h>
#include <algorithm> //for count_fuction

using namespace std;
#define ullint unsigned long long int

class functor_odd
{
public:
    bool operator()(int val)
    {
        return val % 2 != 0;
    }
};
class functor_even
{
public:
    bool operator()(int val)
    {
        return val % 2 == 0;
    }
};

void displayVector(vector<int> &v)
{
    cout << "content of the vector is :" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " , ";
    }
    cout << endl;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    // criteria_functor_even func_obj1(7, 13);
    // int count1 = count_if(v.begin(), v.end(), functor_odd());
    // cout << "Total even integers in the vector " << count1 << endl;
    displayVector(v);
    auto it = remove_if(v.begin(), v.end(), functor_odd());

    displayVector(v);
    v.erase(it, v.end());
    displayVector(v);
    return 0;
}
