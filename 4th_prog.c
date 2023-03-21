#include <stdio.h>
float perameter_rectangle(float height , float breadth){
    float perameter = 2*(height + breadth);
    return perameter;
}
int main(){
    float h;
    float b;
    printf("enter the height : ");
    scanf("%f" , &h);
    printf("enter the breadth : ");
    scanf("%f" , &b);
    printf("parameter is : %.2f",perameter_rectangle(h,b));
    return 0 ;
}