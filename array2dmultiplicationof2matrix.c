//multiplication of two matrixes
#include<stdio.h>
void main(){
int a[10][10],b[10][10],i,j,r,c,r1,c1,d[10][10],k,sum;
char name;
printf("enter 1st matrix details\n");
printf("enter no of rows:");
scanf("%d",&r);
printf("enter no of columns:");
scanf("%d",&c);
printf("enter 2nd matrix details:\n");
printf("enter no of rows:");
scanf("%d",&r1);
printf("enter no of columns:");
scanf("%d",&c1);
if(c==r1){
    multi:
printf("\nyou have entered %dx%d first matrix and %dx%d second matrix\nnow enter 1st %dx%d matrix:\n",r,c,r1,c1,r,c);
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("enter a[%d][%d] number:",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("\nnow enter 2nd matrix details:\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        printf("enter a[%d][%d] number:",i,j);
        scanf("%d",&b[i][j]);
    }
}
printf("\nprinting 1st %dx%d matrix\n",r,c);
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("\nprinting 2nd %dx%d matrix\n",r1,c1);
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
if(c==r1){
printf("\nnow multiplication of matrix is %dx%d\n",r,c1);
for(i=0;i<r;i++){
    for(j=0;j<c1;j++){
        d[i][j]=0;
       for(int k=0;k<c;k++){
        d[i][j]+=a[i][k]*b[k][j];
       }
    }
}
}
for(int i=0;i<r;i++){
    for(int j=0;j<c1;j++){
        printf("%d\t",d[i][j]);
    }
    printf("\n");
 }}
 else {
    printf("the given matrix can not be multiplied\nhowever if you still want to print the type y,else n\n");
   scanf("%s",&name);
   if(name=='y'){
    goto multi; 
 }
}
}