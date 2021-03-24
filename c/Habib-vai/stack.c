#include <stdio.h>
#include <stdlib.h>

int *p, *tos, stack[5];
void push(int i)
{
    p++;
    if (p == (tos + 5))
    {
        printf("stack overflow");
        exit(1);
    }
    *p = i;
}
int pop(void)
{
    if (p == tos)
    {
        printf("stack underflow");
        exit(1);
    }
    p--;
    return *(p + 1);
}

main()
{
    int number;
    p = stack;
    tos = p;
    do
    {
        printf("Enter a number for keep in satck (-1 for quit,0 for pop):");
        scanf("%d", &number);
        if (number != 0)
            push(number);
        else
            printf("This is it %d\n", pop());
    } while (number != -1);
    return 0;
}
