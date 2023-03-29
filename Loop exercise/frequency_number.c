#include<stdio.h>
int main(){
    int n = 1223;
    int count = 0;
    while(n!=0){
         n/=10;
         count++;
    }
    printf("%d digits in the number ",count);

    return 0;
}