#include<stdio.h>
int main(){
    // int array[3]={1,2,3};
    // printf("enter the elements:\n");
    // for(int i = 0;i<3;i++){
    //         scanf("%d",(array + i));
    // }  
    int array_2d[3][3];
    printf("enter the elements in 3*3 formet i.e 9 elements :\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            // scanf("%d",(*(array_2d+i) + j));
            scanf("%d",&array_2d[i][j]);
        }
    }    
    // for(int i = 0;i<3;i++){
    //     for(int j = 0;j<3;j++){
    //         printf("%d ",*(*(array_2d+i)+j));
    //     }
    //     printf("\n");   
    // }
    int *p =array_2d;
    printf("print all the elements of the array : \n");
    for(; p<=&array_2d[2][2] ; p++){
        printf("%d ",*p);
    }
    return 0;
}