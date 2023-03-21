#include <stdio.h>
int main(){
    int num;
    printf("enter the num :",num );
    scanf("%d" , &num);
    if(num&1){
        printf("LSB of %d is set" , num);
    }
    else{
        printf("LSB of %d is not set " , num);
    }
    return 0;
}