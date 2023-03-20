#include <stdio.h>

double arithemetic_op(int a , float b){
        float result_1 = a-b;
        float result_2 = a+b;
        float result_3 = a*b;
        float result_4 = a/b;
        printf("substraction is :%.2f\n" , result_1);
        printf("addition is :%.2f\n" , result_2);
        printf("multiplication is :%.2f\n" , result_3);
        printf("division is :%.2f\n" , result_4);
}
void main(){
    int first_number ;
    printf("enter the first one :");
    scanf("%d" , &first_number);
    int second_number;
    printf("enter the second one :");
    scanf("%d" , &second_number);
    arithemetic_op(first_number , second_number);
}