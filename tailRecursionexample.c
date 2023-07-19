#include<stdio.h>
void print(int );
void main()
{
 print(10);
}
void print(int n)
{
    if(n<1)
    return;
    printf("%d",n);
    print(n/2);
}