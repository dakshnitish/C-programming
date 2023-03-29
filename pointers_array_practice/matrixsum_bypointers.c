#include <stdio.h>
#define N 2
void matrixSum(int p1[N][N],int p2[N][N],int resultant[N][N]){
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            *(*(resultant+i)+j)= *(*(p1+i)+j)+ *(*(p2+i)+j);
            printf("%d ",*(*(resultant+i)+j));
        }
        printf("\n");
    }    
}     
int main(){
    int a1[N][N]={{1,2},{3,4}};
    int a2[N][N]={{5,6},{7,8}};
    int result[N][N];
    matrixSum(a1,a2,result);
// void matrixSum(int p1[2][2],int p2[2][2],int resultant[2][2]){
//     for(int i = 0;i<2;i++){
//         for(int j = 0;j<2;j++){
//             int sum = sum + (p1[i][j]+p2[i][j]);
//             resultant[i][j]= sum;
//             printf("%d ",sum);
//             sum = 0;
//         }
//         printf("\n");
//     }
// }
    return 0;
}