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

    printf("Topo da pilha: %.2f\n", topo(pilha));

    Pilha * pilha2 = pilha_cria();

    pilha_push(pilha2, 8);
    pilha_push(pilha2, 9);
    pilha_push(pilha2, 10);
    pilha_push(pilha2, 11);
    pilha_push(pilha2, 12);
    
    printf("Pilha 2:\n");

    pilha_imprime(pilha2);

    printf("Concatenando pilhas...\n");

    concatena_pilhas(pilha, pilha2);

    printf("Liberando pilha 1: \n");
    pilha_libera(pilha);

    printf("Liberando pilha 2: \n");
    pilha_libera(pilha2);

    return 0;

}