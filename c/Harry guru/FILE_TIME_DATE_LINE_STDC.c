#include<stdio.h>
#include<stdlib.h>//It must be stdlib.h
int main()
{
    printf("File name is %s\n",__FILE__);
    printf("The time is  is %s\n",__TIME__);
    printf("Today is   %s\n",__DATE__);
    printf("LINe NO  is   %d\n",__LINE__);
    printf("ANSI:   %d\n",__STDC__);
     return 0;
}