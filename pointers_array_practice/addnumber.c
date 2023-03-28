#include<stdio.h>
int main(){
    int a = 6;
    int b = 8;
    int c = a+b;
    int *p =&c;
    printf("sum is %d",*p);
    return 0;
}