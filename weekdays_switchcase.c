#include <stdio.h>
int main(){
    int week_no;
    printf("enter the number from 1 to 7 :");
    scanf("%d", &week_no);
    switch(week_no){
        case 1:
          printf("it is monday");
          break;
        case 2:
          printf("it is tuesday");
          break;
        case 3:
          printf("it is wednesday");
          break;
        case 4:
          printf("it is thursday");
          break;
        case 5:
          printf("it is friday");
          break;
        case 6:
          printf("it is saturday");
          break;
        case 7:
          printf("it is sunday");
          break;
        default:
          printf("invalid input");

    }
    return 0;
}