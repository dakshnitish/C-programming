#include<stdio.h>
#define BITS sizeof(int)*8

int main(){
    int num;
    int msb = 1<<(BITS-1);
    printf("enter the number :");
    scanf("%d" , &num);
    if(num & msb){
        printf("%d most significant bit is set (1)",num);
    }
    else{
        printf("%d most significant bit is unset (0)",num);
    }
    return 0;
}