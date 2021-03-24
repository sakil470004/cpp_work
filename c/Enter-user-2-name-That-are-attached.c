#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    char str2[50];
    printf("Enter The frist name which you want attached \n");
    gets(str);
    printf("Enter The 2nd name which you want attached \n");
    gets(str2);
    puts(strcat(str,str2));



     return 0;
}