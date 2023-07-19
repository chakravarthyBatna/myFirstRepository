/*example program that function with no argument with return type;
means no actual parameters are passing but function returns something;
*/
#include<stdio.h>
int sum(void);
void main()
{
    int s;
s= sum();
printf("\nsum is %d",s);
}
int sum()
{
    int a,b,sum;
    printf("\nenter a and b value:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}