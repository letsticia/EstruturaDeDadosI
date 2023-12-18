#include <stdio.h>

int main(void){
    int quantidadeQuestoes;
    int alunos = 10;
    float notas[alunos];

    // primeiro dado a ser lido: quantidade de questões
    printf("Digite a quantidade de questoes: ");
    scanf("%d", &quantidadeQuestoes);

    // cada questão vale 10/N pontos
    float pontos = 10.0 / quantidadeQuestoes;

    char gabarito[quantidadeQuestoes];

    printf("=======================================================");
    // segundo dado a ser lido: gabarito da prova
    for (int contador = 0; contador < quantidadeQuestoes; contador++){
        printf("\nDigite o gabarito da questao %d: ", contador+1);
        scanf(" %c", &gabarito[contador]);
    }

    // terceiro dado a ser lido: respostas dos 10 alunos
    for (int contador = 0; contador < alunos; contador++){
        notas[contador] = 0;
        printf("=======================================================");
        for (int alunoId = 0; alunoId < quantidadeQuestoes; alunoId++){
            char resposta;
            printf("\nDigite a resposta do aluno %d para a questao %d: ", contador+1, alunoId+1);
            scanf(" %c", &resposta);

            // verificando se a resposta do aluno está correta
            if (resposta == gabarito[alunoId]){
                notas[contador] = notas[contador] + pontos;
            }
        }
    }

    int aprovados = 0;

    printf("\n=======================================================");
    // exibindo as notas dos alunos
    for (int contador = 0; contador < alunos; contador++){
        // verificando se o aluno foi aprovado ou reprovado
        if (notas[contador] >= 6.0){
            printf("\nO aluno %d foi aprovado com nota %.2f", contador+1, notas[contador]);
            aprovados++;
        }
        else{
            printf("\nO aluno %d foi reprovado com nota %.2f", contador+1, notas[contador]);
        }
    }
    printf("\n=======================================================");
    // calculando a porcentagem de aprovados
    float porcentagemAprovados = (aprovados * 100.0) / alunos;

    printf("\nAssim, a porcentagem de aprovados foi: %.2f%%\n", porcentagemAprovados);
}