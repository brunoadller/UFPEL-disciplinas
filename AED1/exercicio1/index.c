#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define tam 5

char *shift_string(char *str);
int main(){
    char palavra[] = "zip1er";
    
    printf(" %s \n", shift_string(palavra));
    return 0;

}

char *shift_string(char *str){
    char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int tam_palavra = strlen(str);
    int tam_alfa = strlen(alfabeto);
    int i,j;
    char *palavra_nova = (char*)malloc(sizeof(char) * tam_palavra);
    char *nao_letra = (char *) malloc(sizeof(char));
    if(palavra_nova == NULL || nao_letra == NULL){
        exit(EXIT_FAILURE);
    }
    
    for(j = 0; j < tam_alfa; j++){
        for(i = 0; i < tam_palavra; i++){
            if(alfabeto[j] == str[i]){
               palavra_nova[i] = alfabeto[j+1];
            }
            if(str[i] == 'z' ){
                palavra_nova[i] = 'a';
            }
           

        }
    }

   return palavra_nova;

}

//inverte uma string:
/*
int i, j;
    char temp;

    for(int i = 0, j = tamanho - 1; i < j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
*/