//this call reference
#include<stdio.h>
void fun(int*,int*);
void main(){
    int a=10;int b=20;
    printf("\nbefore fun call a = %d and b=%d",a,b);
    fun(&a,&b);
    printf("\nafter reference a=%d and b=%d",a,b);
}
void fun(int*a,int*b){
    *a=30,*b=40;
    printf("\nfun pointer a=%d and b=%d",*a,*b);
}