#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30];
    printf("Enter you string You want to check\n");
    scanf("%s", &str1);
    char str2[30], str3[30];
    //There is right
    strcpy(str3, str1);
    strcpy(str2, strrev(str1));
    //when we use strev the store the value in str;
    if (strcmp(str3, str2) == 0) //both str same given to me 0, thats way i use 0
    {
        printf("The string are palindrome");
    }
    else
    {
        printf("The string are not palindrome");
    }
    return 0;
}