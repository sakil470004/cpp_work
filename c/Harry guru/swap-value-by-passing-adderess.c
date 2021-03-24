#include<stdio.h>
void swap(int*x,int*y){
int temp;
temp=*x;
*x=*y;
*y=temp;


}

int main()
{
    int a =36;
    int b= 76;
    printf(" The a =%d and b= %d \n",a,b);
    swap(&a,&b);
    printf(" The a =%d and b= %d \n",a,b);
    
     return 0;
}