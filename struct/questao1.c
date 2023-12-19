#include <stdio.h>
#include <stdlib.h>

// criando uma struct para o funcionário
typedef struct funcionario{
    char nome[50];
    float salario;
    int identificador;
    char cargo[50];
}Funcionario;

void divisoria(){
    printf("============================================================\n");
}

// recebendo os valores fornecidos pelo usuário
void preenche(Funcionario * empregado){
    printf("Digite o nome do funcionario: ");
    scanf(" %s", empregado->nome);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &empregado->salario);
    printf("Digite o identificador do funcionario: ");
    scanf("%d", &empregado->identificador);
    printf("Digite o cargo do funcionario: ");
    scanf(" %s", &empregado->cargo);
}

// imprimindo os dados do funcionario
void imprime(Funcionario * empregado, int quantidadeFucionarios){
    printf("Nome: %s\n", empregado->nome);
    printf("Salario: %.2f\n", empregado->salario);
    printf("Identificador: %d\n", empregado->identificador);
    printf("Cargo: %s\n", empregado->cargo);
}

// alterando o salario do funcionario
void alteraSalario(Funcionario * empregado, float novoSalario){
    empregado->salario = novoSalario;
}

// exibindo o maior salario
void maiorSalario(Funcionario * empregado, int quantidadeFucionarios){
    int contador;
    float maiorSal = empregado[0].salario;
    int id;
    for (contador = 0; contador < quantidadeFucionarios; contador++){
        if (empregado[contador].salario > maiorSal){
            maiorSal = empregado[contador].salario;
            id = contador;
        }
    }
    printf("\nO maior salario e de %.2f do funcionario com cargo %s\n", maiorSal, empregado[id].cargo);
}

// exibindo o menor salario
void menorSalario(Funcionario * empregado, int quantidadeFucionarios){
    int contador;
    float menorSal = empregado[0].salario;
    int id;
    for (contador = 0; contador < quantidadeFucionarios; contador++){
        if (empregado[contador].salario < menorSal){
            menorSal = empregado[contador].salario;
            id = contador;
        }
    }
    printf("O menor salario e de %.2f do funcionario com cargo %s\n", menorSal, empregado[id].cargo);
}

int main(void){

    // quantidade de funcionarios a serem cadastrados
    int quantidadeFucionarios = 3;

    // alocando na memoria um vetor de funcionarios
    Funcionario * empregado = (Funcionario *) malloc(quantidadeFucionarios * sizeof(Funcionario));

    int contador;
    // preenchendo os dados dos funcionarios
    for (contador = 0; contador < quantidadeFucionarios; contador++){
        preenche(&empregado[contador]);
        divisoria();
    }

    divisoria();
    
    printf("Exibindo os dados dos funcionarios:\n");
    for (contador = 0; contador < quantidadeFucionarios; contador++){
        imprime(&empregado[contador], quantidadeFucionarios);
        divisoria();
    }


    printf("Funcionarios de maior salario e menor salario: \n");
    divisoria();
    maiorSalario(empregado, quantidadeFucionarios);
    menorSalario(empregado, quantidadeFucionarios);
    divisoria();

    // liberando a memoria alocada
    free(empregado);
    return 0;
}