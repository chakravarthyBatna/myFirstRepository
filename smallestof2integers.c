/*smallest of 2 integers */
#include<stdio.h>
void main(){
    int a,b;
    printf("enter 'a' value:");
    scanf("%d",&a);
    printf("enter 'b' value: ");
    scanf("%d",&b);
    printf("you entered a=%d and b=%d\n",a,b);
    if(a>b){
        printf("b=%d is smallest interger",b);
    }
    else{printf("a=%d is smaller ",a); }


}
