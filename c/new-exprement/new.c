#include <stdio.h>

int diagonalDifference(int arr[100][100]){
  int  x, y, sum = 0, sum2 = 0;
    int n;
    scanf("%d", &n);
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0, i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
    }

    x = sum;
    for (int i = 0, j = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if (i + j == n - 1)
            {
                sum2 = sum2 + arr[i][j];
            }
    }

    y = sum2;

   return sum=abs(x-y);

}
int main()
{
    int arr[100][100];
   printf("%d",diagonalDifference(arr));
   
    return 0;
}
