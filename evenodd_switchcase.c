#include<stdio.h>
int main(){
    int number;
    printf("enter the number : ");
    scanf("%d",&number);
    switch (number%2 == 0)
    {
    case 0:
        printf("entered no. is odd");
        break;
    
    case 1:
        printf("entered no. is even");
        break;
    }
    return 0;
}