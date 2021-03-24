#include<stdio.h>
int a,b;
void addAndSubtract(int*Aaddress , int*Baddress){
    *Aaddress=(a+b);
*Baddress=(a-b-b);
}
int main()
{
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    
printf("The value of a now is %d %d \n",a ,b);
addAndSubtract(&a,&b);
printf("The value of a now is %d \n  ",a);

printf("The value of a now is %d \n  ",b);
 
     return 0;
}