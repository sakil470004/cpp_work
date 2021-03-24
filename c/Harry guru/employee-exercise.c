#include<stdio.h>
#include<stdlib.h>
struct employee
{
   char name[30];
   int empId;
   char father[];
}emp;


int main(){
// Now i use calloc
char *ptr;
char a ,b;
int chars ,i=0;
while(i<3)
{printf("\nEmployee %d:Enter the number of characters in your employee id:",i+1);
scanf("%d",&chars);
getchar();// it consium the cerecter thats way here no poblem to do the input;
printf("\nEnter the value of a");
scanf("%c",&a);
getchar();
printf("\nEnter the value of b");
scanf("%c",&b);
getchar();
ptr = (char*)malloc((chars+1)*sizeof(char));
printf("\nEnter your Employee id? ");
scanf("%s",ptr);
printf("\nYour Employee Id is %s",ptr);
free(ptr);
i=i+1;
}

return 0;
}