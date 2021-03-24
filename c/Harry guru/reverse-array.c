//array reversal
#include <stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {

        //swap item arr[i] with arr[6-i](ata 7th number a asa tai)
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
void arrayPrint(int arr[])
{
    printf("Before reversing the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
void arrayRevprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    arrayPrint(arr);
    printf("After reversing the array\n");
    arrayRev(arr);
    arrayRevprint(arr);
    return 0;
}