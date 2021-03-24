#include <stdio.h>
int main()
{

    int N, n0, n1, n2, n3, n4, n5, n6, n7;
    printf("How mouch money you have? \n");
    scanf("%d", &N);
    n0 = N / 500;
    n1 = N % 500 / 100;
    n2 = N % 500 % 100 / 50;
    n3 = N % 500 % 100 % 50 / 20;
    n4 = N % 500 % 100 % 50 % 20 / 10;
    n5 = N % 500 % 100 % 50 % 20 % 10 / 5;
    n6 = N % 500 % 100 % 50 % 20 % 10 % 5 / 2;
    n7 = N % 500 % 100 % 50 % 20 % 10 % 5 % 2 / 1;
    if (n0 != 0)
    {

        printf("YOu need %d ta  500tk note\n", n0);
    }
    if (n1 != 0)
    {
        printf("YOu need %d pice  100tk note\n", n1);
    }
    if (n2 != 0)
    {
        printf("YOu need %d pice  50tk note\n", n2);
    }
    if (n3 != 0)
    {
        printf("YOu need %d pice  20tk note\n", n3);
    }
    if (n4 != 0)
    {
        printf("YOu need %d pice  10tk note\n", n4);
    }
    if (n5 != 0)
    {
        printf("YOu need %d pice  5tk note\n", n5);
    }
    if (n6 != 0)
    {
        printf("YOu need %d pice  2tk note\n", n6);
    }
    if (n7 != 0)
    {
        printf("YOu need %d pice  1tk note\n", n7);
    }

    return 0;
}