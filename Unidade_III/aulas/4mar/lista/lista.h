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

/* Função que imprime os elementos da lista
Argumentos: 
    Lista.
*/
void imprime_lista(Lista* lista);


/* Função que verifica se a lista está vazia
Argumentos:
    Lista
Retorno:
    1 - Lista vazia
    0 - Lista não vazia*/
int verifica_lista_vazia(Lista* lista);

/*Função que busca um valor na lista
Argumentos:
    Lista e valor a ser buscado
Retorno:
    1 - Valor encontrado
    0 - Valor não encontrado
*/
int busca_lista(Lista* lista, int valor);

Lista * retira_elemento(Lista * lista, int valor);