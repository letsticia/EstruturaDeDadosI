typedef struct fila Fila;

Fila *criaFila(int MAX_size);

void destruirFila(Fila **fila);

// Se a fila estiver vazia, retorna 1, caso contrário, retorna 0
int filaVazia(Fila *fila);

// Se a fila estiver cheia, retorna 1, caso contrário, retorna 0
int filaCheia(Fila *fila);

int insereFila(Fila *fila, int valor);

int removeFila(Fila *fila);

int consultaFila(Fila *fila, int *valor);