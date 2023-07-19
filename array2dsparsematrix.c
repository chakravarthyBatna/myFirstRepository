/*find the M*N matrix is sparse or not?
spare means having 0's more than 50%
*/
#include<stdio.h>
void main(){
    int a[10][10],r,c,count=0;
    printf("enter no of rows:");
    scanf("%d",&r);
    printf("enter no of columns:");
    scanf("%d",&c);
    printf("you have entered %dx%d matrix\nso enter %d elements\n",r,c,r*c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" enter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
printf("\noriginal %dx%d matrix below:\n",r,c);
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(a[i][j]==0){
            count++;
        }
    }
}
if(count>r*c/2){ //you can directly write multiply(*) and division(/) signs on if condition
    printf("\nGiven matrix is sparse matric");
}
else {
    printf("given matrix is not a sparse matrix,not having more than 50%% zero's");
}
}