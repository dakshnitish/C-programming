#include<stdio.h>

void swapnum(int *n1 , int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main(){
    int num1 = 6;
    int num2 = 7;
    printf("before swapping num1 is %d and num2 is %d\n",num1,num2);
    swapnum(&num1 , &num2);
    printf("after swapping num1 is %d and num2 is %d",num1,num2);
    return 0;
}