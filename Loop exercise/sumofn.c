#include <stdio.h>
int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    int sum = 0;
    printf("In first %d natural numbers ,the odd numbers sum is : ",num);
    while(num>0){
        if(num%2!=0){
           sum = sum + num;
        }
        num--;
    }
    printf("%d",sum);

    return 0;
}