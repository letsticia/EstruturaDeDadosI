#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

// para compilar, sempre faça os TAD primeiro

int main(){
    Aluno * aluno;
    aluno = recebe_dados();

    imprime(aluno);
    libera(aluno);
    
    return 0;
}