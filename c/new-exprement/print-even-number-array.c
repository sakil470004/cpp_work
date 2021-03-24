#include <stdio.h>
int j = 0;
int arrayEvenChecker(int arr1[6])
{
    int arr2[6];
    for (int i = 0; i <= 6; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr2[j] = 0;
        }
    }
    for (int i = 0; i < j; i++)
    {
    
        printf("%d\n", arr2[i]);
    }
}

int main()
{
    int arr1[6] = {1, 2, 4, 5, 6};
    arrayEvenChecker(arr1);
    return 0;
}