#include <stdlib.h>
#include "lista_duplamente.h"

// nas listas duplamente encadeadas, cada nó tem um ponteiro para o próximo e para o anterior
struct lista_duplamente{
    int info;
    struct lista_duplamente *prox;
    struct lista_duplamente *ant;
};

ListaDuplamente* cria_lista(void){
    return NULL;
}

ListaDuplamente* insere_elemento(ListaDuplamente* lista, int valor){
    ListaDuplamente* novo_no = (ListaDuplamente*) malloc(sizeof(ListaDuplamente)); // alocando memória para um novo nó

    if (novo_no == NULL){
        printf("Erro de alocação de memória\n");
        exit(1);
    }

    novo_no->info = valor;
    novo_no->prox = lista;
    novo_no->ant = NULL;

    if (lista != NULL){
        lista->ant = novo_no;
    }

    return novo_no;
}

void imprime_lista_prox(ListaDuplamente* lista){
    ListaDuplamente * contador;

    for (contador = lista; contador != NULL; contador = contador->prox){
        printf("%d\n", contador->info);
    }
}

ListaDuplamente* ultimo_elemento(ListaDuplamente* lista){
    ListaDuplamente * contador;

    for (contador = lista; contador->prox != NULL; contador = contador->prox){
    }

    return contador;
}

void imprime_lista_ant(ListaDuplamente* lista){
    ListaDuplamente * contador;
    
    for (contador = ultimo_elemento(lista); contador != NULL; contador = contador->ant){
        printf("%d\n", contador->info);
    }

}

ListaDuplamente* busca_lista(ListaDuplamente* lista, int valor){
    ListaDuplamente * contador;

    for (contador = lista; contador != NULL; contador = contador->prox){
        if (contador->info == valor){
            return contador; // achou o elemento
        }
    }

    return NULL; // não achou o elemento
} 
