#include<stdio.h>
int main(){
    int seen[10]={0};
    int N;
    int remp;
    printf("enter the number : ");
    scanf("%d",&N);
    while(N>0){
        remp = N%10;
        if(seen[remp] == 1){
            
            break;
        }
        seen[remp] = 1;
        N = N/10;
    }
    if(N>0){
        printf("yes number is repetitive");
    }
    else{
        printf("no repetitive number is available");
    }
    return 0;
}