#include <stdio.h>
//#include "temp.c"
int myfunc(int a, int b)
{
    // auto int myVar;
    static int myVar;
    myVar ++;
    printf("The myVar is %d\n", myVar);

    // myVar = a+b;
    return myVar;
}

int main()
{
    int a;

    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation
    register int myVar = myfunc(3, 5);//register is  a extra things for me .
    myVar = myfunc(3, 10);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    // printf("The myVar is %d\n", myVar);

    return 0;
}

// #include "32.c"
// exter int harry =56;