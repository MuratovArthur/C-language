#include <stdio.h>

int gcd(int n, int m);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
}

int gcd(int n, int m){
    if(0==m) return n;
    return gcd(m, n%m);
}