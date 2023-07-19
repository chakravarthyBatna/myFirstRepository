//here count the no of digits ex:2352=no of digits is 4;
#include<stdio.h>
void main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int org=n,c=0,r;
    for(;n!=0;){
        n=n/10;
        c++;
     }
printf("no of digits of %d is %d",org,c);
}