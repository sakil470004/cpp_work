#include<stdio.h>
int main()
{int a;
scanf("%lld",&a);
long long int arr[a],sum=0;
    for (int i = 0; i < a; i++)
    {
        scanf("%lld",&arr[i]);
    sum +=arr[i];
    }
    printf("%lld",sum);
     return 0;
}