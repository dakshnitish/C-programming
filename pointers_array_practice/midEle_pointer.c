#include<stdio.h>
int *findmid(int a[],int n){
      return &a[n/2];
}
int main(){
    int arr[]={1,2,3,4,5};
    int num = sizeof(arr)/sizeof(arr[0]);
    int *mid = findmid(arr , num);
    printf("the mid value of the given array is %d" , *mid);
    return 0;
}
// void fun(int *i){
//         *i = 15;
    
// }

// int main(){
//     int number = 10;
//     fun(&number);
//     printf("value is %d" ,number);
//     return 0;
// }