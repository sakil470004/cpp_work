//date: 2021-04-06
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

bool isEven(int val)
{
    return val % 2 == 0;
}
bool isOdd(int val)
{
    return val % 2 != 0;
}
bool isPrime(int val)
{
    bool prime = true;
    for (int i = 2; i <= sqrt(val); i++)
    {
        if (val % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

template <class Iterator>
int count_function(Iterator start, Iterator end, auto criteria)
{
    int count = 0;
    for (; start != end; ++start)
    {
        if (criteria(*start))
            count++;
    }
    return count;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int count1 = count_function(v.begin(), v.end(), isOdd);
    cout << count1 << endl;
    list<int> lst{3, 5, 6, 7, 8, 9, 1, 2, 19};
    int count2 = count_function(lst.begin(), lst.end(), isEven);
    cout << count2<<endl;
    
    int count3 = count_function(lst.begin(), lst.end(), isPrime);
    cout << count3<<endl;

    return 0;
}