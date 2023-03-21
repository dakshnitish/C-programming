//clear nth bit of a number 
#include<stdio.h>
int main(){
    int number , bit;
    printf("enter the number : ");
    scanf("%d" , &number);
    printf("enter the nth bit which you want to clear : ");
    scanf("%d" , &bit);
    int shift = 1 << (bit);
    int result = number & (~shift);
    printf("after clear %d th bit the number is %d" , bit , result);
    return 0;
}