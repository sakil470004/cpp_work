#include <stdio.h>
int main()
{
    char string[100]=" This content was produced by 43.c";
    FILE *ptr = NULL;

    
    //   ***Reading a file******
    ptr = fopen("read-or-write-a-file.text", "r");
    fscanf(ptr,"%s",&string);
    printf("The content of this file has %s\n",string);

    // ////*****writting a file
    // ptr = fopen("43.text","a");
    // fprintf(ptr,"%s",string);
    return 0;
} 