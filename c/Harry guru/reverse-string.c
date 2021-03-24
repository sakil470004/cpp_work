#include<stdio.h>
#include<string.h>
int main()
{int i=0,len=0,j;
    char str1[30];
    printf("Enter you string You want to check\n");
    scanf("%s",&str1);
    char str2[30];
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for ( j = 0, i = len-1;i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("String 1 =%s\n",str1);
    printf("String 2 =%s\n",str2);
    int d = strcmp(str1,str2);
    if(d==0)
    {
        printf("The string are palindrome");
    }
    else
    {
        printf("The string are not palindrome");
    }
     return 0;
}