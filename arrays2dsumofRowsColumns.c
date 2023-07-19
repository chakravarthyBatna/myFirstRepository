//here PENDING STILL !!!!
/*sum of individual rows and columns
ex: 1 2 3      1+2+3=6
    4 5 6 ===> 4+5+6=15 here sum of individual rows
    7 8 9      7+8+9=23*/
#include<stdio.h>
void main(){
  /* int sum,sumC,i,j, a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter %dst row, %dst column:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for( i=0;i<3;i++){
        sum=sumC=0;
        for(j=0;j<3;j++){
            sum+=a[i][j];
            sumC+=a[j][i];
        }
        printf("sum of %dst row = %d\n",i+1,sum);
        printf("sum of %dst column = %d\n",i+1,sumC);
    }*/
    int a[2][4],i,j,sumr,sumc;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
           printf("enter %dst row %d column:",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n printing original 2x4 matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nhere printing transpose of 4x2 matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    printf("here printing sum of rows and columns of original 2x4 matrix\n");
    printf("\n\n");
    for(i=0;i<2;i++){
        sumr=0;
        sumc=0;
        for(j=0;j<4;j++){
            sumr+=a[i][j];
            sumc+=a[j][i]; }
        }
        printf("sum of %dst row = %d\t",i,sumr);
        printf("sum of %dst column = %d\n",i,sumc);
        printf("\n\nhere sum of rows and columns of a transpose matric\n");
    for(i=0;i<4;i++){
        sumc=sumr=0;
        for(j=0;j<2;j++){
            sumr+=a[i][j];
            sumc+=a[j][i];
        }
        printf("sum of %dst row = %d\t",i,sumr);
        printf("sum of %dst column = %d\n",j,sumc);
    }
}