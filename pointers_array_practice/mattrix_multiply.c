#include<stdio.h>
#define n 50
int main(){
    int c_1 , r_1;
    int c_2 , r_2;
    int c_3 , r_3;
    int i ,j ,k;
    int matrix_1[n][n];
    int matrix_2[n][n];
    int matrix_3[n][n];//resultant matrix
    int sum = 0;
    printf("enter the rows and columns of the matrix_1 : ");
    scanf("%d %d",&r_1 ,&c_1);
    printf("enter the element for matrix_1 : \n");
    for(i = 0 ; i< r_1 ;i++){
        for(j = 0;j< c_1 ;j++){
            scanf("%d", &matrix_1[i][j]);
        }
    }
    printf("enter the rows and columns of the matrix_2 : ");
    scanf("%d %d",&r_2,&c_2);
    
    if(c_1 == r_2){
        printf("enter the element for matrix_2 : \n");
        for(i = 0 ; i< r_2 ;i++){
            for(j = 0;j< c_2 ;j++){
                scanf("%d", &matrix_2[i][j]);
                }
            }
        for (i = 0; i < r_1; i++){
            for (j = 0; j < c_2; j++){
                for (k = 0; k < r_2; k++){
                    sum += (matrix_1[i][k] * matrix_2[k][j]);
                }
                matrix_3[i][j] = sum;
                sum = 0;
            }
        }
        printf("resultant matrix : \n");
        for (i = 0; i < r_1; i++){
            for (j = 0; j < c_2; j++){
                printf("%d ", matrix_3[i][j]);
            }
            printf("\n");
        }    
    }
    else{
        printf("Oops ! sorry we can not multiply");
    }


    return 0;
}