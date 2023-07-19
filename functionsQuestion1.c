#include<stdio.h>
int jumble(int,int);
int jumble(int x,int y)
{
x=2*x+y;
return x;
}
void main()
{
    int x=2,y=5;
    y=jumble(y,x);
    x=jumble(y,x);
    printf("\nx value is %d\ny value is %d",x,y);
}