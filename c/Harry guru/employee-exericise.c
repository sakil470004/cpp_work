#include <stdio.h>
//struct
struct employee
{
    char name[30];
    int empId;
    char router[30];
    int Kms;
} emp[2000];

int main()
{
    int count;
    printf("\n How many driver you want add?");

    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        // red Driver details
        printf("\nEnter Driver details number %d:", i);
        printf("\nName ?");
        scanf("%s", &emp[i].name);
        printf("\nDriving License ?");
        scanf("%d", &emp[i].empId);
        printf("\nRouter ?");
        scanf("%s", &emp[i].router);
        printf("\nKms ?");
        scanf("%d", &emp[i].Kms);
    }
    for (int i = 1; i <= count; i++)
    {
        printf("\nEntered detail for Driver %d", i);
        printf("\nName:%s", emp[i].name);
        printf("\nName:%d", emp[i].empId);
        printf("\nName:%s", emp[i].router);
        printf("\nName:%d", emp[i].Kms);
    }

    return 0;
}