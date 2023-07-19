//sum of digits of a given number ex: 2598=2+5+9+8 = 24
//add last digits you'll get sum of digits
//to get last digits given number%10 so remainder = last digit
#include<stdio.h>
void main(){
int n,sum=0,r=0;
printf("enter a nubmer: ");
scanf("%d",&n);
int org=n;
for(;n!=0;){
    r=n%10;
    sum=sum+r;
    n=n/10;
}
printf("sum of digits of %d is %d",org,sum);
}