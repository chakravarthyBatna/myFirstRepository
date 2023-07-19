#include<stdio.h>
int studyclass;
void main(){
    printf("\nenter which class u r studying?:");
    scanf("%d",&studyclass);
  switch (studyclass){
    case 6:
    printf("\ngo to 1st floor");
    break;
    case 7:
    printf("\ngo to 2nd floor");
    break;
    case 8:
    printf("\ngo to 3rd floor");
    break;
    case 9:
    printf("\ngo to 4th floor");
    break;
    case 10:
    printf("\ngo to 5th floor");
    break;
    default:
    printf("\nsorry we offer from 6th to 10th class only");
  }
}