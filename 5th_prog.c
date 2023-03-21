#include<stdio.h>
float circle_diameter(float r){
    return 2*r ;
}
float circle_area(float r){
    int PI = 3.14;
    return PI*r*r;
}
int main(){
    float radius = 4.56;
    printf("diameter is %.2f because radius is %.2f and area of the circle is %.2f",circle_diameter(radius) , radius , circle_area(radius));
    return 0;
}