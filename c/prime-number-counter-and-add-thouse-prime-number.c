#include <stdio.h>
int main()
{
    int n , count = 0, total = 0, primeCounter = 0;
    printf("Enter a number you want to know here's prime\n");
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            count++;
            printf("Number %d is a prime number\n", i);

            total = total + i;
        }
    }
    primeCounter = count;
    printf("Prime count %d\n", primeCounter);
    printf("Total add %d\n", total);

    return 0;
}
int isPrime(int n)
{

    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
