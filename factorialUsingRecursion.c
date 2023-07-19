#include<stdio.h>
void main()
{
    int n,f;
    printf("\nenter a factorial number:");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial of %d is %d",n,f);
}
int fact(int n)
{
    if(n==1){
    return 1;
  } else{
    return n*fact(n-1);
  }
}