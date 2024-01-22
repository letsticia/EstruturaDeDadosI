#include <stdio.h>

typedef union dados{
    int meu_int; // ocupará 4 bytes
    float meu_float; // ocupará 6 bytes
} Dados; // total: 6 bytes porque é o valor do maior

// a union não armazena todas as variáveis como o struct faz
// a union só armazena um ou outro

int main(){
    Dados uniao;

    printf("Digite os dados: \t");
    scanf("%d %d", &uniao.meu_int, &uniao.meu_float);
    printf("Os dados informados: meu_int = %d meu float = %d", uniao.meu_int, uniao.meu_float); 
    // só vai aparecer o último a ser informado
    return 0;
}