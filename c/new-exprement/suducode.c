#include <stdio.h>

int main()
{
 long long  int a,b,c,d;
   a=1000000000;
   scanf("%lld",&b);
   c=(long long)a*b;   
   for (int i = 1; i <=b; i++)
   {
       c=c+i;
       
   }
   printf("%lld",c);

    return 0;
}