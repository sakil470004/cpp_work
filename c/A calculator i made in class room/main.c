#include <stdio.h>

int main()
{
    float num1 , num2 ,result;
    char op;
    printf("\n Enter the 1st number:");
    scanf("%f",&num1);
    printf("\n Enter the operator:");
    scanf(" %c",&op);
    printf("\n Enter the 2nd number:");
    scanf("%f",&num2);

    switch(op)
    {
        case '+':result = num1 + num2;
        break;
        case '-':result = num1 - num2;
        break;
        case '*':result = num1 * num2;
        break;
        case '/':result = num1 / num2;
        break;
        default:
        printf("The operation is not valid");
        break;
    }

    printf("The result of thouse number %f",result);



    return 0;
}
