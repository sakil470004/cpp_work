#include <math.h>
#include <stdio.h>
float Edistance(int x1, int x2, int y1, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);//it a formula of distance
    return sqrt(a);
}
float areaOfcircle(int x1, int x2, int y1, int y2, float (*distance)(int x1, int x2, int y1, int y2))
{
    return distance(x1, x2, y1, y2);
}
int main()
{
    int x1, x2, y1, y2;
    float dst;
    printf("Enter the value of x1\n");
    scanf("%d", &x1);
    printf("Enter the value of y1\n");
    scanf("%d", &y1);
    printf("Enter the value of x2\n");
    scanf("%d", &x2);
    printf("Enter the value of y2\n");
    scanf("%d", &y2);
    dst = areaOfcircle(x1, y1, x2, y2, Edistance);
    printf("The distance beetween these pointer is %0.2f\n", dst);
    return 0;
}