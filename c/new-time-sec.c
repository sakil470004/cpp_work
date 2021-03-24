#include <stdio.h>
#include <time.h>
int dayofweek(int d, int m, int y)
{
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 +
            y / 400 + t[m - 1] + d) %
           7;
}

int main()
{
    int dd, mm, yy, day, hour, min, sec;
    printf("Enter Your Birth Day \nDD MM YY and time hour-minute-s:");
    scanf("%d %d %d %d %d %d", &dd, &mm, &yy,&hour,&min,&sec);
    day = dayofweek(dd, mm, yy);
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("current time now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
     if(day == 1)
    {
        printf("Monday");
    }
    else if(day == 2)
    {
        printf("Tuesday");
    }
    else if(day == 3)
    {
        printf("Wednesday");
    }
    else if(day == 4)
    {
        printf("Thursday");
    }
    else if(day == 5)
    {
        printf("Friday");
    }
    else if(day == 6)
    {
        printf("Saturday");
    }
    else if(day == 0)
    {
        printf("Sunday");
    }
    printf(" is your Birthday \n");

  
    int cday = tm.tm_mday, uday = dd, cmonth = tm.tm_mon+1, umonth = mm, cyear = tm.tm_year+1900, uyear = yy;
    int x, chour = tm.tm_hour, cmin = tm.tm_min, csec = tm.tm_sec, uhour = hour, umin = min, usec = sec;
    // birthday
    cyear=cyear-uyear;
    if (cday > uday)
    {
        cday = cday - uday;
    }
    else if (cday < uday)
    {
        if (cmonth == 1 || cmonth == 5 || cmonth == 3 || cmonth == 7 || cmonth == 8 || cmonth == 10 || cmonth == 12)
        {
            x = 31;
        }
        else if (cmonth == 4 || cmonth == 6 || cmonth == 9 || cmonth == 11)
        {
            x = 30;
        }
        else if ((cyear % 400 == 0 || cyear % 4 == 0) && cyear % 100 != 0)

          cmonth=  cmonth - 1;
        cday = x + cday - uday;
    }
    else
    {
        cday = 0;
    }
    if (cmonth > umonth)
    {
        cmonth = cmonth - umonth;
    }
    else if (cmonth < umonth)
    {
        cyear=cyear - 1;
        cmonth = 12 + cmonth - umonth;
    }
    else
    {
        cmonth = 0;
    }
    // time
    if (chour > uhour)
    {
        chour = chour - uhour;
    }
    else if (chour < uhour)
    {
        cday - 1;
        chour = 24 + chour - uhour;
    }
    else
    {
        chour = 0;
    }
    if (cmin > umin)
    {
        cmin = cmin - umin;
    }
    else if (cmin < umin)
    {
        chour - 1;
        cmin = 60 + cmin - umin;
    }
    else
    {
        cmin = 0;
    }

    if (csec > usec)
    {
        csec = csec - usec;
    }
    else if (csec < usec)
    {
        cmin - 1;
        csec = 60 + csec - usec;
    }
    else
    {
        csec = 0;
    }
printf("Your are alive %d hour %d min %d sec \n    %d day %d month %d year\n",chour,cmin,csec,cday,cmonth,cyear);


    return 0;
}
