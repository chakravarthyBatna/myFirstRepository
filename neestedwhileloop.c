#include<stdio.h>
void main(){
 int i=0,j=0;
 while(++i<=5){
    while(++j<=5){
        printf("\n%d",j);
    }
    printf("\n%d",j);
 }
}