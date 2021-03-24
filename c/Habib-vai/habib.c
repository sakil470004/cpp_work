#include <stdio.h>
/*structure declaration*/
struct employee
{
    char name[30];
    int empId;
    char father[];
}emp[2000];


int main()
{
    int count;
    printf("How many people you want add?\n");
    scanf("%d",&count);
    for (int i = 1; i <= count; i++)
    {
     
    
    /*read employee details*/
    printf("\nEnter details number %d:\n",i);
    printf("Name ?:\n");
    scanf("%s",&emp[i].name);
    printf("ID ?:");
    scanf("%d", &emp[i].empId);
    printf("Father?:\n");
    scanf("%s", &emp[i].father);
    }
for (int i = 1; i <= count; i++)
{
     /*print employee details*/
    printf("\nEntered detail is:");
    printf("\nName: %s", emp[i].name);
    printf("\nId: %d", emp[i].empId);
    printf("\nfather name: %s\n", emp[i].father);
}
    return 0;
}