#include<stdio.h>
#include<stdlib.h>

int main(){
    char response[5];
    printf("Have you any gf ?\n Enter Yes or No:");
    scanf("%s", response);
    if (response == "yes"){
        printf("\n Hoo You have a gf, You are not Happy");
    }
    else (response == "no");{
        printf("\n Oh man You are really happy");
    }
    return 0;
}