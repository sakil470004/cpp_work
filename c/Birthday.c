#include <stdio.h>
int main()
{
    int day, month, count = 0, year2 = 0, i;
    printf("YOur day-month-year which you want to know weekend day\n");
    scanf("%d %d %d", &day, &month, &year2);

    printf("The year is %d\n", year2);
    for (i = 1; i < year2; i++)
    {
        if (year2 >= 1) //1
        {
            count = count + 31;
        }
        if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0) //2
        {
            count = count + 29;
        }
        else
        {
            count = count + 28;
        }
        if (year2 >= 1) //3
        {
            count = count + 31;
        }
        if (year2 >= 1) //4
        {
            count = count + 30;
        }
        if (year2 >= 1) //5
        {
            count = count + 31;
        }
        if (year2 >= 1) //6
        {
            count = count + 30;
        }
        if (year2 >= 1) //7
        {
            count = count + 31;
        }
        if (year2 >= 1) //8
        {
            count = count + 31;
        }
        if (year2 >= 1) //9
        {
            count = count + 30;
        }
        if (year2 >= 1) //10
        {
            count = count + 31;
        }
        if (year2 >= 1) //11
        {
            count = count + 30;
        }
        if (year2 >= 1) //12
        {
            count = count + 31;
        }
    }

    if (month > 1) //13
    {
        count = count + 31;
    }
    if ( month > 2  &&  (year2 % 100 != 0 && year2 % 400 == 0 || year2 % 4 == 0)) //2
    {
        count = count + 29;
    }
    else if (month > 2)
    {
        count = count + 28;
    }
    if (month > 3) //3
    {
        count = count + 31;
    }
    if (month > 4) //4
    {
        count = count + 30;
    }
    if (month > 5) //5
    {
        count = count + 31;
    }
    if (month > 6) //6
    {
        count = count + 30;
    }
    if (month > 7) //7
    {
        count = count + 31;
    }
    if (month > 8) //8
    {
        count = count + 31;
    }
    if (month > 9) //9
    {
        count = count + 30;
    }
    if (month > 10) //10
    {
        count = count + 31;
    }
    if (month > 11) //11
    {
        count = count + 30;
    }
    if(month>12){
        count=count +30;
    }

    count = count + day;
    // if (year2 == 2000)
    // {

    //     count = count - 1;
    // }
    if (count % 7 == 1)
    {
        printf("This is MOnday");
    }
    else if (count % 7 == 2)
    {
        printf("This is Tuesday");
    }
    else if (count % 7 == 3)
    {
        printf("This is Wednestday");
    }
    else if (count % 7 == 4)
    {
        printf("This is Thusday");
    }
    else if (count % 7 == 5)
    {
        printf("This is Friday");
    }
    else if (count % 7 == 6)
    {
        printf("This is Suterday");
    }
    else if (count % 7 == 0)
    {
        printf("This is Sunday");
    }
    else
    {
        printf("YOu wrote a wrong things");
    }
    printf("\n%d", count % 7);

    return 0;
}