#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    scanf("%d%d",&x,&y);
 for ( i = y+1; i <x ; i++)
 {
     if(i%2!=0)
     {
         sum=sum+i;
     }
 }
 printf("%d",sum);
      return 0;
}