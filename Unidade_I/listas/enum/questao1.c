#include <stdio.h>

typedef enum genero{
    MASCULINO,
    FEMININO
} Genero;

typedef struct pessoa{
    char nome[50];
    int idade;
    Genero genero;
} Pessoa;

void ler_dados(Pessoa * pessoa){
    printf("Informe o nome:\t");
    scanf("%s", pessoa->nome);
    printf("Informe a idade:\t");
    scanf("%d", &pessoa->idade);
    printf("Informe o genero: \n\t -> Masculino[0] \n\t ->Feminino[1] \t");
    scanf("%d", &pessoa->genero);
}

void imprime_dados(Pessoa pessoa){
    printf("=====================================\n");
    printf("\t Dados da pessoa\n");
    printf("=====================================\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    if(pessoa.genero == MASCULINO){
        printf("Genero:\tmasculino\n");
    }else if(pessoa.genero == FEMININO){
        printf("Genero:\tfeminino\n");
    }else{
        printf("Genero:\tinvalido\n");
    }

    /*
        UTILIZANDO OPERADOR TERNARIO

        pessoa->genero_pessoa==masculino ? printf("Genero:\tmasculino\n") : printf("Genero:\tfeminino\n");
    */
}

int main(void){
    Pessoa pessoa;
    ler_dados(&pessoa);
    imprime_dados(pessoa);
    return 0;
}