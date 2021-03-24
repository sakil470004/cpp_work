#include <stdio.h>
int main()
{
    int N, arr[2], total = 0, totalC = 0, totalR = 0, totalS = 0;
    char ch[2];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[1]);
        scanf("%S", &ch[1]);

        if (ch[1] == 'C')
        {

            totalC = totalC + arr[1];
        }
        else if (ch[1] == 'R')
        {

            totalR = totalR + arr[1];
        }
        else if (ch[1] == 'S')
        {

            totalS = totalS + arr[1];
        }
    }
    total = totalC + totalR + totalS;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);

    double percetageC, percetageR, percetageS;
    percetageC = (totalC * 100.00) / total;
    percetageR = (totalR * 100.00) / total;
    percetageS = (totalS * 100.00) / total;
    printf("Percentual de coelhos: %.2lf %%\n", percetageC);
    printf("Percentual de ratos: %.2lf %%\n", percetageR);
    printf("Percentual de sapos: %.2lf %%\n", percetageS);
    return 0;
}