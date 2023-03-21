#include<stdio.h>
int main(){
    int number = 22;
    int count_0s = 0;
    int count_1s = 0;
    int i =0;
    while(i < sizeof(int)*8){
        if((number >> i) & 1){
            count_1s++;
        }
        else{
            count_0s++;
        }
        i++;
    }
    printf("count of 0s in %d are %d\n",number , count_0s);
    printf("count of 1s in %d are %d",number , count_1s);
    return 0;
}