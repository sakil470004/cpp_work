//date: 2021-03-14
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

template <typename T>
class Test
{
private:
    T x, y;

    public:
    Test(T x, T y);
    // {
    //     this->x = x;
    //     this->y = y;
    // }
    T getSum();
};

//create a construcor;
// template <typename T,typename U>//i can also use multiple Type
template <typename T>
Test<T>::Test(T x, T y)
    {
        this->x = x;
        this->y = y;
    }

template <typename T>
T Test<T>::getSum()
{
    return x + y;
}

int main()
{

Test<int> t1(10,30);
Test<string> t2("First","Second");
cout<<t1.getSum()<<endl;
cout<<t2.getSum()<<endl;
    return 0;
}