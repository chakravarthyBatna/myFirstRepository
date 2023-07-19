//find a given character is upper or lower case? and also finding ascii value.
#include<stdio.h>
void main(){
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    if(c<=90&&c>=65){
        printf("%c is upper case and its ascii value is %d",c,c);
    }
    else if (c>=97&&c<=122)
    {
        printf("%c is lower case and it's ascii value is %d",c,c);
    }
    else {
        printf("given is not a character");
    }
}