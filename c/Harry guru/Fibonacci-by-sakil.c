#include<stdio.h>

int fibRecursive(int n){
if(n==2 || n==1 ){

    return n-1;
}else{

    return fibRecursive(n-2)+fibRecursive(n-1);
}
}
int main(){
int n;
printf("Enter the number you want the fib \n");
scanf("%d",&n);
printf("The fib of %d is %d\n",n,fibRecursive(n));
    return 0;
}