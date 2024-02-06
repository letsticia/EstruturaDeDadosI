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
    scanf(" %[^\n]", estudante->nome); 
    
    printf("Informe a matrícula do aluno: ");
    scanf("%d", &estudante->matricula);

    printf("Informe o IRA do aluno: ");
    scanf("%f", &estudante->IRA);

    return estudante;
}

void imprime(Aluno * estudante){
    printf("Nome: %s\n", estudante->nome);
    printf("Matrícula: %d\n", estudante->matricula);
    printf("IRA: %.2f\n", estudante->IRA);
}

void libera(Aluno * estudante){
    free(estudante);
}

Aluno ** matricula(int quantidade){
    Aluno ** estudantes = (Aluno **) malloc(quantidade * sizeof(Aluno *));

    if (estudantes == NULL){
        printf("Sem memória!\n");
        exit(1);
    }

    for (int i = 0; i < quantidade; i++){
        printf("====================================\n");
        printf("Matriculando aluno %d...\n", i+1);
        printf("====================================\n");
        estudantes[i] = recebe_dados();
        printf("Aluno %d matriculado!\n", i+1);
    }
    
    return estudantes;
}