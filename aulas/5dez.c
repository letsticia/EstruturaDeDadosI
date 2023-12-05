#include <stdlib.h>

int main(void){

    // criando um ponteiro que receberá o endereço do primeiro elemento do vetor
    int *vetor = malloc(3*sizeof(int));

    /*
    =============== EXEMPLO ======================================  

    vetor -> endereço do primeiro elemento (como se fosse &vetor[0])
    vetor + 1-> endereço do primeiro elemento (como se fosse &vetor[1])
    vetor + 2-> endereço do primeiro elemento (como se fosse &vetor[2])
    */

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