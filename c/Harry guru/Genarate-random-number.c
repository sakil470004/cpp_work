#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int genarateRandomNumber(int n){
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h 
    return rand()%n;

}
int main()
{printf("Enter the number you want to max random number");
int n;
scanf("%d",&n);
    printf("The random number between 0 to %d is  %d\n",n,genarateRandomNumber(n));
     return 0;
}