//date: 2021-04-08
#include <bits/stdc++.h>
#include<algorithm>//for count_fuction

using namespace std;
#define ullint unsigned long long int


class functor_odd{
public :
bool operator()(int val){
    return val%2!=0;
}

};
class functor_even{
public :
bool operator()(int val){
    return val%2==0;
}

};

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    // criteria_functor_even func_obj1(7, 13);
    int count1 = count_if(v.begin(), v.end(), functor_even());
    cout << "Total even integers in the vector " << count1 << endl;

    return 0;
}
