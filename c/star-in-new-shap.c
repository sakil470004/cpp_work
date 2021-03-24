#include <stdio.h>

int main()
{
    int col, row;
    printf("How many colum you need?\n");
    scanf("%d", &col);
    printf("How many row you need?\n");
    scanf("%d", &row);
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
        {
                if (j==1||i==1||i==col ||j==row)
                {
                       printf("*");
                }
                else
                {
                    printf(" ");
                }
                
                
             
   
        }
        printf("\n");
    }
    return 0;
}