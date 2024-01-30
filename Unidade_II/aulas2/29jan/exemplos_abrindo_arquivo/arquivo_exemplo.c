#include <stdio.h>
#include <stdlib.h>


int main(void){
    FILE* fp;

    // abrindo o arquivo para escrita
    fp = fopen("arquivo.txt", "wt");

    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else{
        printf("Arquivo criado!\n");
    }

    char s[100];

    // escrevendo no arquivo
    // fprintf(fp, "Hello World!\n");

    // lendo do arquivo
    
    // fscanf(fp, "%s", &fp); // ler uma string do arquivo
    // fgetc(fp); // ler um caractere do arquivo
    // fgets(s, 100, fp); // ler uma string do arquivo (100 caracteres)

    
    // fechando o arquivo
    if (fclose(fp) == 0){
        printf("Arquivo fechado com sucesso!\n");
    } else{
        printf("Erro ao fechar o arquivo!\n");
    }

    return 0; // saindo da função main
}