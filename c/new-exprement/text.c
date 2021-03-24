// percentageC= arr[0][0]+arr[1][1]+arr[2][2];
// percentageR=arr[0][2]+arr[1][1]+arr[2][0];
#include <stdio.h>
int main()
{
    int n, store, c = 0, r = 0, s = 0, total;
    double percentageC, percentageR, percentageS;
    char m[2];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%s", &store, &m);
        if (m[0] == 'C')
            c += store;
        else if (m[0] == 'R')
            r += store;
        else if (m[0] == 'S')
            s += store;
    }
    total = c + r + s;
    percentageC = (c / (total * 1.0)) * 100.00;
    percentageR = (r / (total * 1.0)) * 100.00;
    percentageS = (s / (total * 1.0)) * 100.00;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", percentageC);
    printf("Percentual de ratos: %.2lf %%\n", percentageR);
    printf("Percentual de sapos: %.2lf %%\n", percentageS);
    return 0;
}