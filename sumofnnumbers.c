//sum of n natural numbers form 1 to n;
#include<stdio.h>
void main(){
    /*int n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    if(i==n){
        printf("%d",i);        //sum=sum+i (or) sum+=i both are same;
    }
    else{printf(" %d + ",i); }
sum+=i;
    }
    printf(" = %d",sum);
}*/
//here is another method sum of n number= n(n+1)/2
/*int n,sum;
printf("enter a number: ");
scanf("%d",&n);
sum=(n*(n+1))/2;
printf("sum of all numbers is %d",sum);*/

//here sum of numbers and also displaying those numbers
int n,sum=0;
printf("enter a number: ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    printf("%d\n",i);
    sum+=i;
}
printf("sum of n numbers is %d",sum);
}
