#include <stdio.h>
float fail, point = 0;
int numberChecker(int number)
{
    if (number > 79)
    {
        printf("you got 4.00\n");
        point = point + 4;
    }
    else if (number > 74)
    {
        printf("you got 3.75\n");
        point = point + 3.75;
    }
    else if (number > 69)
    {
        printf("you got 3.50\n");
        point = point + 3.50;
    }
    else if (number > 64)
    {
        printf("you got 3.25\n");
        point = point + 3.25;
    }
    else if (number > 59)
    {
        printf("you got 3.00\n");
        point = point + 3.00;
    }
    else if (number > 54)
    {
        printf("you got 2.75\n");
        point = point + 2.75;
    }
    else if (number > 49)
    {
        printf("you got 2.50\n");
        point = point + 2.50;
    }
    else if (number > 44)
    {
        printf("you got 2.25\n");
        point = point + 2.25;
    }
    else if (number > 39)
    {
        printf("you got 2.00\n");
        point = point + 2.00;
    }
    else
    {
        printf("You are fail\n");
        fail = fail + 1;
    }
}

int main()
{
    float avgPoint;
    int cse, english, math, physich, number;
    //inter user input
    printf("How much have you got in CSE\n");
    scanf("%d", &cse);
    numberChecker(cse);
    printf("How much have you got in ENGLISH\n");
    scanf("%d", &english);
    numberChecker(english);
    printf("How much have you got in MATH\n");
    scanf("%d", &math);
    numberChecker(math);
    printf("How much have you got in PHYSICH\n");
    scanf("%d", &physich);
    numberChecker(physich);

    if (fail == 0)
    {
        avgPoint = point / 4;
        printf("You Total GPA %0.2f", avgPoint);
    }
    else
    {
        printf("You are fail");
    }

    return 0;
}