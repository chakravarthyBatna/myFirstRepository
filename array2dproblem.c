//a(2*3) matrix, taking input and printing that
#include<stdio.h>
void main(){
  int a[2][3],i,j;
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("enter row %d column %d",i,j);
        scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
       printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
}