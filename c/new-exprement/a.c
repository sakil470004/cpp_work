#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main()
{
    char ch[10];
    // scanf("%s", &ch);
gets(ch);
    ch[0] = toupper(ch[0]);
puts(ch);
    return 0;
}