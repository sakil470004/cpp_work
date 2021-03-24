#include<stdio.h>
int main(){
int x ,result;

printf("\n Enter the value of table you want\n\a");
scanf("%d",&x);
for (int i=  0; i<=10; i++)
{
    result=x*i ;
    printf("\n  %d*%d= %d;" ,i,x,result);
}
return 0;


}