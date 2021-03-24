#include<stdlib.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{int m ,n ,sum = 0 ;
    int a[3][4],b[4][2],result[3][2];
//1st martix;
    printf("Enter the your first martix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
   
//2nd martix;
    printf("Enter the second martix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    
    //calculate the result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
                for (int k = 0; k < 4; k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                result[i][j]=sum;
                sum=0;
        }
        
    }
    
    //printing result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    
     return 0;
}