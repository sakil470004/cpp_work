#include <math.h>
#include <stdio.h>
int main()
{
    int arr[10][10];
    int uSide, nSide, ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                uSide = i+1;
                nSide = j+1;
            }
        }
    }
    ans = abs(uSide - 3) + abs(nSide - 3);
    printf("%d", ans);
    return 0;
}