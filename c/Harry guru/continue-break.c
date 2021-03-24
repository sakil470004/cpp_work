#include<stdio.h>
int main(){
int i, age;
for(i=0;i<10;i++){
printf("%d\n Enter your age \n", i);
scanf("%d",&age);
 //if(age>=18){
 //   break;
 //}
 if(age>10){
    continue;
 }
 printf("We have not come across my continue statement");
 printf("\nSakil is a good boy");
}

return 0;
}
