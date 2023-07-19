/*read 5 students marks and calculate sum and average marks*/
#include<stdio.h>
void main(){
 float marks[4];
int i;
float  sum=0,avg=0;
 for(i=0;i<5;i++){
     printf("enter student %d marks: ",i+1);
    scanf("%f",&marks[i]);
 }
 for(int j=0;j<5;j++){
    sum+=marks[j];
    
 }
 avg=sum/5.0;
 printf("sum of total marks is %f",sum);
 printf("\navg of total is %f",avg);
}