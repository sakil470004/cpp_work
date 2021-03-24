#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


int main(){
    char respons[50];
    int box;


     while(1)
    {

    printf("Have you any gf ? \n Enter y or n: \n");
    scanf("%s",&respons);
    box=strcmp("yes",respons);//

       switch(box)
    {
        case 'q':
        printf("Quitting the program.....");
        goto end;
        break;
        case 0:  //strcmp return 0, when input same, outerwise return 0
        printf("\n Hoo You have a gf, You are not Happy \n");
        break;
    case 1:
          printf("\n Oh man You are really happy \n");
          break;
    default:
        printf("\n Oh shit you are gray \n");
        break;
    }
    }
    end:
    return 0;
}
