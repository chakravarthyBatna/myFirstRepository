//hallow rectangular pattern;
//hallow means inside not printed, only outersides printed;
#include<stdio.h>
void main(){
    int r,c;
    printf("enter number of rows:");
    scanf("%d",&r);
    printf("enter number of columns:");
    scanf("%d",&c);
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            if(i==0||i==r||j==0||j==c){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}