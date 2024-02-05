
/*Definição de novo tipo: Aluno*/
typedef struct aluno Aluno;

/*Função que aloca memória para um struct aluno, recebe os dados via teclado e retorna um ponteiro*/
Aluno * recebe_dados(void);

/*Função que imprime os dados de um aluno, recebe um ponteiro de Aluno como parâmetro*/
void imprime(Aluno * estudante);

/*Função que libera a memória, recebe um ponteiro de Aluno como parâmetro*/
void libera(Aluno * estudante);