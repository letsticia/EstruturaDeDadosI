#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

// para compilar, sempre faça os TAD primeiro

int main(){

    int quantidade;
    int contador;
    int contador2;

    printf("digite a quantidade de alunos a serem matriculados: ");
    scanf("%d", &quantidade);

    Aluno ** estudantes = matricula(quantidade);

    if (estudantes == NULL){
        printf("Sem memória!\n");
        exit(1);
    }

    for (contador = 0; contador < quantidade; contador++){
        
        printf("====================================\n");
        printf("Dados do aluno %d\n", contador+1);
        printf("====================================\n");
        imprime(estudantes[contador]);
        
    }
    printf("====================================\n");
    printf("Liberando a memória do vetor\n");

    for (contador2 = 0; contador2 < quantidade; contador2++){
        libera(estudantes[contador2]);
    }

    free(estudantes);
    printf("Memória liberada! Saindo do programa...\n");
    printf("====================================\n");

    return 0;
}