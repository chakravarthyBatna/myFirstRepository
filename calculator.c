#include<stdio.h>
void main()
{
    printf("\nwecome to the cb calculator\n");

    int option;
    float a,b;
    while(1)
    {
        printf("\n\nplease enter the following options:\n1 for addition\n2 for substraction\n3 for multiplication\n");
        printf("4 for division\n5 for exit form the calculator:\nchoose option: ");
        scanf("%d",&option);
        if(option==5)
        {
            printf("\nthank you for using my cb calculator");
            break;
        }
        printf("\nnow enter no 1: ");
        scanf("%f",&a);
        printf("\nenter no 2: ");
        scanf("%f",&b);
        switch(option)
        {
            case 1:
            printf("\naddition for no 1 and 2 is %.2f",a+b);
            break;
            case 2:
            printf("\nsubstraction for no 1 and 2 is %.2f",a-b);
            break;
            case 3:
            printf("\nmultiplication for no 1 and 2 is %.2f",a*b);
            break;
            case 4:
            printf("\ndivision for no 1 and 2 is %.2f",a/b);
            break;
            default:
            printf("\nplease enter the following no's only");
        }
    }
}