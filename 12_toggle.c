#include<stdio.h>
int main(){
    int number , bit;
    printf("enter the number : ");
    scanf("%d",&number);
    printf("enter the nth bit which you want to toggle : ");
    scanf("%d",&bit);
    int shift = 1 << (bit);
    int result = number ^ shift;
    printf("the new number is %d after toggle the %dth position",result , bit);
    return 0;
}