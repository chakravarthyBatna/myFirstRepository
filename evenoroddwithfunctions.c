//check a number is even or odd by passing the number to a function and in function you check
#include<stdio.h>
void even(int);
void main()
{
    int a;
    printf("\nenter a value:");
    scanf("%d",&a);
    even(a);
}
void even(int a)
{
    if(a%2==0)
    {
        printf("\nit's even number");
    } else {
        printf("\nodd number");
    }
}