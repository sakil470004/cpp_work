#include <stdio.h>
int main()
{
    float A, B,C, MEDIA;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    A = 2 * A;
    B = 3 * B;
    C = 5 * C;
    printf("MEDIA = %0.1f\n", (A + B + C) / 10);
    return 0;
}
