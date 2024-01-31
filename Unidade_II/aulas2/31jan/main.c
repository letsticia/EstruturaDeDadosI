#include <stdio.h>
#include "calculadora.h"

void menu(){
    int opcao;
    float primeiro_numero, segundo_numero;

    while (opcao != 6){

        printf("=====================================\n");
        printf("\t\tCalculadora\n");
        printf("=====================================\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro_numero);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo_numero);

        printf("=====================================\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Potenciacao\n");
        printf("6 - Sair\n");
        printf("=====================================\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        printf("=====================================\n");

        switch(opcao){
            case 1:
                printf("Resultado: %.2f\n", adicao(primeiro_numero, segundo_numero));
                break;
            case 2:
                printf("Resultado: %.2f\n", subtracao(primeiro_numero, segundo_numero));
                break;
            case 3:
                printf("Resultado: %.2f\n", multiplicacao(primeiro_numero, segundo_numero));
                break;
            case 4:
                printf("Resultado: %.2f\n", divisao(primeiro_numero, segundo_numero));
                break;
            case 5:
                printf("Resultado: %.2f\n", potenciacao(primeiro_numero, segundo_numero));
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
}

int main(){
    menu();
    return 0;
}