/*writing a program for sum of squares of first n numbers
like 1^2 + 2^2 + 3^2 + 4^2 + ..... + n^2*/
#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
if(i==n){
    printf("%d^2",i);
}
else {
    printf("%d^2+ ",i,i);
}
sum+=i*i*i;  //here if you want sum of squares then i*i and if you want sum of cubes then i*i*i;
    }
    printf("=%d",sum);
}