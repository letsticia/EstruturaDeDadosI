#include "fila.h"
#include <stdio.h>

int main(void){

    Fila * fila = criaFila(5);

    int vazia = filaVazia(fila);

    if (vazia == 1){
        printf("A fila está vazia\n");
    }
    
    insereFila(fila, 1);

    insereFila(fila, 2);

    removeFila(fila);

    int elemento;

    consultaFila(fila, &elemento);

    printf("Elemento Inicial: %d\n", elemento);

    int cheia = filaCheia(fila);

    if (cheia == 0){
        printf("A fila não está cheia\n");
    }

    destruirFila(&fila);

}