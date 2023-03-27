#include<stdio.h>
int main(){
    int i = 10;
    int *f=&i;
    printf("address of i is %p\n",f);
    // printf("address of i is %d\n",*f);
    // printf("address of i is %d",&i);
    return 0;
}