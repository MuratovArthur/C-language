#include <stdio.h>

int calcVol(int length, int width, int height){
    return length * width * height;
}

int calcArea(int length, int width){
    return length * width;
}

int main(){
    int l, w, h, vol, area;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter width: ");
    scanf("%d", &w);
    printf("Enter height: ");
    scanf("%d", &h);

    vol = calcVol(l, w, h);
    area = calcArea(l, w);
    printf("Volume: %d, Area: %d\n", vol, area);
}