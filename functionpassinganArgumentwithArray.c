/*example program that function with argument with return type;
means function passing actual parameters and return's something;
*/
#include<stdio.h>
float avg(float[],int);
void main()
{
    int average;
    float marks[]={5,6,90,20,5};
    average=avg(marks,5);
    printf("\naverage is %d",average);
}
float avg(float marks[],int a){
    int average=0,i,sum=0;
    for(i=0;i<a;i++){
        sum+=marks[i];
    }
    average=sum/a;
     return average;
}