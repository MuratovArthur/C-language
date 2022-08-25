#include <stdio.h>
#include <math.h>

int main(){
    double length;
    int option;
    printf("Enter the length in metres: ");
    scanf("%lf", &length);

    do{
        printf("Conversion options:\n");
        printf("1. centimeters\n");
        printf("2. myriameters\n");
        printf("3. inches\n");
        printf("4. miles\n");
        printf("5. furlongs\n");
        printf("Enter the option: ");
        scanf("%d", &option);
    } while (option<=0||option>5);
    
    switch(option){
        case 1:
            length = length * 100;
            printf("Converted length: %2.2f\n", length);
            break;
        case 2:
            length = length * 0.0001;
            printf("Converted length: %2.2f\n", length);
            break;
        case 3:
            length = length * 39.3701;
            printf("Converted length: %2.2f\n", length);
            break;
        case 4:
            length = length * 0.000621371;
            printf("Converted length: %2.2f\n", length);
            break;
        case 5:
            length = length * 0.00497096;
            printf("Converted length: %2.2f\n", length);
            break;
    }

}