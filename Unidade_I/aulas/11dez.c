#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[20];
    int idade;
    int mat;
    char email[50];
};

struct professor{
    char nome[20];
    int idade;
    int mat;
    char email[50];
};


void preenche(struct aluno * estudante){

    printf("Digite o nome do aluno: ");
    scanf("%[^\n]", estudante->nome);
    printf("Digite a idade: ");
    scanf("%d", &estudante->idade);
    printf("Digite a matrícula");
    scanf("%d", &estudante->mat);
    printf("Digite o email: ");
    scanf("%s", estudante->email);
}

void imprime(struct aluno * estudante){

    printf("Nome: %s \n", estudante->nome);
    printf("Idade: %d\n", estudante->idade);
    printf("Matrícula: %d\n", estudante->mat);
    printf("Email: %s\n", estudante->email);
}

void preencheP(struct professor * professor){

    printf("Digite o nome do professor: ");
    scanf("%s", professor->nome);
    printf("Digite a idade: ");
    scanf("%d", &professor->idade);
    printf("Digite a matrícula");
    scanf("%d", &professor->mat);
    printf("Digite o email: ");
    scanf("%s", professor->email);
}

void imprimeP(struct professor * professor){

    printf("\nNome: %s \n", professor->nome);
    printf("Idade: %d\n", professor->idade);
    printf("Matrícula: %d\n", professor->mat);
    printf("Email: %s\n", professor->email);
}

int main(void){
    /*
    alocação estática

    struct aluno estudante;
    printf("Digite o nome do aluno: ");
    scanf("%[^\n]", estudante.nome);
    printf("Digite a idade: ");
    scanf("%d", &estudante.idade);
    printf("Digite a matrícula");
    scanf("%d", &estudante.mat);
    printf("Digite o email: ");
    scanf("%s", estudante.email);
    return 0;
    */

   // alocação dinâmica:

    struct aluno * estudante = malloc(sizeof(struct aluno));
    struct professor * professor = malloc(sizeof(struct professor));

    // verificando se há espaço no computador
    if (estudante == NULL){
        exit(1);
    }

    // coletando e imprimindo os dados do aluno
    printf("Dados do Aluno:\n");
    preenche(estudante);
    printf("+++++++++++++++++++++++\n");
    imprime(estudante);

    // coletando e imprimindo os dados do professor
    printf("Dados do Professor:\n");
    preencheP(professor);
    printf("+++++++++++++++++++++++\n");
    imprimeP(professor);

    // liberando a memória
    free(estudante);
    free(professor);

    return 0;

}