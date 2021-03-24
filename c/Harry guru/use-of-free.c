#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 4555)
    {
        printf("Welcome to code with Sakil");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
            free(i2);//if you use over memory you can use more than apps
    }
    return 0;
}