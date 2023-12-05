#include <stdlib.h>

int main(void){

    // usando a alocação
    int *vetor = malloc(3*sizeof(int));

    if (vetor == NULL){
        printf("Erro na alocação de memória.");
        exit(1);
    }
    else{
        printf("Alocação bem sucedida");
    }

    // liberando a memória, uma vez que não será mais utilizado
    free(vetor);
    return 0;
}