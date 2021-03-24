#include<stdio.h>

int factiorial (int num){
    if(num==1||num==0){
        return 1;
    }
    else{
        return (num* factiorial(num-1));
    }
}

int main()
{
int num;
printf("Enter the number you want t0 factorial \n");
scanf("%d",&num);
printf("The factorial of %d is %d \n",num, factiorial(num));
     return 0;
}