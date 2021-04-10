//date: 2021-04-06
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int add(int a, int b)
{
    return a + b;
}
void say_hello()
{
    cout << "Hello , World !" << endl;
}
int main()
{

    // void (*f1)(void);
    
   auto f1 = say_hello;//i can use auto

    // int (*f2)(int, int);

    

   auto f2 = add;//call say_hello function

    f1();
    int k = f2(5, 6);//call add function

    cout << k << endl;

    // cout << (uint64_t)say_hello << endl;
    // cout << (uint64_t)add << endl;

    return 0;
}