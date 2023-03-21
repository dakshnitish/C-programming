#include <stdio.h>
int main(){
    int num1 = 55;
    int num2 = 60;
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    printf("after swapping the first number is %d and second number is %d",num1 , num2);
    return 0;
}