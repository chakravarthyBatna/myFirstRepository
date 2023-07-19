//ASCII value of a given number
//print all ascii character's
#include<stdio.h>
void main(){
   /* char c;
    printf("enter a character: ");
    scanf("%c",&c);
    printf("ascii value is %d",c);*/

    //printing all ascii characters!
    char c=0;
    for(int i=0;i<=256;i++){
        printf("%d = %c\n",i,i);  //you can put c or i both
        c++;
    }
}