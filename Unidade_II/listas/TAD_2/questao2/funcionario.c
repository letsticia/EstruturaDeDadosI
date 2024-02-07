#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
    char FuncionaID[3];
    char nome[50];
    char Departamento;
    float salario;
} Funcionario;

void copia_dados(FILE * arquivo, int n, Funcionario ** pessoal){
    for(int i = 0; i < n; i++){
        fscanf(arquivo, "%[^\t]\t%[^\t]\t%c\t%f\n", pessoal[i]->FuncionaID, pessoal[i]->nome, &pessoal[i]->Departamento, &pessoal[i]->salario);
    }
}

void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto){
    printf("=================================\n");
    printf("FOLHA DE PAGAMENTO DEPARTAMENTO %c\n", depto);
    printf("---------------------------------\n");
    printf("ID\tNome\tDepto\tSalario\n");
    printf("---------------------------------\n");
    
    float total = 0;
    for(int i = 0; i < n; i++){
        if(pessoal[i]->Departamento == depto){
            printf("%s\t%s\t%c\t%.2f\n", pessoal[i]->FuncionaID, pessoal[i]->nome, pessoal[i]->Departamento, pessoal[i]->salario);
            total += pessoal[i]->salario;
        }
    }
    printf("---------------------------------\n");
    printf("VALOR TOTAL:\t\tR$%.2f\n", total);


}

int main(){
    FILE * arquivo = fopen("funcionarios.txt", "r");
    int n;
    fscanf(arquivo, "%d\n", &n);
    Funcionario ** pessoal = (Funcionario **) malloc(n * sizeof(Funcionario *));
    
    for(int i = 0; i < n; i++){
        pessoal[i] = (Funcionario *) malloc(sizeof(Funcionario));
    }

    copia_dados(arquivo, n, pessoal);
    
    imprime_folha_pagamento(n, pessoal, 'A');
    imprime_folha_pagamento(n, pessoal, 'B');
    imprime_folha_pagamento(n, pessoal, 'C');

    fclose(arquivo);

    return 0;
}