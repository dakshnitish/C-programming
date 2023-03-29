#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("enter the number :");
    scanf("%d",&number);
    printf("number before swaping : %d\n",number);
    int last_number = number % 10;
    int n =number;
    while(n>10){
        n/=10;
    }
    int first_number = n;
    printf("%d is the first number and %d is the last number\n",first_number,last_number);
    printf("number after swapping is :");
    // int temp =first_number;
    // first_number = last_number;
    // last_number= temp;
    // printf("%d is the first number and %d is the last number\n",first_number,last_number);
    int digit = (int)log10(number);
    int swappedNum = last_number*((int) pow(10,digit));
    swappedNum =swappedNum + (number % (int) pow(10,digit));
    swappedNum = swappedNum - last_number;
    swappedNum = swappedNum + first_number;
    printf("%d",swappedNum);
    return 0;
}