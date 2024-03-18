typedef struct lista_duplamente ListaDuplamente;

ListaDuplamente* cria_lista(void);

ListaDuplamente* insere_elemento(ListaDuplamente* lista, int valor);

void imprime_lista_prox(ListaDuplamente* lista);

void imprime_lista_ant(ListaDuplamente* lista);

