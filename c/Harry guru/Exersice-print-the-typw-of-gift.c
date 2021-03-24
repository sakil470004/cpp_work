#include<stdio.h>
int main(){

int mathpasser, sciencepasser;
printf("\n If you pass in math exam type 1 ,otherwise type 0:");
scanf("%d",&mathpasser);
printf("\n If you pass in science exam type 1 ,otherwise type 0:");
scanf("%d",&sciencepasser);


if(mathpasser==1 && sciencepasser==1 ){
printf("\n you found 45 rupe gift as you passed math and science");

}
 else if(mathpasser==1 || sciencepasser==1 ){

     printf("\n You found 15 rupe gift as you passed math or science");
 }
 else{
     printf("\n you are failed both subject");
 }


    return 0; 
}
