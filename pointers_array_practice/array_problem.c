#include<stdio.h>
int main(){
    int array[5][5] ={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int row_total = 0;
    int column_total = 0;
    printf("row total is : ");
    for(int i = 0;i<5;i++){
        for(int j =0;j<5;j++){
            row_total+=array[i][j];
        }
        printf("%d ",row_total);
        row_total = 0;
    }
    printf("\ncolumn total is : ");
      for(int j= 0;j<5;j++){
        for(int i =0;i<5;i++){
            column_total+=array[i][j];
        }
        printf("%d ",column_total);
        column_total = 0;
    }

    return 0;
}