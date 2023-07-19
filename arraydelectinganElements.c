//here deleting an element in an array of user specified size at user specified position
#include<stdio.h>
void main(){
    int a[50],size,pos;
    printf("enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n printing the array\n");
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    printf("\nenter the postion you want to delect an element:\n");
    scanf("%d",&pos);
    for(int i=pos-1;i<size;i++){
        a[i]=a[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}