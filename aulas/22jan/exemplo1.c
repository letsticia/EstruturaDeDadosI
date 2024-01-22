// exemplo com alocação estática

#include <stdio.h>

// typedef faz com que Pessoa seja um sinônimo para struct pessoa
typedef struct pessoa{ 
    char nome[20]; // ocupará 20 bytes
    int idade; // ocupará 4 bytes
}Pessoa; // total: 24 bytes

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
    Pessoa pessoa; // declaração de uma variável do tipo Pessoa
    dados_pessoa(&pessoa); // passagem do endereço de memória da variável pessoa
    return 0;
}

