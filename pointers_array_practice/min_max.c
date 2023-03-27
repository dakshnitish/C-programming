#include<stdio.h>
void minMax(int arr[],int len,int *min,int *max){
    *min = *max = arr[0];
    for(int i  = 1; i<len; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
}
int main(){
    int a[]={23,4,5,67,87,546,655,9,887,111,22,44,34,112,911};
    int min,max;
    int len= sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("minimum value in the array is %d and maximum value in the array is %d",min ,max);
    return 0;
}