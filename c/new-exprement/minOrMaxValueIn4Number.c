#include<stdio.h>
void minMaxSum(int arr[]){
long long int min =0,max = 0, sum = 0, min4Num,max4Num;
max=arr[0];
min=arr[0];
for (int i = 0; i < 5; i++)
{
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        max=arr[i];
    }
}
for (int i = 0; i < 5; i++)
{
    sum+=arr[i];
}
min4Num=sum-max;
max4Num=sum-min;
printf("%lld ",min4Num);
printf("%lld",max4Num);


}
int main()
{
   int arr[5];
for (int i = 0; i < 5; i++)
{
    scanf("%lld",&arr[i]);
}
minMaxSum(arr);
     return 0;
}