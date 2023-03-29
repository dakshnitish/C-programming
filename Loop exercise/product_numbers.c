#include<stdio.h>
#include<math.h>
int main(){
    int number;
    int temp;
    printf("enter the number :");
    scanf("%d",&number);
    int product = 1;
    temp = number;
    while(temp>=1){
        number = temp;
       
        product = product * (number%10);
        temp = number/10;
    }
    printf("product is %d",product);
    return 0;
}
// int main(){
//     int number = 1234;
//     int len = (int) log10(number)+1;
//     printf("%d",len);
    // for(int i = 0;i< len ;i++){
    //     int temp = number;
    //     number = temp%10;
    //     printf("%d",number);
    //     number =temp/10;
    // }
//     return 0;
// }