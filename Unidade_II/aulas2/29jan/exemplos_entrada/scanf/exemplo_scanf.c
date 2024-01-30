#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Cria o arquivo: entrada.txt
    FILE *arquivo = fopen("entrada.txt", "r");
    char c[20];
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado!\n");
    }

    fscanf(arquivo, "%s", c); // Lê o primeiro caractere do arquivo
    printf("%s\n", c); // Imprime o caractere lido
    
    if (!fclose(arquivo)){
        printf("Arquivo fechado com sucesso!\n");
    }

    return 0;
}