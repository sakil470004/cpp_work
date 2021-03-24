#include <stdio.h>
int main()
{
    float fiver;
    char cold;
    int day;

    printf("\n Enter your fiver in Ferenhite:");
    scanf("%f", &fiver);
    if (fiver >= 100)
    {
        printf("\n Have you colds? write yes(y) or no(n):");
        scanf(" %c", &cold);
    }
    else{
        printf("\n you are not effected in corona virus");
    }
 
 switch (cold)
 {
 case 'y' :
 printf("\n How many days you have it? ");
         scanf("%d", &day);
      
    if (day >= 15)
    {
 printf("\n you are effected in corona virus");
    }
    else {
  printf("\n you are not effected in corona virus");      
    }
    break;
case 'n':
printf("\n you are not effected in corona virus");

}

}
