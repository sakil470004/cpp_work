//date: 2021-03-23
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int Fibonacci(int N)
{
    int Fib[N + 1];
    int i;
    Fib[0] = 0;
    Fib[1] = 1;
    for (i = 2; i <= N; i++)
        Fib[i] = Fib[i - 1] + Fib[i - 2];

    return Fib[N];
}
int main()
{
    int n;
    cin >> n;
    if (n <= 1)
        cout << "fib n==" << n;
    else
        cout << "fib(" << n << ")= " << Fibonacci(n) << endl;

    return 0;
}