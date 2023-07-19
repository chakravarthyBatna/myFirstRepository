/*here inserting an element in array and swap*/
#include<stdio.h>
void main(){
int a[50],size,num,pos;
char name;
char name1;
printf("enter the size of array you want to:");
scanf("%d",&size);
if(size<=50){
    printf("you have entered %d size\n",size);
    for(int i=0;i<size;i++){
        printf("enter array of a[%d]",i);
        scanf("%d",&a[i]);
     }
     for(int i=0;i<size;i++){
            printf("%d\t",a[i]);
         }
        
            printf("enter the number you want to a insert:");
            scanf("%d",&num);
            printf("enter the position where you want to add:");
            scanf("%d",&pos);
            for(int i=size;i>pos;i--){
                a[i]=a[i-1];
            }
            a[pos]=num;
            size++;       //inserting an element in array will increase the size so size++;
            for(int i=0;i<size;i++){
                printf("%d\t",a[i]); }}
 else {
    printf("you should enter size less than or equal to 50 only\nyou have entered %d size",size);
}
}

