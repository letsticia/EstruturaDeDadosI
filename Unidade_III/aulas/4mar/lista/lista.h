typedef struct lista Lista;

/* Função que inicializa a lista atribuindo NULL
Retorno: 
    Lista inicializada*/
Lista* cria_lista(void);

/* Função que insere um elemento na lista
Argumentos: 
    Lista e valor a ser inserido
Retorno: 
    Lista com o valor inserido*/
Lista* insere_elemento(Lista* lista, int valor);

/* Função que imprime a lista
Argumentos: 
    Lista e valor a ser retirado
Retorno:
    Lista com o valor retirado*/
Lista * retira_elemento(Lista * lista, int valor);