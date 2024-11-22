#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define tam 5

int main(){
    int **M; //vetor d eponteiros
    srand(time(NULL));

    M = (int**) malloc(tam * sizeof(int*));
    if(M == NULL){
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < tam;i++){
        M[i] = (int*) malloc(tam * sizeof(int));
        if(M == NULL){
            exit(EXIT_FAILURE);
        }
    }

    for(int i = 0;i < tam; i++){
        for(int j = 0; j<tam; j++){
            M[i][j] = rand() % 50;
        }
    }

    for(int i = 0; i < tam; i++){
        printf("|  ");
        for(int j = 0;j < tam; j++){
            printf(" [%d] ", M[i][j]);
        }
        printf(" |\n");
    }

    for(int i =0; i < tam; i++){
        free(M[i]);
    }
    free(M);

}