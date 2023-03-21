#include<stdio.h>
int main(){
    int number = 22;
    int size = sizeof(int)*8;
    int count = 0;
    int msb = 1<<size-1;
    for(int i = 0 ; i<size ; i++){
        if(msb & (number<<i)){
            break;
        }
       count++;
    }
    printf("leading zeroes are %d in %d number",count , number);
    return 0;
}