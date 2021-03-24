#include <stdio.h>
#include <stdlib.h>
float point = 0;
int fail = 0, aplus = 0, aa = 0, aminus = 0, bplus = 0, bb = 0, bminus = 0, cc = 0, cplus = 0, dd = 0, ff = 0;
int numberChecker(int number)
{
    //chack which point pound in a sub
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
        point = point * 0;
        fail = fail + 1;
    }
}
//It's help to store student data
struct students
{
    char name[30];
    float totalPoint;
} std[2000];

int main()
{
    int user, printer;
    printf("Enter your student number?\n");
    scanf("%d", &user);
    printer = user;
    //started to input data
    for (int i = 1; i <= user; i++)
    {
        printf("Enter student name:\n");
        scanf("%s", std[i].name);
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
        //check pass or fail
        if (fail == 0)
        {
            avgPoint = point / 4;
            printf("You Total GPA %0.2f\n\n", avgPoint);
            std[i].totalPoint = point / 4;
        }
        else
        {
            printf("You are fail\n");
        }
        //count how many student get therir grade
        point = point / 4;
        if (std[i].totalPoint == 0)
        {
            ff = ff + 1;
        }
        else if (2.25 > point)
        {
            dd = dd + 1;
        }
        else if (2.50 > point)
        {
            cc = cc + 1;
        }
        else if (2.75 > point)
        {
            cplus = cplus + 1;
        }
        else if (3.25 > point)
        {
            bb = bb + 1;
        }
        else if (3.00 > point)
        {
            bminus = bminus + 1;
        }
        else if (3.50 > point)
        {
            bplus = bplus + 1;
        }
        else if (3.75 > point)
        {
            aminus = aminus + 1;
        }
        else if (4 > point)
        {
            aa = aa + 1;
        }
        else if (point == 4)
        {
            aplus = aplus + 1;
        }
        fail = 0;
        point = 0;
    }
    //print student details
    for (int j = 1; j <= printer; j++)
    { FILE *ptr=NULL;
                ptr = fopen("details.txt", "a+");

        printf("The Student %d Name :%s\n", j, std[j].name);
        fprintf(ptr,"\nThe Student %d Name :%s\n", j, std[j].name);
        printf("The Student %d point :%0.2f\n\n\n\n", j, std[j].totalPoint);
        fprintf(ptr,"The Student %d point :%0.2f\n\n", j, std[j].totalPoint);
        fclose(ptr);
         
    }
    //check student grade
    if (aplus != 0)
    {
        printf("%d student got A+\n", aplus);
    }
    if (aa != 0)
    {
        printf("%d student got A\n", aa);
    }
    if (aminus != 0)
    {
        printf("%d student got A-\n", aminus);
    }
    if (bplus != 0)
    {
        printf("%d student got B+\n", bplus);
    }
    if (bb != 0)
    {
        printf("%d student got B\n", bb);
    }
    if (bminus != 0)
    {
        printf("%d student got B-\n", bminus);
    }
    if (cplus != 0)
    {
        printf("%d student got C+\n", cplus);
    }
    if (cc != 0)
    {
        printf("%d student got C\n", cc);
    }
    if (dd != 0)
    {
        printf("%d student got D\n", dd);
    }
    if (ff != 0)
    {
        printf("%d student  fail\n", ff);
    }

    return 0;
}