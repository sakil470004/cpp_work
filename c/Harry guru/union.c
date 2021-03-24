#include<stdio.h>
#include<string.h>
union Students{
int id;
int marks;
char fav_char;
char name[34];
};

struct Student{
int id;
int marks;
char fav_char;
char name[34];
};
int main()
{
struct Student s1;
s1.id=1;
s1.marks=45;
s1.fav_char='u';
strcpy(s1.name,"Harry");
printf("The id is %d \n",s1.id);
printf("The marks is %d \n",s1.marks);
printf("The fav_char is %c \n",s1.fav_char);
printf("The name is %s \n",s1.name);
union Students u1;
u1.id=1;
u1.marks=45;
strcpy(u1.name,"Harry");
u1.fav_char='u';
printf("The id is %d \n",u1.id);
printf("The marks is %d \n",u1.marks);
printf("The fav_char is %c \n",u1.fav_char);
printf("The name is %s \n",u1.name);




     return 0;
}