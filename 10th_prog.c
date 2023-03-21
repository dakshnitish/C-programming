#include<stdio.h>
int main(){
    int number;
    printf("enter the number : ");
    scanf("%d" , &number);
    int bit;
    printf("enter the kth bit which you want to set : ");
    scanf("%d" , &bit);
    int shift = number | 1<<(bit -1);
    printf("the value after setting %d th bit is : %d" ,bit , shift);
    return 0;
}