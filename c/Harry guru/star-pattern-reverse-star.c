#include <stdio.h>
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    while(1){
    int rows;
    char type;
    printf("Chose your partan,\n 0 For triangular star pattern \n 1 For reversed triangular star pattern\n q For Quit the program\n ");
    scanf("%c", &type);
    switch (type)
    {
    case 'q':
        printf("Quiting the Program (:\n");
        
        goto end;

        break;        
    case '0':
        printf("How many rows do you want\n");
        scanf("%d", &rows);
        starPattern(rows);

        break;

    case '1':
        printf("How many rows do you want\n");
        scanf("%d", &rows);
        reverseStarPattern(rows);
        break;
    default:
        printf("You have Entered invalid choice \n :) \n ");
        break;
    }
    }
    end:
    return 0;
}