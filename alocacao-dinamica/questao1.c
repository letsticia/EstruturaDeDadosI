#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    // váriaveis necessárias para os laços
    int PessoasN, contador, contador1;

    // armazena a quantidade de mulheres e a porcetagem das que gostaram
    int Mulheres = 0;
    int PorcentagemFem = 0;
    float totalPorcentagemFem = 0;

    // armazena a quantidade de homens e a porcentagem dos que não gostaram
    int Homens = 0;
    int PorcentagemMasc = 0;
    float totalPorcentagemMasc = 0;


    // atribuindo à variável PessoasN a quantidade de pessoas que serão entrevistadas
    printf("Digite a quantidade de pessoas que serão entrevistadas: ");
    scanf("%d", &PessoasN);

    // criando as matrizes para receber as respostas de cada pessoa
    char primeiraPergunta[PessoasN];
    char segundaPergunta[PessoasN];

    // criando um cabeçalho no terminal
    printf("============================================================\n");

    // iniciando o laço para que sejam feitos os inputs
    for (contador = 0; contador < PessoasN; contador++){
    printf("Sexo do entrevistado (%d) [M/F]: ", contador);
    scanf(" %c", &primeiraPergunta[contador]);
    printf("Gostou do produto (%d) [S/N]: ", contador);
    scanf(" %c", &segundaPergunta[contador]); 
    printf("============================================================\n");
    }
    
    // iniciando o laço para que sejam feitas as contagens
    for (contador1 = 0; contador1 < PessoasN; contador1++)
    {
        // contando a quantidade de mulheres e a porcentagem das que gostaram
        if (primeiraPergunta[contador1] == 'F' || primeiraPergunta[contador1] == 'f')
        {
            Mulheres++;
            if (segundaPergunta[contador1] == 'S' || segundaPergunta[contador1] == 's')
            {
                PorcentagemFem++;
            }
        }
        // contando a quantidade de homens e a porcentagem dos que não gostaram
        if (primeiraPergunta[contador1] == 'M' || primeiraPergunta[contador1] == 'm')
        {
            Homens++;
            if (segundaPergunta[contador1] == 'N' || segundaPergunta[contador1] == 'n')
            {
                PorcentagemMasc++;
            }
        }
    }
    
    // calculando as porcentagens femininas
    if (Mulheres != 0){
        float totalPorcentagemFem = (PorcentagemFem * 100)/Mulheres;
    }

    // calculando as porcentagens masculinas
    if (Homens !=0){
        float totalPorcentagemMasc = (PorcentagemMasc * 100)/Homens;
    }
    

    // imprimindo as informações
    printf("=============== INFORMAÇÕES SOBRE A PESQUISA ===============\n");
    printf("Um total de %d pessoas foram entrevistadas, dentre elas: \n", PessoasN);
    printf("%d são mulheres e %d são homens;\n ", Mulheres, Homens);
    printf("Dentre as mulheres, um total de %.2f por cento gostaram do produto\n", totalPorcentagemFem);
    printf("Dentre as homens, um total de %.2f por cento não gostaram do produto\n", totalPorcentagemMasc);
    
    // finalizando o programa
    return 0;
}