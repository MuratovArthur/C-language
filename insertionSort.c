#include <stdio.h>
#define N 6

void print_array(int A[]){
    for(int i=0;i<N;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(){
    int A[N]={5,3,1,2,6,4};
    for(int i=1; i<N;i++){
        int j=i;
        while(j>0&&A[j]<A[j-1]){
            int temp = A[j-1];
            A[j-1]=A[j];
            A[j]=temp;
            j--;
        }
        print_array(A);
    }
    
}