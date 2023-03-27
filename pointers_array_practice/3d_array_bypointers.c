#include <stdio.h>
int main(){
    int array[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
    printf("%d",*(**(array+1)+2));
    return 0;
}

