#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Cria o arquivo: entrada.txt no modo "w" (write)
    FILE *arquivo = fopen("entrada_escrita.txt", "w");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado!\n");
    }

    // Escreve no arquivo
    fputs("Hello world!", arquivo);
    
    // Fecha o arquivo
    if (!fclose(arquivo)){
        printf("Arquivo fechado com sucesso!\n");
    }

    return 0; // Saindo da função main

}