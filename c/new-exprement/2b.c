#include <stdio.h>
#include <string.h>
int main()
{
    int a, count = 0, len;
    char string[10000];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%s", &string);

        len = strlen(string);

        if (10>=len)
        {
            printf("%s\n", string);
        }
        else
        {
            printf("%c%d%c\n", string[0], len - 2, string[len - 1]);
        }
    }
    return 0;
}