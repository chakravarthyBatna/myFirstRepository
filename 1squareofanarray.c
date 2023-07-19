//square's of an array
#include<stdio.h>
void main()
{
  int a[5],b[5];
  printf("enter array elements:");
  for(int i=0;i<5;i++)
  {
    printf("enter a[%d]:",i);
    scanf("%d",&a[i]);
  }
  for(int i=0;i<5;i++)
  {
    b[i]=a[i]*a[i];
  }
  for(int i=0;i<5;i++)
  {
    printf("\n square of b[%d]=%d",i,b[i]);
  }
}