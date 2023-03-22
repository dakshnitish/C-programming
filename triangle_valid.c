#include <stdio.h>
int main(){
    int side_1;
    int side_2;
    int side_3;
    printf("enter all the three sides : \n");
    scanf("%d%d%d",&side_1,&side_2,&side_3);
    if((side_1 + side_2) > side_3){
        if((side_2 + side_3) > side_1){
            if((side_1 + side_3) > side_2){
                printf("it is a triangle");
            }
            else("it is not a triangle");
        }
        else("it is not a triangle");
    }
    else("it is not a triangle");
    return 0;
}