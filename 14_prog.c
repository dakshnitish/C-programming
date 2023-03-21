//trailing zeroes

#include<stdio.h>
int main(){
    int number = 48;
    int count = 0;
    for(int i = 0 ; i<sizeof(int)*8 ;i++){
        if(number>>i & 1){
            break;
        }
        count++;
    }
    printf("In number %d trailing zeroes are %d",number , count);
    return 0;
}