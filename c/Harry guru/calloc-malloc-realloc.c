#include <stdio.h>
#include <stdlib.h> //calo
int main()
{
    // // use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("Enter the value no %d of this arrar\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("The value at %d of this arrar %d\n", i, ptr[i]);
    //     // scanf("%d",&ptr[i]);
    // }

    // use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value no %d of this arrar\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The value at %d of this arrar %d\n", i, ptr[i]);
        // scanf("%d",&ptr[i]);
    }

    // use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the new value no %d of this arrar\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The new value at %d of this arrar %d\n", i, ptr[i]);
        // scanf("%d",&ptr[i]);
    }

    free(ptr);
    return 0;
}