#include<stdio.h>
int main(){
    int number;
    printf("enter the number :");
    scanf("%d",&number);
    int initial_no = number;
    int first_digit;
    while(number>10){
         number = number/10;
    }
    printf("first digit is %d of this %d number",number,initial_no);
    return 0;
}