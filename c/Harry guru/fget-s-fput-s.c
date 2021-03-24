#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
   // ptr = fopen("45.text", "r");
    // ptr = fopen("45.text", "w");
    ptr = fopen("45.text", "a+");
//fgetc
    // char  c = fgetc(ptr);
    // printf("The chracter I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The chracter I read was %c\n", c);
    // fclose(ptr);

//fgets
    // char str[34];
    // fgets(str, 7, ptr);
    // printf("The string is %s\n", str);
    
    //fputc
    fputc('o',ptr);
     
    //fputs
    fputs("this is test drive\n",ptr);
fclose(ptr);
     
    return 0;
}