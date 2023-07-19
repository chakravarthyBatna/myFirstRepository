//print table of a given number
/*#include<stdio.h>
void main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}*/
//printing tables from 1 to n;
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("table number %d\n",i);
        for(int j=1;j<=10;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
}
