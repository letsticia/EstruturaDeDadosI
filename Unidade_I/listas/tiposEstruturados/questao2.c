#include <stdio.h>
#include <stdlib.h>
#define MAXVAGAS 10

typedef struct aluno{
    char nome[80];
    int matricula;
    char turma;

    float nota1;
    float nota2;
    float nota3;

    float media;
} Aluno;


void matricula(int n, Aluno** alunos){

    if(n < MAXVAGAS){ 
        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[n]->nome);

        printf("Digite a matricula do aluno: ");
        scanf("%d", &alunos[n]->matricula);

        printf("Digite a turma do aluno(a): ");
        scanf(" %c", &alunos[n]->turma);
    }else{
        printf("\nNão há vagas disponíveis!\n");
    }
}


void lanca_notas(int n, Aluno** alunos){
    int contador;
    
    for(contador = 0; contador < n; contador++){
        printf("Digite a primeira nota do aluno(a) %s: ", alunos[contador]->nome);
        scanf("%f", &alunos[contador]->nota1);

        printf("Digite a segunda nota do aluno(a) %s: ", alunos[contador]->nome);
        scanf("%f", &alunos[contador]->nota2);

        printf("Digite a terceira nota do aluno(a) %s: ", alunos[contador]->nome);
        scanf("%f", &alunos[contador]->nota3);

        alunos[contador]->media = (alunos[contador]->nota1 + alunos[contador]->nota2 + alunos[contador]->nota3)/3;
    }
}


void imprime_tudo(int n, Aluno** alunos){
    int contador;
    printf("\n====================================\n");
    printf("\t\t Informações dos alunos\n");
    printf("====================================\n");
    for(contador = 0; contador < n; contador++){
        printf("====================================\n");
        printf("Nome: %s\n", alunos[contador]->nome);
        printf("Matricula: %d\n", alunos[contador]->matricula);
        printf("Turma: %c\n", alunos[contador]->turma);
        printf("Nota 1: %.2f\n", alunos[contador]->nota1);
        printf("Nota 2: %.2f\n", alunos[contador]->nota2);
        printf("Nota 3: %.2f\n", alunos[contador]->nota3);
        printf("Média: %.2f\n", alunos[contador]->media);
        printf("====================================\n");
    }
}


void imprime_turma(int n, Aluno** alunos, char turma){
    int contador;
    printf("\n====================================\n");
    printf("\t\t Informações dos alunos da turma %c\n", turma);
    printf("====================================\n");
    for(contador = 0; contador < n; contador++){
        if(alunos[contador]->turma == turma){
            printf("====================================\n");
            printf("Nome: %s\n", alunos[contador]->nome);
            printf("Matricula: %d\n", alunos[contador]->matricula);
            printf("Turma: %c\n", alunos[contador]->turma);
            printf("Nota 1: %.2f\n", alunos[contador]->nota1);
            printf("Nota 2: %.2f\n", alunos[contador]->nota2);
            printf("Nota 3: %.2f\n", alunos[contador]->nota3);
            printf("Média: %.2f\n", alunos[contador]->media);
            printf("====================================\n");
        }
    }
}

void imprime_turma_aprovados(int n, Aluno** alunos, char turma){
    int contador;
    printf("\n====================================\n");
    printf("\t\t Informações dos alunos aprovados da turma %c\n", turma);
    printf("====================================\n");
    for(contador = 0; contador < n; contador++){
        if(alunos[contador]->turma == turma && alunos[contador]->media >= 7.0){
            printf("====================================\n");
            printf("Nome: %s\n", alunos[contador]->nome);
            printf("Matricula: %d\n", alunos[contador]->matricula);
            printf("Turma: %c\n", alunos[contador]->turma);
            printf("Nota 1: %.2f\n", alunos[contador]->nota1);
            printf("Nota 2: %.2f\n", alunos[contador]->nota2);
            printf("Nota 3: %.2f\n", alunos[contador]->nota3);
            printf("Média: %.2f\n", alunos[contador]->media);
            printf("====================================\n");
        }
    }
}

void menu(int n, Aluno** alunos){
    int opcao;
    char turma;
    int sair = 0;
    while(sair == 0){
        printf("\n====================================\n");
        printf("\t\t Menu\n");
        printf("====================================\n");
        printf("1 - Lançar notas\n");
        printf("2 - Imprimir informações de todos os alunos\n");
        printf("3 - Imprimir informações de uma turma\n");
        printf("4 - Imprimir informações dos alunos\naprovados de uma turma\n");
        printf("5 - Sair\n");
        printf("====================================\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                lanca_notas(n, alunos);
                break;
            case 2:
                imprime_tudo(n, alunos);
                break;
            case 3:
                printf("Digite a turma desejada: ");
                scanf(" %c", &turma);
                imprime_turma(n, alunos, turma);
                break;
            case 4:
                printf("Digite a turma desejada: ");
                scanf(" %c", &turma);
                imprime_turma_aprovados(n, alunos, turma);
                break;
            case 5:
                printf("Saindo...\n");
                sair = 1;
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }

}

int main(void){

    Aluno** alunos = (Aluno**) malloc(MAXVAGAS * sizeof(Aluno*));
    int contador;
    for (contador = 0; contador < MAXVAGAS; contador++){
        alunos[contador] = NULL;
    }

    int opcao, n = 0;
    printf("Quantos alunos deseja matricular? ");
    scanf("%d", &n);

    for (contador = 0; contador < n; contador++){
        alunos[contador] = (Aluno*) malloc(sizeof(Aluno));
        matricula(contador, alunos);
    }

    
    menu(n, alunos);

    for (contador = 0; contador < n; contador++){
        free(alunos[contador]); // liberando a memória alocada para cada aluno
    }

    free(alunos); // liberando a memória alocada para o vetor de ponteiros

    return 0;
}