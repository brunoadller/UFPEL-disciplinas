#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define tam 5

int maiores(int n, int *vet, int x);
int main(){
    int *vet;
   
    printf("Valores maiores que x: %d\n", maiores(10,vet, 6));


    return 0;

}
int maiores(int n, int *vet, int x){
    int cont = 0;
    srand(time(NULL));
    vet = (int *) malloc(sizeof(int) * n);
    if(vet == NULL){
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i< n; i++){
        vet[i] = rand() % n;
    }
    for(int i = 0; i < n; i++){
        if(vet[i] > x){
            cont = cont + 1;
        }
    }

    return cont;


}