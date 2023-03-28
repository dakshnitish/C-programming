#include<stdio.h>
#define maxSize 100

int main(){
    int a[maxSize];
    int b[maxSize];
    int *p = a, N;
    int *c = b;
    printf("enter the size of the array :");
    scanf("%d",&N);
    printf("enter the number you want to in array :");
    for(int i = 0;i<N;i++){
        scanf("%d",p+i);
    }
    printf("all th numbers in the array are :\n");
    for(int i = 0;i<N;i++){
        printf("%d ",*(p+i));
    }
    printf("\nall the numbers in second array are :\n");
    for(int i = 0;i<N;i++){
        c = (p+i);
        printf("%d ",*c);
    }
    return 0;
}