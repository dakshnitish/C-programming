#include<stdio.h>
#define size 50

void swapArray(int *arr_1,int *arr_2,int n){
    int temp;
    for(int i = 0;i<n;i++){
        temp = *(arr_2 + i);
        *(arr_2+i)=*(arr_1+i);
        *(arr_1+i)=temp;
    }
        
}
int main(){
    int arr_1[5]={1,2,3,4,5};
    int arr_2[5]={6,7,8,9,10};
    int N = 5;
    printf("elements of array_1 :\n");
        for(int i = 0;i<5;i++){
        printf("%d ",*(arr_1+i));
    }
    printf("\nelements of array_2 :\n");
    for(int i  = 0;i<5;i++){
        printf("%d ",*(arr_2+i));
    }
    printf("\nafter swapping......\n");
    swapArray(arr_1,arr_2,N);
    printf("elements of array_1 :\n");
    for(int i = 0;i<5;i++){
        printf("%d ",*(arr_1+i));
    }
    printf("\nelements of array_2 :\n");
    for(int i  = 0;i<5;i++){
        printf("%d ",*(arr_2+i));
    }
    return 0;
}