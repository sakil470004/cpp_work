#include <stdio.h>
#include <time.h>
int count = 0, i, day, month, year2 = 0, result;
int yearCalculate(int day, int month, int year2)
{
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
    if (month > 2 && (year2 % 100 != 0 && year2 % 400 == 0 || year2 % 4 == 0)) //2
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
    if (month > 12)
    {
        count = count + 30;
    }

    count = count + day;
}

int weekendCalculator(int count)
{
    if (count % 7 == 1)
    {
        printf("This is MOnday\n");
    }
    else if (count % 7 == 2)
    {
        printf("This is Tuesday\n");
    }
    else if (count % 7 == 3)
    {
        printf("This is Wednestday\n");
    }
    else if (count % 7 == 4)
    {
        printf("This is Thusday\n");
    }
    else if (count % 7 == 5)
    {
        printf("This is Friday\n");
    }
    else if (count % 7 == 6)
    {
        printf("This is Suterday\n");
    }
    else if (count % 7 == 0)
    {
        printf("This is Sunday\n");
    }
    else
    {
        printf("YOu wrote a wrong things\n");
    }
    printf("\n\n\n\n");
}

int main()
{
    int count2 = 0, yearLast, monthLast, dayLast, sirialNO;

    printf("Which you wnat.\n1 for Chechacking birthday weekend\n2 for chechacking your age\n3 for checking your age with sceond and time\n0 for end \n");
    scanf("%d", &sirialNO);

    if (sirialNO == 1)
    {
        printf("YOur day-month-year which you want to know weekend day\n");
        scanf("%d %d %d", &day, &month, &year2);
        yearCalculate(day, month, year2);
        weekendCalculator(count);
    }

    else if (sirialNO == 2)
    {
        printf("YOur birthday day YOur birthday day day-month-year\n");
        scanf("%d %d %d", &day, &month, &year2);
        yearCalculate(day, month, year2);
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        tm.tm_year = tm.tm_year + 1900;
        yearLast = tm.tm_year - year2;
        if (tm.tm_mon > month)
        {
            monthLast = tm.tm_mon - month;
        }
        else if (tm.tm_mon < month)
        {
            yearLast = yearLast - 1;
            monthLast = tm.tm_mon + 12 - month;
        }

        if (tm.tm_mday > day)
        {
            dayLast = tm.tm_mday - day;
        }
        else if (tm.tm_mday < day)
        {
            monthLast = monthLast - 1;
            dayLast = 30 + tm.tm_mday - day; //30 is not fixed need to change it
        }

        printf("You are now %d %d %d", yearLast, monthLast, dayLast);
        printf("\n\n\n\n");
    }
    else if (sirialNO == 3)
    {
        int hourLast, minuteLast, sceondLast;

        printf("YOur birthday day day-month-year\n");
        scanf("%d %d %d", &day, &month, &year2);
        printf("YOur birthday type Hour-minute-second\n");
        scanf("%d %d %d", &hourLast, &minuteLast, &sceondLast);

        yearCalculate(day, month, year2);
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        // printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
        // sceond
        if (tm.tm_sec > sceondLast)
        {
            sceondLast = tm.tm_sec - sceondLast;
        }
        else if (tm.tm_sec < sceondLast)
        {
            tm.tm_min = tm.tm_min - 1;
            sceondLast = 60 + tm.tm_sec - sceondLast;
        }
        if (tm.tm_min > minuteLast)
        {
            minuteLast = tm.tm_min - minuteLast;
        }
        else if (tm.tm_min < minuteLast)
        {
            tm.tm_hour = tm.tm_hour - 1;
            minuteLast = 60 + tm.tm_min - minuteLast;
        }

        if (tm.tm_hour > hourLast)
        {
            hourLast = tm.tm_hour - hourLast;
        }
        else if (tm.tm_hour < hourLast)
        {
            tm.tm_mday = tm.tm_mday - 1;

            hourLast = 24 + tm.tm_hour - hourLast;
        }

        //mount-year-day
        tm.tm_year = tm.tm_year + 1900;
        yearLast = tm.tm_year - year2;
        if (tm.tm_mon > month)
        {
            monthLast = tm.tm_mon - month;
        }
        else if (tm.tm_mon < month)
        {
            yearLast = yearLast - 1;
            monthLast = tm.tm_mon + 12 - month;
        }

        if (tm.tm_mday > day)
        {
            dayLast = tm.tm_mday - day;
        }
        else if (tm.tm_mday < day)
        {
            monthLast = monthLast - 1;

            dayLast = 30 + tm.tm_mday - day; //30 is not fixed need to change it
        }

        printf("You age now %d-%d-%d and time %d hour %d minuts %d second", yearLast, monthLast, dayLast, hourLast, minuteLast, sceondLast);
        printf("\n\n\n\n");
    }

    return 0;
}