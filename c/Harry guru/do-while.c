#include<stdio.h>
int main(){

    int num ,index= 0;
    printf("\n Enter the num");
    scanf("%d",&num);
do{
printf("\n The number is %d",index);
index=index+1;
}while(index<num);
return 0;
}