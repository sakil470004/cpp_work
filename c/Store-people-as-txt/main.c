#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    char name[30];
    int empId;
    char father[];

} emp[2000];

int main()
{
    int count;
    FILE *ptr=NULL;

    printf("\nHow many people details you want to add:");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    { //read the employee data
        printf("\nEnter details number %d:", i);
        printf("\nName ?");
        scanf("%s", &emp[i].name);
        printf("\nId ?");
        scanf("%d", &emp[i].empId);
        printf("\nFather name ?");
        scanf("%s", &emp[i].father);
    }
    // print the employee data and text
    for (int i = 1; i <= count; i++)
    {
        printf("\nEntered detail for person %d", i);
        ptr = fopen("Store-people-as-txt.txt", "a+");
        fprintf(ptr, "\nEntered detail for person :%d ", i);
        printf("\nName:%s", emp[i].name);
        fprintf(ptr, "\nName: %s", emp[i].name);
        printf("\nId:%d", emp[i].empId);
        fprintf(ptr, "\nId: %d", emp[i].empId);
        printf("\n\nFather Name:%s", emp[i].father);
        fprintf(ptr, "\nFather name: %s", emp[i].father);
    fclose(ptr);
    }

    return 0;
}