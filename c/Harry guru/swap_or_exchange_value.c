#include <stdio.h>
/*function definition to swap the values*/
void swap(int *x, int *y)
{
    int temp;
    temp=*x;//save the value at address x
    *x=*y;//put y into x;
    *y=temp;

}

int main()
{
    int a = 34, b = 74;
    printf("The number of a and b is %d and %d\n", a, b);
    swap(&a, &b);
    printf("The number of a and b is %d and %d\n", a, b);

    return 0;
}