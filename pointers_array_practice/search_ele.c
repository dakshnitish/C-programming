#include<stdio.h>
void search_array(int *arr ,int number){
    int f;
    for(int i = 0;i<8;i++){
        if(number==*(arr + i)){
            f = 1;
            break;
        }
        else{
            continue;
        }
    }
    if(f==1){
        printf("number exist");
    }
    else{
        printf("number does not exist");
    }
}
int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    int array[8] ={1,2,3,4,5,6,7,8};
    search_array(array ,number );
    return 0;
}