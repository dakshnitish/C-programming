#include<stdio.h>
int main(){
    int array[2][3] ={{1,2,3},{4,5,6}};
    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",array[i][j]);
        }
    }    
    printf("\n");    

    int array_3D[2][2][3] ={{{1,2,3},{4,5,6}},
                            {{7,8,9},{10,11,12}}};
    for(int i = 0;i<2;i++){
        for(int j =0;j<2;j++){
            for(int k = 0;k<3;k++){
                printf("%d ",array_3D[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}