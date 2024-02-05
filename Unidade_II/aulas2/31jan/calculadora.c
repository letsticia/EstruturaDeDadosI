#include <math.h>
#include <stdio.h>
#include "calculadora.h"

float adicao(float primeiro_numero, float segundo_numero){
    return primeiro_numero + segundo_numero;
}

float subtracao(float primeiro_numero, float segundo_numero){
    return primeiro_numero - segundo_numero;
}

float multiplicacao(float primeiro_numero, float segundo_numero){
    return primeiro_numero * segundo_numero;
}

float divisao(float primeiro_numero, float segundo_numero){
    if (segundo_numero == 0){
        printf("Nao e possivel dividir por zero!\n");
        return 0;
    }
    else {
        return primeiro_numero / segundo_numero;
    }
}

float potenciacao(float base, float expoente){
    return pow(base, expoente);
}
