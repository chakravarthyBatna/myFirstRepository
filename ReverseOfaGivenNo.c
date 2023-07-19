//reverse of a given number ex: 3532= reverse is 2353;
#include<stdio.h>
void main(){
  /*  int n,r;
    printf("enter a number: ");
    scanf("%d",&n);
    for(;n!=0;){
        r=n%10;
        printf("%d",r);
        n=n/10;
    }*/
    /*another way is: ex:- 3564=lastDigit=4*10+6=46,
                                46*10+5=465
                                465*10+3=4653!!*/
int n,sum=0,r=0;
printf("enter a number:");
scanf("%d",&n);
int org=n;
for(;n!=0;){
r=n%10;
sum=sum*10+r;
n=n/10;
}
printf("reverse of %d is %d",org,sum);
}