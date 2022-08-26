#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, disc;
    double x1, x2;
    printf("Enter first coefficient: ");
    scanf("%d", &a);
    printf("Enter second coefficient: ");
    scanf("%d", &b);
    printf("Enter third coefficient: ");
    scanf("%d", &c);
    disc = pow(b, 2)-4*a*c;
    if(disc>0){
        x1 = (-b+sqrt(disc))/(2*a);
        x2 = (-b-sqrt(disc))/(2*a);
        printf("Roots: %2.2f, %2.2f\n", x1, x2);
    } else if(disc==0){
        x1 = -b/(2*a);
         printf("Root: %2.2f\n", x1);
    } else {
        printf("No real roots\n");
    }
        return 0;
}