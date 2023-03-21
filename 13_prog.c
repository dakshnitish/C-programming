//highest bit

#include <stdio.h>
// int main(){
//     int number = 42 ;
//     int order = 0 ;
//     for(int i = 0 ; i<sizeof(int)*8 ;i++){
//         if((number>>i) & 1){
//             order = i;
//         }
//     }
//     printf("the highest set order of %d is on %dth position",number , order);
//     return 0;
// }

//lowest bit
int main(){
    int number = 20;
    int order = 0 ;
    for(int i = 0 ; i<sizeof(int)*8 ;i++){
        if((number >> i) & 1){
            order = i;
            break;
        }
    }
    printf("the lowest set order of %d is %dth position",number , order);
    return 0;
}
