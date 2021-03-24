#include <stdio.h>
int main()
{
    /*lable:
        printf("\n we are inside label");
        goto end;
        printf("\n Hello world\n ");
        goto lable;
        end:
            printf("\n We are at end");*/

    int i, j, num;
    for (i = 0; i < 8; i++)
    {
        printf("%d", i);
        for (j = 0; j < 8; j++)
        {
            printf("\nEnter the number.Enter 0 to exit\n ");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}
