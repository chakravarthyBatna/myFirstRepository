#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i,*p;
    printf("enter n value:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter:");
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        printf("\n%d\n",p[i]);
    }
}