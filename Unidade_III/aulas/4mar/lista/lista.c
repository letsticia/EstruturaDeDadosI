#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct lista{
    int informacao;
    struct lista *prox_elemento;
}; 

Lista* cria_lista(void){
    return NULL;
}

Lista* insere_elemento(Lista* lista, int valor){

    // Aloca memória para um novo nó
    Lista* novo_no = (Lista*) malloc(sizeof(Lista));


    if (novo_no == NULL){
        printf("Erro de alocação de memória\n");
        exit(1);
    }

    // Adiciona o valor no campo informação do novo nó
    novo_no->informacao = valor;
    // Conecta o novo nó ao início da lista
    novo_no->prox_elemento = lista;

    return novo_no;
}


void imprime_lista(Lista* lista){
    Lista * contador;

    for (contador = lista; contador != NULL; contador = contador->prox_elemento){
        printf("%d\n", contador->informacao);
    }
}

int verifica_lista_vazia(Lista* lista){
    if (lista == NULL){
        printf("Lista vazia\n");
        return 1;
    } else {
        printf("Lista não vazia\n");
        return 0;
    }
}

int busca_lista(Lista* lista, int valor){
    Lista * contador;

    if (verifica_lista_vazia(lista) == 1){
        return 0;
    } else{
        for (contador = lista; contador != NULL; contador = contador->prox_elemento){
            if (contador->informacao == valor){
                printf("Valor encontrado: %d\n", contador->informacao);
                return 1;
            }
        }
        printf("Valor não encontrado\n");
        return 0;
    }
}

Lista * retira_elemento(Lista* lista, int valor){
    Lista * anterior = NULL;
    Lista * atual = lista;

    while (atual != NULL && atual->informacao != valor){
        anterior = atual;
        atual = atual->prox_elemento;
    }

    if (atual == NULL){
        return lista;
    }

    if (anterior == NULL){
        lista = atual->prox_elemento;
    } else {
        anterior->prox_elemento = atual->prox_elemento;
    }

    return lista;
}