//date: 2021-04-08
#include <bits/stdc++.h>
#include <algorithm> //for count_fuction
#include <vector>
using namespace std;
#define ullint unsigned long long int

void displayVector(vector<auto> &v)
{
    cout << "content of the vector is :" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " , ";
    }
    cout << endl;
}

struct display
{
    void operator()(int val)
    {
        cout << val << " ";
    }
};

struct add_ints
{
    int &t_sum;
    add_ints(int &sum) : t_sum(sum)
    {
    }
    void operator()(int val)
    {
        t_sum += val;
    }
};

int main()
{
    vector<int> v{10, 25, 35, 4, 57, 32};

    //   for_each(v.begin(),v.end(),display());
    int sum = 0;
    for_each(v.begin(), v.end(), add_ints(sum));
    cout << sum << endl;

    return 0;
}
