#include <stdio.h>
#include <stdlib.h>

// função para criar uma divisória
void divisoria(){
    printf("============================================================\n");
}

// cria o gabarito da prova
void criaGabarito(char *gabarito, int quantidade){
    int contador;
    for (contador = 0; contador < quantidade; contador++){
        printf("Digite a resposta da questao %d: ", contador + 1);
        scanf(" %c", &gabarito[contador]);
    }
}

// recebe as respostas dos alunos
void respostasAlunos(char *gabarito, float *notas, int alunos, int quantidade, float pontos){
    int contador, contador1;
    char respostas;
    for (contador = 0; contador < alunos; contador++){
        notas[contador] = 0;
        for (contador1 = 0; contador1 < quantidade; contador1++){
            printf("Digite a resposta da questao %d do aluno %d: ", contador1 + 1, contador + 1);
            scanf(" %c", &respostas);

            if (respostas == gabarito[contador1]){
                notas[contador] = notas[contador] + pontos;
            }
        }
    }
}

// exibe os resultados da prova e calcula a quantidade de aprovados
void exibeResultados(char *gabarito, float *notas, int alunos, int quantidade, int *aprovados){
    int contador;
    for (contador = 0; contador < (alunos); contador++){
        if (notas[contador] >= 6.0){
            printf("O aluno %d foi aprovado com nota %.2f\n", contador + 1, notas[contador]);
            (*aprovados)++;
        }
        else{
            printf("O aluno %d foi reprovado com nota %.2f\n", contador + 1, notas[contador]);
        }
    }
}


int main(void){
    int quantidade = 0;
    int alunos = 4;
    float *notas = (float *) malloc(alunos * sizeof(float));
    int aprovados = 0;

    // primeiro dado a ser lido: quantidade de questões
    printf("Digite a quantidade de questoes: ");
    scanf("%d", &quantidade);

    divisoria();

    // cada questão vale 10/N pontos
    float pontos = 10.0 / quantidade;

    // criando o gabarito
    char *gabarito = (char *) malloc(quantidade * sizeof(char));

    // segundo dado a ser lido: gabarito
    criaGabarito(gabarito, quantidade);

    divisoria();
    
    // terceiro dado a ser lido: quantidade de alunos
    respostasAlunos(gabarito, notas, alunos, quantidade, pontos);

    divisoria();

    // exibindo os resultados
    exibeResultados(gabarito, notas, alunos, quantidade, &aprovados);

    divisoria();

    float porcentagemAprovados = (aprovados * 100.0) / alunos;
    // exibindo a porcentagem de aprovados
    printf("A porcentagem de aprovados foi de %.2f%%\n", porcentagemAprovados);

    // liberando a memória
    free(gabarito);
    free(notas);

    return 0;
}