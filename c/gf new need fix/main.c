#include <stdio.h>
#include <stdlib.h>
int main()
{

    char gf;
    while (1)
    {

        printf("\n Have You any gf? say yes(y) or no(n) \n");
        scanf(" %c", &gf);
        switch (gf)
        {
        case 'q':
            printf("Quitting the program.....");
            goto end;
            break;
        case 'y':
            printf("oh You are not Happy man. ");
            break;
        case 'n':
            printf("Hoo You are Happy man. ");
            break;
        default:
            printf("\n Oh shit you are gray \n");
            break;
        }
    }
        end:
    return 0;
}
