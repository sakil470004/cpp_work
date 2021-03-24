#include<stdio.h>
int main(){

float result;
float a,b;
printf("\n Enter the value of your namta ");
scanf("%f",&a);
printf("\n Enter the value of your line ");
scanf("%f",&b);

    for (float i = 1; i <=b ; i++)
    {
        result= a*i;
        printf("\n %0.2f*%0.2f = %0.2f",a,i,result);
    }
    
}