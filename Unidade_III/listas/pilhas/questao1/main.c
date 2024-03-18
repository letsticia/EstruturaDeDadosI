#include "pilha.h"
#include <stdio.h>

int main(void){

    Pilha * pilha = pilha_cria();

    pilha_push(pilha, 1);
    pilha_push(pilha, 3);
    pilha_push(pilha, 4);
    pilha_push(pilha, 5);
    pilha_push(pilha, 6);

    // testando a realocação
    pilha_push(pilha, 7);

    pilha_imprime(pilha);

    printf("Removendo dois itens\n");

    pilha_pop(pilha);
    pilha_pop(pilha);

    pilha_imprime(pilha);


    pilha_libera(pilha);

    return 0;

}