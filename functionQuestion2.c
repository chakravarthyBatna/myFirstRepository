#include<stdio.h>
int incr(int);
int incr(int i)
{
     int count=0;
    count=count+i;
    return count;
}
void main()
{
    int i,j;
    for(i=0;i<=4;i++){
        j=incr(i);
    }
    printf("\n j value is %d",j);
}