#include<stdio.h>
int main(){
int i,n,count=0,Heredivide=0;

printf("Enter a number to check Preime or not :\n");
scanf("%d",&n);
for(i=2; i<n ;i++){

if(n!=1 && n%i==0)
count=1;
Heredivide=i;
break;
}
if(count==1)
{
    printf("Not Prime number\n");
printf("The first broken number %d",Heredivide);

}else{
printf(" prime\n");

}
return 0;

}


