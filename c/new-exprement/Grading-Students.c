#include <stdio.h>
int main()
{
    int n, a, arr[100];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > 37 && a % 5 >= 3)
        {
            a = a / 5;
            a = a * 5;
            a = a + 5;
            arr[i] = a;
        }
        else{
            arr[i]=a;
        }
    }

    for (int i = 1; i <= n; i++)
    {
      printf("%d\n",arr[i]);
      
    }

    return 0;
}