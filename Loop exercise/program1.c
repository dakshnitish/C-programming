#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d" ,&n);
    // int i = 0;
    while(n>=1){
        printf("%d\n",n);
        n--;
    }
    return 0;
}