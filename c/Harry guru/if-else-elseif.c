#include<stdio.h>
int main(){
int age;
printf("\nEnter your age ");
scanf("%d",&age);
printf("\n you Ented  %d as Your age",age);
if(age>17){

    printf("\n You can do the vote \a");
}
else if (age>9){
    printf("\n you can vote kids beacouse you are a kid");
}
else{
printf("\n You can not vote");
}


    return 0;
}