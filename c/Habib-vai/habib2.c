#include <stdio.h>
 
/*structure declaration*/
#include<stdio.h>
#include<conio.h>
//#include<string.h>
int b=6;
main()
{

    struct time
    {
        int day,year;
        char month[20];
    };

    struct
    {
        char ItemName[50];
        float price;
        struct time t ;
    }a[b];

    int i;
    //clrscr();

    for(i=0;i<=2;i++)
    {

        printf("Enter data for item number %d\n",i+1);

        printf("Item Name: \n");
        fflush(stdin);
        gets(a[i].ItemName);

        printf("Price: \n");
        scanf("%f",&a[i].price);

        printf("time of procurement: \n");
        printf("Enter the day/month/year: \n");
        scanf("%d%s%d",&a[i].t.day,&a[i].t.month,&a[i].t.year);

    }

    for(i=0;i<=2;i++)
    {
        printf(" for item number %d: \n",i+1);

        printf("Item Name %s",a[i].ItemName); //puts(a[i].ItemName);

        printf("\nPrice: %f",a[i].price);

        printf("\n of procurement: \n");
        printf("Day/Month/Year: %d %s %d",a[i].t.day,a[i].t.month,a[i].t.year);
    }

    getch();
    return 0;
}