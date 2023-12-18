#include <stdio.h>
#include <stdlib.h>

void respostas(char *primeiraPergunta[], char *segundaPergunta[], int PessoasN){
    int contador;
    for (contador = 0; contador < PessoasN; contador++){
        printf("Sexo do entrevistado (%d) [M/F]: ", contador);
        scanf(" %c", (*primeiraPergunta)[contador]);
        printf("Gostou do produto (%d) [S/N]: ", contador);
        scanf(" %c", (*segundaPergunta)[contador]);
        printf("============================================================\n");
    }
}

void porcentagens(char *primeiraPergunta[], char *segundaPergunta[], int PessoasN, int *Mulheres, int *PorcentagemFem, int *Homens, int *PorcentagemMasc){
    int contador;
    for (contador = 0; contador < PessoasN; contador++)
    {
        // contando a quantidade de mulheres e a porcentagem das que gostaram
        if ((*primeiraPergunta)[contador] == 'F' || (*primeiraPergunta)[contador] == 'f')
        {
            (*Mulheres)++;
            if ((*segundaPergunta)[contador] == 'S' || (*segundaPergunta)[contador] == 's')
            {
                (*PorcentagemFem)++;
            }
        }
        // contando a quantidade de homens e a porcentagem dos que não gostaram
        if ((*primeiraPergunta)[contador] == 'M' || (*primeiraPergunta)[contador] == 'm')
        {
            (*Homens)++;
            if ((*segundaPergunta)[contador] == 'N' || (*segundaPergunta)[contador] == 'n')
            {
                (*PorcentagemMasc)++;
            }
        }
    }
}

void informacoes(int PessoasN, int Mulheres, int PorcentagemFem, int Homens, int PorcentagemMasc){
    float totalPorcentagemFem = 0;
    float totalPorcentagemMasc = 0;
    totalPorcentagemFem = (PorcentagemFem * 100) / Mulheres;
    totalPorcentagemMasc = (PorcentagemMasc * 100) / Homens;
    printf("============================================================\n");
    printf("A quantidade de pessoas entrevistadas foi de %d.\n", PessoasN);
    printf("A quantidade de mulheres entrevistadas foi de %d, sendo que %d%% delas gostaram do produto.\n", Mulheres, totalPorcentagemFem);
    printf("A quantidade de homens entrevistados foi de %d, sendo que %d%% deles não gostaram do produto.\n", Homens, totalPorcentagemMasc);
}

int main(void){
    // variáveis necessárias para os laços
    int PessoasN, contador, contador1;

    // armazena a quantidade de mulheres e a porcetagem das que gostaram
    int Mulheres = 0;
    int PorcentagemFem = 0;
    float totalPorcentagemFem = 0;

    // armazena a quantidade de homens e a porcentagem dos que não gostaram
    int Homens = 0;
    int PorcentagemMasc = 0;
    float totalPorcentagemMasc = 0;

    printf("Digite a quantidade de pessoas que serão entrevistadas: ");
    scanf("%d", &PessoasN);

    // criando as matrizes para receber as respostas de cada pessoa
    char *primeiraPergunta = (char *) malloc(PessoasN * sizeof(char));
    char *segundaPergunta = (char *) malloc(PessoasN * sizeof(char));

    respostas(&primeiraPergunta, &segundaPergunta, PessoasN);
    porcentagens(&primeiraPergunta, &segundaPergunta, PessoasN, &Mulheres, &PorcentagemFem, &Homens, &PorcentagemMasc);
    informacoes(PessoasN, Mulheres, PorcentagemFem, Homens, PorcentagemMasc);
    
}