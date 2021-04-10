//date: 2021-04-08
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

// bool isEven(int val)
// {
//     return val % 2 == 0;
// }
// bool isOdd(int val)
// {
//     return val % 2 != 0;
// }
// bool isPrime(int val)
// {
//     bool prime = true;
//     for (int i = 2; i <= sqrt(val); i++)
//     {
//         if (val % i == 0)
//         {
//             prime = false;
//             break;
//         }
//     }
//     return prime;
// }

class criteria_base
{

protected:
    int startRange, endRange;
    bool isRange;

public:
    criteria_base()
    {
        isRange = false;
    }
    criteria_base(int startRange, int endRange) : startRange(startRange), endRange(endRange)
    {
        isRange = true;
    }
};

class criteria_functor_odd
    : public criteria_base
{

public:
    criteria_functor_odd() : criteria_base()
    {
    }
    criteria_functor_odd(int startRange, int endRange) : criteria_base(startRange, endRange)
    {
    }
    bool operator()(int val)
    {
        if (!isRange)
        {
            return val % 2 != 0;
        }
        else
        {
            if (val >= startRange && val <= endRange && val % 2 != 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

class criteria_functor_even
    : public criteria_base
{

public:
    criteria_functor_even() : criteria_base()
    {
    }
    criteria_functor_even(int startRange, int endRange) : criteria_base(startRange,  endRange)
    {
    }
    bool operator()(int val)
    {
        if (!isRange)
        {
            return val % 2 == 0;
        }
        else
        {
            if (val >= startRange && val <= endRange && val % 2 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

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

    criteria_functor_even func_obj1(7, 13);
    int count1 = count_function(v.begin(), v.end(), func_obj1);
    cout << "Total even integers in the vector " << count1 << endl;

    return 0;
}
