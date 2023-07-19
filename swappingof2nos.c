/*swapping of two numbers using 3rd variable
swapping means interchange,suppose a,b two variable there
 then 'a' becomes 'b' and 'b' becomes 'a' */
 #include<stdio.h>
 int main(){
int a,b,t;
printf("enter 'a' value:");
scanf("%d",&a);
printf("enter 'b' value:");
scanf("%d",&b);
printf("before swapping a=%d and b=%d\n",a,b);
t=a;
a=b;   //t value still be 'a'./
b=t;
printf("after swapping a=%d and b=%d\n",a,b);
printf("t value is %d",t);
    return 0;
 }