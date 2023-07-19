#include<stdio.h>
void main(){
    char name;
    printf("enter your first character and i'll tell about you");
    scanf("%c",&name);
    switch (name){
        case 'a':
        printf("\n not bad");
        break;
        case 'b':
        printf("\n good");
        break;
        case 'c':
        printf("\nvery intelligent boy");
        break;
        default:
        printf("\nsorry i have only from 'a' to 'c'");
    }
}