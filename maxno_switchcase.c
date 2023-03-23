#include <stdio.h>
int main(){
    int num1 = 245 ;
    int num2 = 30 ;
    switch(num1 > num2){
        case 0:
           printf("%d is greater" , num2);
           break;

        case 1:
           printf("%d is greater" , num1);
           break;
    }
    return 0;
}