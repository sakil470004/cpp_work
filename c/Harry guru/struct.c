#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}harry, ravi, shubham;
//struct Student harry, ravi, shubham;
void print()
{
    printf("%s", harry.name);
}
int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 466;
    ravi.marks = 462;
    shubham.marks = 455;
    strcpy(harry.name, "Harry potter Student of the year");
    strcpy(shubham.name, "Sahubam Hyder");
    harry.fav_char = 'p';
    ravi.fav_char = 'q';
    shubham.fav_char = 'r';
    printf("Harry got %d marks \n", harry.marks);
    printf("Harry's name is: %s \n", harry.name);
    printf("Subam got %d marks \n", shubham.marks);
    printf("Subam's name is: %s \n", shubham.name);

    print();

    return 0;
}
