/*biggest of 3 numbers*/
#include<stdio.h>
void main (){
int a,b,c;
printf("enter 3 nubmers by giving space: ");
scanf("%d\n%d\n%d",&a,&b,&c);
printf("you have entered a=%d and b=%d and c=%d\n",a,b,c);
/*if(a>b&&a>c){
    printf("a=%d is bigger than all",a);
}
else if(b>a&&b>c){printf("b=%d is bigger than all numbers",b);
 }
 else {printf("c=%d is bigger than all numbers",c); }*/
 //only nested if here
 if(a>b){
    if(a>c){
        printf("a is bigger than all");
    }
    else {
        printf("c is bigger than all");
    }
   
 }
  else {
        printf("b is bigger than LL");
    }
}