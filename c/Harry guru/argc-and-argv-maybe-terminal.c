#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of arc is %d\n",argc);
 for (int i = 0; i < argc; i++)
 {
     printf("This argument at index number %d has value of %s\n",i,argv[i]);
 }
 
    return 0;
}
//I can input like (.\46.exe Sakil is a good boy) as an input//for testing