/*here program to transpose of a matrix
transpose means rows to columns (or) columns to rows*/
#include<stdio.h>
void main(){
    int a[2][3],b[3][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter %dst row %dnd column:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //original a[2][3] matrix;
    printf("here a matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //here transpose of "A" matrix;
    printf("\ntranspose of \"A\" matrix is below:\n");
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    // "A" matrix values assigning to "B" matrix;
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            b[i][j]=a[j][i];
        }
        printf("\n");
    }
    //now printing "B" matrix (transpose of a to b);
    printf("\n\ntranspose from a to b:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
}