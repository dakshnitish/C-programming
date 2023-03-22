#include<stdio.h>
// int main(){
//     int num_1 = 10;
//     int num_2 = 15;
//     int max = num_1>num_2?num_1 : num_2 ;
//     printf("the maximum value is %d ",max);
//     return 0;
// }

int main(){
    int num_1 = 10 ;
    int num_2 = 15 ;
    int num_3 = 12 ;
    int max = num_1>num_2 && num_1>num_3 ? num_1 : num_2>num_3 ? num_2 : num_3 ;
    printf("the maximum value is %d ",max);
    return 0;
}