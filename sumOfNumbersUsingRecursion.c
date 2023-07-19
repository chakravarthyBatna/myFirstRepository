#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("enter a number of sum off:");
    scanf("%d",&n);
    printf("\nsum of %d numbers is %d",n,sum(n));
}
int sum(int n)
{
    int s=0;
    if(n==1)
    return n;
    s=n+sum(n-1);
    return s;
    
}