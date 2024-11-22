#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int id;
    char nome_produto[50];
} product;

int main(){

    product *p = (product*) malloc(sizeof(p) * 5);
        if(p == NULL){
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < 5; i++){
        
        printf("\nInforme o nome do produto: ");
        fgets(p[i].nome_produto,50, stdin);
        if(p[i].nome_produto[strlen(p[i].nome_produto) - 1] == '\n'){
            p[i].nome_produto[strlen(p[i].nome_produto) - 1] = '\0';
        }
        printf("\nInforme indereco do produto (id): ");
        scanf("%d", &p[i].id);
        getchar();
    }
    printf("/n/n");


    printf("\nProdutos cadastrados: \n");
    for(int i = 0; i < 5; i++){
        printf("\nID: %d", p[i].id);
        printf("\nNome produto: %s", p[i].nome_produto);
        printf("\n");
    }


}