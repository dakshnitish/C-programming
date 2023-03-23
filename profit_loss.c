/*Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
int main(){
    float final_amount , amount ;
    float unit;
    printf("enter the unit : ");
    scanf("%f" , &unit);
    if(unit <= 50){
        amount = unit*0.50;
    }
    else if(unit <=150){
        amount = 25 + (unit-50)*0.75;
    }
    else if(unit <=250){
        amount = 100 + (unit-150)*1.20;
    }
    else{
        amount =220 + (unit-250)*150;
    }
    final_amount = amount * 1.20;
    printf("%.2f is the final amount you would have to pay",final_amount);
    return 0;
}