#include <stdio.h>

int main(void) {
    int a, b, c, d; // declarando 4 variáveis inteiras

    int *p1; // declarando um ponteiro para inteiro
    int *p2 = &a; // declarando um ponteiro para inteiro e inicializando com o endereço de a
    int *p3 = &c; // declarando um ponteiro para inteiro e inicializando com o endereço de c

    p1 = p2; // atribuindo o endereço de p2 para p1
    *p2 = 10; // atribuindo o valor 10 para o conteúdo do endereço de p2 (a)
    b = 20; // atribuindo o valor 20 para b

    int **pp; // declarando um ponteiro para ponteiro para inteiro
    
    pp = &p1; // atribuindo o endereço de p1 para pp
    
    *p3 = **pp; /*
    O conteúdo do endereço para o qual o ponteiro p3 aponta é mudado para o conteúdo 
    do endereço para qual o ponteiro pp aponta (que é o mesmo do p1 que é o mesmo do p2 que é igual a 10)
    */
    
    int *p4 = &d; // declarando um ponteiro para inteiro e inicializando com o endereço de d
    
    *p4 = b + (*p1)++; /*
    a declaração de o contéudo do endereço de D é mudado para a soma de b (20) com o conteudo do 
    endereço o qual o p1 guarda (10), deixando d com o valor de 30 e, com o ++ aṕos o conteúdo de p1, 
    mudando o conteúdo de p1 para ele mesmo (10) com (1) deixando o conteúdo de p1 igual 11 e, com isso,
    fazendo com que o valor de a também seja igual a 11, uma vez que o endereço de p1 é o endereço do A. 
    Entretanto, é importante frizar que, apesar de, na linha anterior o contéudo de p3 ser igual ao conteudo 
    do pp, o valor de c continuará a ser igual a 10 (já que o operador de incremento foi adicionado depois, 
    assim deixando d igual a 30, c igual a 10 e a sendo modificado depois para 11).
    */
    

    printf("%d\t%d\t%d\t%d\n", a, b, c, d); // imprimindo os valores de a, b, c e d
    
    // Dessa forma, a saída do programa será: 11 20 10 30

    return 0; // encerrando o programa
}