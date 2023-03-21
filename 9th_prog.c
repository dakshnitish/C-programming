#include<stdio.h>
int main(){
    int num , n;
    printf("enter the number : ");
    scanf("%d" , &num);
    printf("enter the nth position which you want to check :");
    scanf("%d",&n);
    if((num>>n) & 1){
        printf("value is set");
    }
    else{
        printf("value is unset");
    }
    return 0;
}