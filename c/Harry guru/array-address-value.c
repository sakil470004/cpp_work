#include<stdio.h>
int main()
{
    // char a = '3';
    // char*ptra = &a;
    // ptra--;
    // printf("%d\n",ptra);
    // printf("%d",ptra-2);


    int arr[]={311,52,3,4,5,6,67};
    //int* arrayptr = arr;
    printf("The address of frist element of the array is %d \n",&arr[0]);
    printf("The address of frist element of the array is %d \n",arr);
    printf("The address of second element of the array is %d \n",&arr[1]);
    printf("The address of second element of the array is %d \n",arr+1);
    
    printf("The value at address of frist element of the array is %d \n",*(&arr[0]));
    printf("The value at address of frist element of the array is %d \n",arr[0]);
    printf("The value at address of frist element of the array is %d \n",*(arr));
    printf("The value at address of second element of the array is %d \n",*(&arr[1]));
        printf("The value at address of second element of the array is %d \n",arr[1]);
    printf("The value at address of second element of the array is %d \n",*(arr+1));
    //I can not do arr++ ar arr-- becouse it is a constant;
    //I can change arrayptr++,arrayptr--;

     return 0;
}
