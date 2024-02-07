#include "ContaBancaria.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct contaBancaria{
    char titular[50];
    int numero;
    float saldo;
} ContaBancaria;

ContaBancaria* criaConta(void){
    ContaBancaria* conta = (ContaBancaria*) malloc(sizeof(ContaBancaria));

    if (conta == NULL){
        printf("Sem memória!\n");
        exit(1);
    }
    
    printf("Informe o nome do titular da conta: ");
    scanf(" %[^\n]", conta->titular);

    printf("Informe o número da conta: ");
    scanf("%d", &conta->numero);

    printf("Informe o saldo da conta: ");
    scanf("%f", &conta->saldo);

    return conta;
}

void deposita(ContaBancaria* conta, float valor){
    conta->saldo += valor;
    printf("Depósito realizado!\n");
}

void saca(ContaBancaria* conta, float valor){
    
    if (conta->saldo < valor){
        printf("Saldo insuficiente!\n");
    } else{
        conta->saldo -= valor;
        printf("Saque realizado!\n");
    }
}

void transfere(ContaBancaria* origem, ContaBancaria* destino, float valor){
    
    if (origem->saldo < valor){
        printf("Saldo insuficiente!\n");
        
    } else{
        origem->saldo -= valor;
        destino->saldo += valor;

        printf("Transferência realizada!\n");
    }
}

void saldo(ContaBancaria* conta){
    printf("Saldo: %.2f\n", conta->saldo);
}

void excluiConta(ContaBancaria* conta){
    free(conta);
    printf("Conta excluída!\n");
}