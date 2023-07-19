#include<stdio.h>
#pragma pack(1)
typedef struct student stu;
 struct student{
    char name;
    int a;
   char name1;
};
void main(){
    stu s;
    stu*p=&s;
    printf("\nsize is %d",sizeof(s));
}
   