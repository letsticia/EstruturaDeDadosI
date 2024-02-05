/*TAD: Aluno*/
#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

// chamamos de TAD porque estamos criando um novo tipo de dado (Aluno)
// o arquivo .c deve ter o mesmo nomme do arquivo .h e do tipo de dado
struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(){
    Aluno * estudante = (Aluno *) malloc(sizeof(Aluno));

    if (estudante == NULL){
        printf("Sem memória!\n");
        exit(1);
    }

    // ->, porque estudante é um ponteiro
    printf("Informe o nome do aluno: ");
    scanf("%[^\n]", estudante->nome); 
    
    printf("Informe a matrícula do aluno: ");
    scanf("%d", &estudante->matricula);

    printf("Informe o IRA do aluno: ");
    scanf("%f", &estudante->IRA);

    return estudante;
}

void imprime(Aluno * estudante){
    printf("=== Dados do Aluno ===\n");
    printf("Nome: %s\n", estudante->nome);
    printf("Matrícula: %d\n", estudante->matricula);
    printf("IRA: %.2f\n", estudante->IRA);
}

void libera(Aluno * estudante){
    printf("Liberando memória...\n");
    free(estudante);
    printf("Memória liberada!\n");
}