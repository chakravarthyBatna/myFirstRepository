/*biggest of 2 numbers*/
#include<stdio.h>
void main(){
    int a,b,big;
    printf("enter 'a' and 'b' values by giving space: ");
    scanf("%d\n%d",&a,&b);
  /* if(a>b){
        printf("a is greater number");

    }
    else {printf("b is greater number"); }*/
   // a>b?printf("a=%d is greater",a):printf("b=%d is greater than ",b);
   big=a>b?a:b;     //if CO a>b is true then 'a' value is assigned to big else 'b'
   printf("bigger no is %d",big);
}
