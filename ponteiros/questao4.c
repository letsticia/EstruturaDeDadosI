#include <stdio.h>
#include <math.h>

// função que obedece o protóipo proposto no exercício
int calcula_hexagono(float l, float *area, float *perimetro){
    /*

    onde:
    l -> lado do hexágono;
    *area, * perimetro-> ponteiros que receberão os endereços das váriaveis correspondentes na função main;

    e, com isso:

    muda o conteúdo do endereço dos ponteiros para os valores correspondentes das equações com o lado inserido pelo usuário.

    */
    
    *perimetro = 6 * l;
    *area = (3 * (pow(l, 2) * sqrt(3)/2));
}

int main(void) {

    // criando as variáveis que serão usadas os endereços
    float area, perimetro;

    // criando a váriavel que será preenchida pelo o usuário
    float lado;

    //criando os ponteiros
    float *ponteiroArea, *ponteiroPerimetro;

    //fazendo com que os ponteiros das medidas recebam os endereços das variaveis
    ponteiroArea = &area;
    ponteiroPerimetro = &perimetro;

    //pedindo para que o usuário digite o lado
    printf("Digite o lado do hexágono a ser calculado área e perímetro: ");
    scanf("%f", &lado);


    //chamando a função
    calcula_hexagono(lado, ponteiroArea, ponteiroPerimetro);

    //exibindo os resultados
    printf("\nO perímetro do hexágono de lado %f é %f\n", lado, perimetro);
    printf("e sua área é %f\n", area);

    //saindo da função main
    return 0;
}