//palindrome means, a string or number that reads same in reverse order. backwards as forwards
//ex: 12321,262,646,madam,radar etc..,
#include<stdio.h>
void main(){
    int n,r,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    int org=n;
    for(;n!=0;){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==org){
        printf("given number %d is palindrome",org);
    }
    else {
        printf("given number %d is not a palindrome",org);
    }
}