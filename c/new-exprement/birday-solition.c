#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int highest=0, count=0;
    for (int i=0;i<n;i++)
    {
        int h;
        scanf("%d",&h);
        if (h > highest)
        {
            highest = h;
            count = 1;
        }
        else if (h == highest) 
            count ++;
    }
    printf("%d\n", count);
}