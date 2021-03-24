#include<stdio.h>
#include<stdlib.h>
int sum (int a ,int b)
{
    return a+b;
}
void greet()
{
    printf("Hello My fan follower %d\n");
}
int main()
{
    printf("The sum of 1 and 2 is %d\n",sum(1,2));//testing the function;
    int (*fptr)(int,int);//Declering a function pointer
    fptr = &sum;//creating a function pinter // if do not adderessing(sum) that it will be no affect,becouse it is already addaress  hahaha
    int d =(*fptr)(4,6);//Dereferenceing the function pointer
    printf("The value of d is %d\n",d);
     return 0;
}