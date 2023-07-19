#include<stdio.h>
int r();
int r(){
    static int num=100;
    return num--;
}
void main(){
    for(r();r();r())
    printf("%d\t",r());
}