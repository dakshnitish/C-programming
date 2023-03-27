#include <stdio.h>
int main(){
    int array[2][2] ={{1,2},{3,4}};
    int *p;
    for(p =&array[0][0]; p<= &array[1][1] ;p++){
        printf("%d ",*p);
    }
    return 0;
}