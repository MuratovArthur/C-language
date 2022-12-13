#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i=1;
    int length=0;
    while(argv[i]!=NULL){
        int j=0;
        while(argv[i][j]!='\0'){
            j++;
        }
        length+=j;
        i++;
    }


    char* array_of_letters = (char*)malloc((length+1)*sizeof(char));
    int arr_max =0;
    i=1;
    while(argv[i]!=NULL){
        int j=0;
        while(argv[i][j]!='\0'){
            char ch=argv[i][j];
            int found=0;
            for(int i=0; i<arr_max;i++){
                if(ch==array_of_letters[i]){
                    found=1;
                }
            }
            if(found==0){
                array_of_letters[arr_max]=ch;
                arr_max++;
            }
            j++;
        }
        i++;
    }
    int* counters = (int*)calloc(arr_max, sizeof(int));
    for(int i=0; i<arr_max;i++){
        char ch = array_of_letters[i];
        int k=1;
        while(argv[k]!=NULL){
            int j=0;
            while(argv[k][j]!='\0'){
                char ch_in_arg=argv[k][j];
                if(ch==ch_in_arg){
                    counters[i]++;
                }
                j++;
            }
            k++;
        }
    }
    for(int i=0; i<arr_max;i++){
        printf("%c:%d", array_of_letters[i], counters[i]);
        printf("\n");
    }
    free(array_of_letters);
    free(counters);
}
