#include<stdio.h>
int main()
{
    while(1){
    int type ;
    printf("Chose your partan,\n 0 For triangular star pattern \n 1 For reversed triangular star pattern\n 7 For Quit the program\n ");
    scanf("%d",&type);
    switch (type)
    {
        case 7:
        printf("Quiting the program.... \n(:");
        goto end;
    case 0:
    printf("You need to Triangular star pattern \n* \n** \n*** \n**** \n***** \n");
        
        break;
    case 1:
    printf("You need to Reversed triangular star pattern \n***** \n**** \n*** \n** \n* \n");
        
        break;
    default:
    printf("You need to Nothing \n:) \n");
        break;
    }
    }
    end:
     return 0;
}