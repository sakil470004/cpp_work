#include<stdio.h>

#include<math.h>

int main()

{
int a ,b,c,aB_max,max;
scanf("%d %d %d",&a,&b,&c);
aB_max=((a+b+abs(a-b))/2);
max=((aB_max+c+abs(aB_max-c))/2);
printf("%d eh o maior\n",max);
return 0;

}
