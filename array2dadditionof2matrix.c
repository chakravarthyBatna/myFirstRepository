//write a program  for addition of two matrix;
//note: matrix size should be same for both matrixes
#include<stdio.h>
void main(){
    int a[2][3],b[2][3],i,j,c[2][3];
    printf("enter the 1st matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("enter a[%d][%d] elements:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nhere enter 2nd matrix:\n");
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("enter b[%d][%d] elements:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nprinting 1st matrix\n");
       for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
      printf("printing 2nd matrix\n");
       for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\nhere sum of two matrixes:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];    //here you can directly print and add c matrix here
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
       /*for(i=0;i<2;i++){           
        for(j=0;j<3;j++){
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }*/
}