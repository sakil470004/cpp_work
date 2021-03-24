#include <stdio.h>
//struct
struct employee
{
    char name[30];
    int empId;
    char father[30];
} emp[2000];

int main()
{
    while (1)
    {
        int count;
        if (count != 0)
        {
        printf("\n How many people you want add? or type 0 to end :");

            scanf("%d", &count);
            for (int i = 1; i <= count; i++)
            {
                // red employee details
                printf("\nEnter details number %d:", i);
                printf("\nName ?");
                scanf("%s", &emp[i].name);
                printf("\nID ?");
                scanf("%d", &emp[i].empId);
                printf("\nFather name ?");
                scanf("%s", &emp[i].father);
           //clrscr();
         
            }
        
            for (int i = 1; i <= count; i++)
            {
                printf("\nEntered detail for person %d", i);
                printf("\nName:%s", emp[i].name);
                printf("\nId:%d", emp[i].empId);
                printf("\nFather name:%s", emp[i].father);
            }
        }
        else
        {
            goto end;
        }
    }

end:
    return 0;
}