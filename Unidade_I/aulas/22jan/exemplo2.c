// exemplo com alocação dinâmica

#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[20]; 
    int idade;
}Pessoa;

void dados_pessoa(Pessoa * p){
    /*
    Função que preenche os dados de uma variável do tipo Pessoa(struct)
    */

   // note que usa-se -> para acessar os campos da struct uma vez que p é um ponteiro

    printf("Informe o nome: \t");
    scanf(" %[^\n]", p->nome); // p->nome é equivalente a (*p).nome
    printf("Informe a idade: \t");
    scanf("%d", &p->idade); // p->idade é equivalente a (*p).idade

}

int main(){
    Pessoa * pessoa = (Pessoa *) malloc(sizeof(Pessoa)); // alocação dinâmica
    dados_pessoa(pessoa); // passagem do endereço de memória da variável pessoa
    free(pessoa); // liberando a mémoria
    return 0;
}
