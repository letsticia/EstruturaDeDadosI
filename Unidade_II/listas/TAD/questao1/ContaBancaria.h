/*Definição de um novo tipo: Contabancaria*/
typedef struct contaBancaria ContaBancaria;

/*Função que aloca memória para um struct contaBancaria, recebe os dados via teclado e retorna um ponteiro de ContaBancaria*/
ContaBancaria* criaConta(void);

/*Função que deposita um valor na conta, recebe um ponteiro de ContaBancaria e um valor como parâmetro*/
void deposita(ContaBancaria* conta, float valor);

/*Função que saca um valor da conta, recebe um ponteiro de ContaBancaria e um valor como parâmetro*/
void saca(ContaBancaria* conta, float valor);

/*Função que transfere um valor de uma conta para outra, recebe dois ponteiros de ContaBancaria e um valor como parâmetro*/ 
void transfere(ContaBancaria* origem, ContaBancaria* destino, float valor);

/*Função que imprime o saldo da conta, recebe um ponteiro de ContaBancaria como parâmetro*/
void saldo(ContaBancaria* conta);

/*Função que libera a memória, recebe um ponteiro de ContaBancaria como parâmetro*/
void excluiConta(ContaBancaria* conta);