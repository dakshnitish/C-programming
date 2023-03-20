#include <stdio.h>
int fib_recursive(int n)
{
          if (n == 0 || n == 1){
            return n;
          }
          else{
            return fib_recursive(n - 1) + fib_recursive(n - 2);
          } 

    }

int arr[6];
int main()
{
    int number = 10;
    for(int i = 0 ; i<number ; i++){
           arr[i] = fib_recursive(i);
    }
    for (int j = 0 ; j<6 ; j++){
        printf("%d " , arr[j]);
    }
    return 0;
}