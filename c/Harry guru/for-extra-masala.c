#include<stdio.h>
int main(){
int i,j;

for(i=0, j=0 ;i<10 || j<8; i+=2,j++){
    printf("\n %d %d",i,j);
}
return 0;
}
