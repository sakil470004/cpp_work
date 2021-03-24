#include<stdio.h>
int main()
{
int age ;
int marks;
printf("Enter your age\n");
scanf("%d",&age);
switch (age)
{
case 3:
printf("Your age is 3");
printf("\n Enter you is marks\n");
scanf("%d",&marks);
    switch(marks)
    {
        case 45:
        printf("Your mark is 45");
        break;
        default:
    printf("Your mark is not 45");
    break;
    }
    break;
case 23:
printf("Your age is 23");
    break;
    case 33:
printf("Your age is 33");
    break;


default:

printf("Your age is not 3,23 and 33");
    break;
}



    return 0;
}