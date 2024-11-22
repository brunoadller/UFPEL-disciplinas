#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia,mes, ano;

} data;

int main(){
    data *d;//ponteiro de data que apontará para os elementos da structr data
    d = (data*) malloc(sizeof(data));
    if( d == NULL){
        exit(EXIT_FAILURE);
    }
    d->dia = 07;
    d->mes = 03;
    d->ano = 2024;

    printf("%d/%d/%d \n", d->dia, d->mes, d->ano);


    free(d);


    return 0;
}