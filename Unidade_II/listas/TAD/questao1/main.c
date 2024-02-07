#include "ContaBancaria.h"
#include <stdio.h>
#include <stdlib.h>

int ContaPrincipal(void){
    int conta;
    printf("Qual conta deseja acessar como Principal?\n");
    scanf("%d", &conta);

    switch (conta){
        case 1:
            return 1;
        case 2:
            return 2;
        default:
            printf("Conta inválida! Saindo do programa\n");
            exit(1);
    }
}

int OperacoesConta1(ContaBancaria * conta1, ContaBancaria * conta2, int opcao){
    float valor = 0;
    
    switch (opcao){
            case 1:
                printf("Informe o valor do depósito: ");
                scanf("%f", &valor);
                deposita(conta1, valor);
                break;
            case 2:
                printf("Informe o valor do saque: ");
                scanf("%f", &valor);
                saca(conta1, valor);
                break;
            case 3:
                printf("Informe o valor da transferência: ");
                scanf("%f", &valor);
                transfere(conta1, conta2, valor);
                break;
            case 4:
                saldo(conta1);
                break;
            case 5:
                excluiConta(conta1);
                printf("Saindo do programa...\n");
                exit(1);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
}

int OperacoesConta2(ContaBancaria * conta1, ContaBancaria* conta2, int opcao){
    float valor = 0;
    
    switch (opcao){
            case 1:
                printf("Informe o valor do depósito: ");
                scanf("%f", &valor);
                deposita(conta2, valor);
                break;
            case 2:
                printf("Informe o valor do saque: ");
                scanf("%f", &valor);
                saca(conta2, valor);
                break;
            case 3:
                printf("Informe o valor da transferência: ");
                scanf("%f", &valor);
                transfere(conta2, conta1, valor);
                break;
            case 4:
                saldo(conta2);
                break;
            case 5:
                excluiConta(conta2);
                printf("Saindo do programa...\n");
                exit(1);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
}

int main(void){

    printf("=========== Conta 1 ===========\n");
    ContaBancaria* conta1 = criaConta();
    printf("=========== Conta 2 ===========\n");
    ContaBancaria* conta2 = criaConta();

    int opcao = -1;

    int conta = ContaPrincipal();
    
    while (opcao != 0){ 
        printf("===============================\n");
        printf("\tOperações\n");
        printf("===============================\n");
        printf("1\tDepositar\n");
        printf("2\tSacar\n");
        printf("3\tTransferir\n");
        printf("4\tConsultar Saldo\n");
        printf("5\tExcluir conta\n");
        printf("0\tSair\n");

        printf("Informe a opção desejada: ");
        scanf("%d", &opcao);

        if (conta == 1){
            OperacoesConta1(conta1, conta2, opcao);
        } else{
            OperacoesConta1(conta2, conta1, opcao);
        }
    }

    /* Garantindo de liberar a memória*/
    free(conta1);
    free(conta2);

    return 0;
}