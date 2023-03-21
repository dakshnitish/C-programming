#include<stdio.h>
int main(){
    int number =10;
    int a[10];
    int remp;
    int i = 0;
    while(number){
        remp = number%2;
        number = number/2;
        a[i]=remp;
        i++;
    }
    for(int j = i-1 ; j >= 0;j--){
        printf("%d",a[j]);
    }
    return 0;
}