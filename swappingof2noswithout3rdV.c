/*swapping of two numbers without using 3rd variable*/
#include<stdio.h>
void main(){
int a,b;
printf("enter 'a' value :" );
scanf("%d",&a);
printf("enter 'b' value :");
scanf("%d",&b);
printf("before swapping a=%d and b=%d\n",a,b);
/*a=a+b;
b=a-b;  //if you add 2 nos 'a' and 'b'=total,then in total if '-' a we'll get b value similarl
if we '-' b we'll get 'a' value
a=a-b;*/
b=a+b;
a=b-a;
b=b-a;
printf("after swapping a=%d and b=%d",a,b);
}