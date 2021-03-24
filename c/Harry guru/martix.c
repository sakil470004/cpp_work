#include<stdio.h>
int main(){

    int marks[2][4]={ {34,56,67,78},
                      {45,234,55,66}};
// for (int i = 0; i < 4; i++)
// {
//     printf("Enter the value of %d element of the array\n",i);
//     scanf("%d",&marks[i]);
// }
for (int i = 0; i < 2; i++)
{
    for ( int j = 0; j < 4; j++)
    {
       printf(" The value of %d , %d element of the array is %d\n",i,j, marks[i][j]); 
    }
    
    
}





    // marks[0]=34;
    // printf("\n Marks of student 1 is %d",marks[0]);
    // marks[0]=000;
    // marks[1]=100;
    // marks[2]=200;
    // marks[3]=300;
    // printf("\n Marks of student 1 is %d",marks[0]);
    // printf("\n Marks of student 1 is %d",marks[1]);
    // printf("\n Marks of student 1 is %d",marks[2]);
    // printf("\n Marks of student 1 is %d",marks[3]);
    return 0;
}