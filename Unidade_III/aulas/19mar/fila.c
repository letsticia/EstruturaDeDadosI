#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

struct fila{
    int inicio, fim;
    int quantidade;
    int MAX_SIZE;
    int *vetor;
};

Fila* criaFila(int MAX_SIZE){
    Fila * fila = (Fila*) calloc(1, sizeof(Fila));

    fila->vetor = (int*) calloc(MAX_SIZE, sizeof(int));

    fila->MAX_SIZE = MAX_SIZE;
    fila->inicio = 0;
    fila->fim = 0;
    fila->quantidade = 0;

    return fila;
}

void destruirFila(Fila ** fila){
    Fila * fila_auxiliar = *fila;
    
    free(fila_auxiliar->vetor);
    free(fila_auxiliar);

    *fila = NULL;
}

int filaVazia(Fila * fila){
    return fila->quantidade == 0;
}

int filaCheia(Fila * fila){
    return fila->quantidade == fila->MAX_SIZE;
}

int insereFila(Fila * fila, int elemento){
    
    if (filaCheia(fila)){
        printf("Warning: A fila está cheia\n");
        return 0;
    } else {
        fila->vetor[fila->fim] = elemento;
        fila->fim = (fila->fim + 1) % fila->MAX_SIZE;
        fila->quantidade++;

        return 1;
    }
}

int removeFila(Fila * fila){
    if (filaVazia(fila)){
        printf("Warning: A fila está vazia\n");
        return 0;
    } else {
        fila->inicio = (fila->inicio + 1) % fila->MAX_SIZE;
        fila->quantidade--;

        return 1;
    }
}

int consultaFila(Fila * fila, int * elemento){
    if (filaVazia(fila)){
        printf("Warning: A fila está vazia\n");
        return 0;
    } else {
        *elemento = fila->vetor[fila->inicio];
        return 1;
    }
}