#include <stdio.h>
#include <stdlib.h>

/* Exemplo de ANINHAMENTO DE ESTRUTURAS*/
typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo; 
} Disciplina;

typedef struct aluno{
    char nome[20];
    int idade;
    int matricula;
    Disciplina materias; // aninhamento de estruturas disciplina na estrutura aluno
} Aluno;

int main(void){
    // criando uma struct do tipo aluno
    Aluno aluno;

    aluno.idade = 19; // acessando o campo idade da struct aluno
    aluno.matricula = 2023; // acessando o campo matricula da struct aluno
    aluno.materias.codigo = 98078; // acessando o campo codigo da struct disciplina que está dentro da struct aluno
   
    // imprimindo os dados do aluno
    printf("Idade: %d\n", aluno.idade);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Codigo da disciplina: %d\n", aluno.materias.codigo);
    return 0;
}