#include <stdio.h>
#include <stdlib.h>
int number;
int Reverse(number)
{
    int reversed = 0;
    // Let reverse the number
    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number = number / 10;
    }
    printf("The revers number is %d\n", reversed);
}

int main()
{
    printf("Enter a number to reverse it \n");
    scanf("%d", &number);
    Reverse(number);
    return 0;
}