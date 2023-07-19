/*here printing M*N matrix
take the no.of rows and columns from the user and print that r*c matrix;*/
#include<stdio.h>
void main(){
    int a[10][10],r,c;
    printf("enter no of rows you want:");
    scanf("%d",&r);
    printf("enter no of columns yoy want:");
    scanf("%d",&c);
    printf("\nyou have entered %dx%d matrix\n",r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("here printing the %dx%d matrix\n",r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          printf("%d\t",a[i][j]); 
        }
        printf("\n");
    }
}