//date: 2021-03-23
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int
#define size 50

int result[size];

int Fibonacci(int N)
{
    if (result[N] == -1)
    {

        if (N <= 1)
            result[N] = N;
        else
            result[N] = Fibonacci(N - 1) + Fibonacci(N - 2);
    }

    return result[N];
}
int main()
{
    for (int i = 0; i < size; i++)
    {
        result[i] = -1;
    }
    result[0] = 0;
    result[1] = 1;

    int n;
    cin >> n;
    if (n <= 1)
        cout << "fib n==" << n;
    else
        cout << "fib(" << n << ")= " << Fibonacci(n) << endl;

    return 0;
}