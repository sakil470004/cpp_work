#include <Stdio.h>
#include <conio.h>
#include <string.h>

main()
{
    char x[30];
    enum weekday{saturday,sunday,monday,tuesday,wednesday,thursday,friday}today;

    printf("Enter the day name:\n");
    gets(x);

    if(!strcmpi(x,"saturday"))
    today=saturday;
    else if(!strcmpi(x,"sunday"))
    today=sunday;
    else if(!strcmpi(x,"monday"))
    today=monday;
    else if(!strcmpi(x,"tuesday"))
    today=tuesday;
    else if(!strcmpi(x,"wednesday"))
    today=wednesday;
    else if(!strcmpi(x,"thursday"))
    today=thursday;
    else if(!strcmpi(x,"friday"))
    today=friday;

    switch(today)
    {
        case saturday : printf("This is the frist day of the week");
                        break;
        case sunday : printf("This is the second day of the week");
                        break;
        case monday : printf("This is the third day of the week");
                        break;
        case tuesday : printf("This is the forth day of the week");
                        break;
        case wednesday : printf("This is the fifth day of the week");
                        break;
        case thursday : printf("This is the sixth day of the week");
                        break;
        case friday : printf("This is the seventh day of the week");
                        break;
    }
    getch();
    return 0;
}
