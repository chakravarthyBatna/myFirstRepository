//program to find wether a given number is armstrong or not
//armstrong means sum of cubes of a given number is equal to the same number
// ex:- 153,370,371,407
#include<stdio.h>
void main(){
    int n,sum=0,r;
    printf("enter a nubmer: ");
    scanf("%d",&n);
    int org=n;
    for(;n!=0;){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==org){
        printf("given number %d is armstrong number",org);
    }
    else{
        printf("given number %d is not a armstrong number",org);
    }
}