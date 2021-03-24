#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[35];
} std;

int main()
{
    //int *a, b;
    typedef int* intPointer;
    intPointer a,b;
    int c = 89;
    a = &c;
    b =&c;
    printf("%d,%d",*a,*b);// pointer ar value bar korar jonno * deoa laga
    //struct Student s1,s2;
    // std s1, s2;
    // s1.id = 34;
    // s2.id = 89;
    // printf("value of a s1's id is  %d\n", s1.id);
    // printf("value of a s1's id is  %d\n", s2.id);

    //typeof previous_name calias_name;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1,l2,l3;
    // integer a =4 ;
    // int b = 5 ;
    // printf("value of a is %d\n",a);
    // printf("value of a is %d\n",b);

    return 0;
}