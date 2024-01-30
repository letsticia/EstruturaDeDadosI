#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar um documento por vez
typedef union documentos{
    char rg[13];
    char cpf[15];
} Documentos;

typedef struct pessoa{
    char nome[20]; 
    int idade;
    Documentos doc; // Variável para armazenar o CPF ou RG
}Pessoa;

void dados_pessoa(Pessoa * p){
    /*
    Função que preenche os dados de uma variável do tipo Pessoa(struct)
    */

   // note que usa-se -> para acessar os campos da struct uma vez que p é um ponteiro
    int escolha;
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p->nome); // p->nome é equivalente a (*p).nome
    printf("Informe a idade: \t");
    scanf("%d", &p->idade); // p->idade é equivalente a (*p).idade
    printf("CPF[1] ou RG[2]");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("Digite o CPF: \t");
        scanf(" %[^\n]", p->doc.cpf);
        break;
    case 2:
        printf("Digite o rg: \t");
        scanf(" %[^\n]", p->doc.rg);
        break;
    default:
        printf("\nOpção incorreta, inicie o programa novamente");
        break;
    }

}

int main(){
    Pessoa * pessoa = (Pessoa *) malloc(sizeof(Pessoa)); // alocação dinâmica
    dados_pessoa(pessoa); // passagem do endereço de memória da variável pessoa
    printf("Documento: %s", pessoa->doc.cpf); // colocando para o cpf pq nao inmporta, já que aponta para o mesmo lugar
    free(pessoa); // liberando a mémoria
    return 0;
}
