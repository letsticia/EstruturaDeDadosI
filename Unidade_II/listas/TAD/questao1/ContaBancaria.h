/*Definição de um novo tipo: Contabancaria*/
typedef struct contaBancaria ContaBancaria;

ContaBancaria* criaConta(void);

void deposita(ContaBancaria* conta, float valor);

void saca(ContaBancaria* conta, float valor);

void transfere(ContaBancaria* origem, ContaBancaria* destino, float valor);

void saldo(ContaBancaria* conta);

void excluiConta(ContaBancaria* conta);