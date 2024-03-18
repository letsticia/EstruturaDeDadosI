#include "pilha.h"
#include "malloc.h"
#include "stdio.h"
#define elementosMax 50

struct pilha{
    int elementosAtuais;
    float vetor[elementosMax];

};

Pilha* pilha_cria(void){
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));

    if (pilha == NULL){
        printf("Não há espaço");
    }

    pilha->elementosAtuais = 0;
    return pilha;
}

void pilha_push(Pilha* pilha, float variavel){

    if(pilha->elementosAtuais == elementosMax){
        printf("A capacidade da pilha estourou!");
        exit(1);
    }

    pilha->vetor[pilha->elementosAtuais] = variavel; // adicionando a variavel ao vetor no topo da pilha
    pilha->elementosAtuais++; // incrementando os elementos atuais

}

int pilha_vazia(Pilha* pilha){
    return (pilha->elementosAtuais == 0); // retorna 1, se a pilha estiver vazia, 0 caso contrário
}

float pilha_pop(Pilha* pilha){
    float variavel;

    if (pilha_vazia(pilha)){
        printf("pilha vazia. \n");
        exit(1);
    }

    variavel = pilha ->vetor[pilha->elementosAtuais-1]; // acessando o elemento do topo
    pilha->elementosAtuais--; // removendo o elemento do topo

    return variavel;
}

void pilha_libera(Pilha* pilha){
    free(pilha);
}

void pilha_imprime(Pilha* pilha){
    int contador;

    for (contador = (pilha->elementosAtuais - 1); contador >= 0; contador--){
        printf("O elemento %d: %.2f\n", contador, pilha->vetor[contador]);
    }
}