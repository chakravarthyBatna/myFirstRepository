//maximum number of given 2 numbers
#include<stdio.h>
int max(int,int);
void main()
{
    int a,b,maxx;
    printf("\nenter 2 numbers:");
    scanf("%d %d",&a,&b);
   maxx= max(a,b);
   printf("\nmaximum number is %d",maxx);
}
int max(int a,int b)
{
    if(a>b)
    {
        return (a);
    } else {
        return (b);
    }
}