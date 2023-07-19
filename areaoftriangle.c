//area of triangle=(1/2)*base*hight
#include<stdio.h>
void main(){
    float b,h;
    printf("enter triangle base:");
    scanf("%f",&b);
    printf("enter triangle hight:");
    scanf("%f",&h);
    printf("area of triangle having base %.2f and hight %.2f is %.2f",b,h,(1.0/2.0)*b*h);
    //here 1/2 is int/int so it'll give 0 as int answer so make it float to get correct answer.
    
}