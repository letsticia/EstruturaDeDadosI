#include "pilha.h"

int main(void){

    Pilha * pilha = pilha_cria();

    pilha_push(pilha, 1);
    pilha_push(pilha, 3);
    pilha_push(pilha, 4);

    pilha_imprime(pilha);

}