#include <stdio.h>
#include <stdlib.h>


int main(){

    int *ptr = (int*) malloc(sizeof(int) * 10);
    if(ptr == NULL){
        exit(EXIT_FAILURE);
    }
    int tam_vetor = sizeof(ptr);

    printf(" %d \n", tam_vetor );
    return 0;
}