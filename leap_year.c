#include<stdio.h>
// int main(){
//    int year = 2016;
//    (year%4 == 0 && year%100 != 0) ? printf("%d is a leap year" , year) : (year%400 == 0) ? printf("%d is a leap year" , year) : printf("%d is not a leap year" , year);
//     return 0;
// }

//whether input character is a alphabet or not
int main(){
    char ch;
    printf("input the character : ");
    scanf("%c" , &ch);
    (ch >='a' && ch<='z') || (ch >='A' && ch <='Z') ? printf("%c is an Alphabet",ch) : printf("%c is not an Alphabet",ch);
    return 0;
}

   