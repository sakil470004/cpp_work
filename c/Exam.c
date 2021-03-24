#include<stdio.h>
#include<stdlib.h>
int main()
{while(1){
    char x[50];
    enum {CSE,EEE,PERMACY,ENGLISH,BANGLA}student;
    printf("Welcome to MIU Protal \n\n");
    printf("Press q to quit \n");
    printf("Enter your deferment:\n");
    gets(x);
    if(!strcmpi(x,"CSE"))
    {
        printf("You are the student of CSE \n You can come room 111 \n");
    }
    else if (!strcmpi(x,"EEE"))
    {
        printf("You are the student of EEE \n You can come room 112\n");
    }
    else if(!strcmpi(x,"PERMACY"))
    {
        printf("You are the student of PERMACY \n You can come room 113\n");
    }
    else if(!strcmpi(x,"ENGLISH"))
    {
        printf("You are the student of ENGLISH \n You can come room 114\n");
    }
    else if(!strcmpi(x,"BANGLA"))
    {
        printf("You are the student of BANGLA \n You can come room 115\n");
    }

    else if (!strcmpi(x,"q")){

        printf("Quiting the Portal.......");
        goto end;
    }
    else{
        printf("You Entered wrong information  :)\n");
    }
}
end:
     return 0;
}
