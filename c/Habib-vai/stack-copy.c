#include <stdio.h>
#include <stdlib.h>

int *p, *tos, stack[5];
int push(int number)
{
    p++;
    if (p == (tos + 5))
    {
        printf("Stack overflow");
        exit(1);
    }
    *p = number;
}
int pop()
{
    if (p==tos)
    {
        printf("stack underflow");
        exit(1);
    }
    p--;
    return *(p+1);
}
int main()
{
    int number;
    p=stack;
    tos=p;
    do{
        printf("Enter a number for keep in satck (-1 for quit ,0 for pop):");
        scanf("%d",&number);
        if (number!=0)
        {
            push(number);
        }
        else
        {
            printf("This is it %d\n",pop());
        }
        
    }while(number!=-1);
    return 0;
}