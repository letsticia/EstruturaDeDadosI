#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct retangulo{
    float base;
    float altura;
} Ret;

typedef struct circulo{
    float raio;
} Circ;


Ret* ret_circunscrito(Circ* circ, float h){
    
    float diametro;
    
    Ret* ret = (Ret*) malloc(sizeof(Ret));

    diametro = 2 * circ->raio;

    ret->base = sqrt(pow(diametro, 2) - pow(h, 2));                                                          
    ret->altura = h;

    return ret;
}

Circ * circ_interno(Ret* ret){
    Circ* circ = (Circ*) malloc(sizeof(Circ));

    if(ret->altura > ret->base){
        circ->raio = ret->base/2;
    }else{
        circ->raio = ret->altura/2;
    }

    return circ;
}

void preenche_ret_circunscrito(Circ* circ){
    float h;

    printf("\n==============================================================================\n");
    printf("\t\t Retângulo circunscrito\n");
    printf("================================================================================\n");

    printf("Digite a altura do retângulo circunscrito: ");
    scanf("%f", &h);

    printf("Digite o raio do círculo: ");
    scanf("%f", &circ->raio);

    if (h > circ->raio){
        printf("A altura não pode ser maior que o raio!\n");
    }else{
        Ret* retangulo = ret_circunscrito(circ, h);
        printf("O maior retângulo circunscrito com a altura dada (%.2f) e o raio dado (%.2f) tem base %.2f.\n", h, circ->raio, retangulo->base, retangulo->altura);
    }
}


void preenche_circ_interno(Ret* ret){
    printf("\n==============================================================================\n");
    printf("\t\t Círculo interno\n");
    printf("================================================================================\n");

    printf("Digite a base do retângulo: ");
    scanf("%f", &ret->base);
    
    printf("Digite a altura do retângulo: ");
    scanf("%f", &ret->altura);

    Circ* circ = circ_interno(ret);

    printf("O maior círculo interno ao retângulo de base %.2f e altura %.2f tem raio %.2f.\n", ret->base, ret->altura, circ->raio);
}

int main(void){
    Ret* ret = (Ret*) malloc(sizeof(Ret));
    Circ* circ = (Circ*) malloc(sizeof(Circ));

    preenche_ret_circunscrito(circ);
    preenche_circ_interno(ret);
    
    free (ret);
    free (circ);

    return 0;
    
}