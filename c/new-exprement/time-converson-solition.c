 #include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){

    int hh, mm, ss ;
    char t12[2];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;
    if (strcmpi(t12,"PM")==0 && hh!=12) hh += 12.00 ;
    if (strcmpi(t12,"AM")==0 && hh==12) hh = 0 ;
    printf("%d:0%d:0%d", hh, mm, ss) ;
    return 0;
}