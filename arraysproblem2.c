/*read an array of size 10 and count no of even and odd numbers and print it;*/
#include<stdio.h>
void main(){

/*int n[9];
printf("enter 10 integers below:\n");
for(int i=0;i<10;i++){
    printf("enter no %d: ",i+1);
    scanf("%d",&n[i]);
}
for(int j=0;j<10;j++){
    if(n[j]%2==0){
        printf("%d is an even number\n",n[j]);
    }
    else {
        printf("%d is an odd number\n",n[j]);
    }
}*/
int n[9];
int even=0,odd=0;
printf("enter 10 integers below:\n");
for(int i=0;i<10;i++){
    printf("enter no %d: ",i+1);
    scanf("%d",&n[i]);}
    for(int j=0;j<10;j++){
        if(n[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("even is %d\nodd is %d",even,odd);
}