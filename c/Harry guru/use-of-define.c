#include <stdio.h>
#define squre(r) r*r
#define PI 3.1416

int main()
{int r= 5;
    int a = 334;
    int *ptr;  // This is a wils pointer;
    //*ptr = 34; //This is not a good thinsg to do
    ptr = &a; //ptr is no longer a wild pointer;
    printf("The value of is %d\n", *ptr);
    printf("The area of A =  %f\n", PI*squre(r));
    return 0;
}