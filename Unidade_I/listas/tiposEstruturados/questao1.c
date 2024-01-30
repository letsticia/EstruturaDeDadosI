#include <stdio.h>

typedef struct ingresso{
    float preco;
    char local[30];
    char atracao[30];
} Ingresso;

void preenche(Ingresso * i){
    printf("\n=====================================\n");
    printf("Informe o preco: \t");
    scanf("%f", &i->preco);
    printf("Informe o local: \t");
    scanf(" %[^\n]", i->local);
    printf("Informe a atracao: \t");
    scanf(" %[^\n]", i->atracao);
}

void imprime(Ingresso * i, int numID){
    printf("=============================\n");
    printf("\t Dados do Ingresso %d\n", numID+1);
    printf("=============================\n");

    printf("Nome: %.2f\t\n", i->preco);
    printf("Local: %s\t\n", i->local);
    printf("Atracao: %s\t\n", i->atracao);
}

void altera_preco(Ingresso * i, float valor){
    i->preco = valor;
    printf("O novo valor e %.2f \n", i->preco);
}

void imprime_maior_e_menor(int n, Ingresso * vet){
    int contador;
    float maior = 0;
    float menor = vet[0].preco;

    for (contador = 0; contador < n; contador++){
        if (vet[contador].preco > maior){
            maior = vet[contador].preco;
        }
        if (vet[contador].preco < menor){
            menor = vet[contador].preco;
        }
    }
    
    printf("\nO menor valor e %.2f e o maior e %.2f", menor, maior );
}

int main(void){
    Ingresso ingresso;
    
    int quantidade;
    int contador;
    int opcao;
    float valor;
    
    printf("Digite a quantidade de ingressos a ser cadastrada: ");
    scanf("%d", &quantidade);
    
    Ingresso vetorIngressos[quantidade];
    
    // laço de repetição para preencher o vetor de ingressos
    for (contador = 0; contador < quantidade; contador++){
        preenche(&ingresso);
        vetorIngressos[contador] = ingresso; 
    }
    

    // laço de repetição para imprimir os dados dos ingressos
    for (contador = 0; contador < quantidade; contador++){
        imprime(&vetorIngressos[contador], contador);
    }

    imprime_maior_e_menor(quantidade, vetorIngressos);

    printf("\nDeseja alterar o preco de algum ingresso? (1 - Sim / 0 - Nao) ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Informe o id do ingresso: \t");
        scanf("%d", &opcao);

        // verifica se o id informado é valido
        if (opcao > quantidade || opcao < 0){
            printf("Ingresso nao encontrado, fechando o programa...");
            return 0;
        }

        printf("Informe o novo valor: \t");
        scanf("%f", &valor);

        altera_preco(&vetorIngressos[opcao-1], valor);
        break;

    case 2:
        printf("Fechando o programa...");
        break;
    default:
        printf("Opção invalida. Fechando o programa");
        return 0;
        break;
    }

    // laço de repetição para imprimir os dados dos ingressos
    for (contador = 0; contador < quantidade; contador++){
        imprime(&vetorIngressos[contador], contador);
    }
    imprime_maior_e_menor(quantidade, vetorIngressos);

    return 0;
}