#include <stdio.h>
#include <math.h>

double calcCircum(double radius){
    return 2*M_PI*radius;
}

double calcArea(double radius){
    return M_PI*radius*radius;
}

int main(){
    double radius, circumference, area;
    printf("Enter the radius: ");
    scanf("%lf", &radius);

    circumference = calcCircum(radius);
    area = calcArea(radius);
    printf("Circumference: %2.2f, Area: %2.2f\n", circumference, area);
}