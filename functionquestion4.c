#include<stdio.h>
void f(int *,int);
void f(int*p,int m){
    m=m+5;             //it has passes both call by value and call by reference
    *p=*p+m;
}
void main(){
    int i=5,j=10;
    f(&i,j);
    printf("%d",i+j);
}   