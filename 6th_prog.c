#include<stdio.h>
#include<string.h>
void conversion(float n){
    float in_meter = n/100;
    float in_km = n/1000;
    printf("length %f in meter and %f in km ",in_meter,in_km );
}

int main(){
    float n ;
    printf("enter the value in cm :");
    scanf("%f" , &n);
    conversion(n);
    return 0;
}