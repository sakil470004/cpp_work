#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter The you first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter the %d %d element of firsrt martix\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter the %d %d element of second martix\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Calculate the result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++) //3rd for loop for calculation
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    //print result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}