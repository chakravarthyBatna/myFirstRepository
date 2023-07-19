/*write a program to read two arrays of size 5
 and store sum of these arrays into a third array*/
 #include<stdio.h>
 void main(){
    int a[4],b[4],c[4];
    printf("here enter 1st array elements\n");
    for(int i=0;i<5;i++){
        printf("enter 1st array %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("here enter 2nd array elements\n");
    for(int j=0;j<5;j++){
        printf("enter 2nd array %d:",j+1);
        scanf("%d",&b[j]);
    }
   for(int j=0;j<5;j++){
    c[j]=a[j]+b[j];
   }
   for(int i=0;i<5;i++){
    printf("%d is %d\n",i+1,c[i]);
   }
 }