/*half inverted pyramid pattern: * * *
                                 * *
                                 *
*/
#include<stdio.h>
void main(){
int n;
printf("enter a nubmer:");
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        printf("* ");
    }
    printf("\n");
}
for(int i=n;i>0;i--){
    for(int j=0;j<i;j++){
        printf("* ");
    }
    printf("\n");
}
}
