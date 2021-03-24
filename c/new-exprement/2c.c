#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    scanf("%s", &ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch != '\0')
        {
            ch[i] = tolower(ch[i]);
        }
            ch[i]=toupper(ch[i]);
    }

    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'y')
        {
        }
        else
        {
            printf(".%c", ch[i]);
        }
    }

    return 0;
}