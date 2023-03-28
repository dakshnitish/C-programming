#include<stdio.h>
#define size 20
void reverseArray(int *arr[] ,int N){
      for(int i = N-1;i>=0;i--){
            printf("%d ",*(arr+i));
      }
}
int main(){
    int n = 5;
    int a[5]={1,2,3,4,5};
    reverseArray(a,n);
    for(int i = 0;i<n;i++){
            printf("%d ",*(a+i));
    }

    return 0;
}