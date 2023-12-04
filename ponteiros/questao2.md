# Alternativa [A]

Tendo em vista que, na primeira linha da função main, fora declarado um ponteiro p que receberá o endereço de um valor inteiro (4 bytes) e, entretanto, este não recebera um endereço e sim um valor inteiro normal, provavelmente não será motivo de erro de compilação, já que há espaço o bastante no endereço que este ponteiro está para receber um valor inteiro, assim, será um motivo de advertência.

```
    int x, *p;
    x = 100;
    p = x; #declarando em um ponteiro um valor de inteiro normal
```

Apesar disso, ainda é possível que haja uma mensagem de erro na última linha, uma vez que, na função printf, o formatador está esperando dois ponteiros, o primeiro que deveria mostrar o endereço para qual aponta e o segundo que deveria mostrar o o conteúdo deste endereço. Entretanto, é possível que aconteça um erro exatamente nesta linha, uma vez que o programa espera um endereço de memória (que exista) assim como o conteudo deste. Dessa forma, ao tentar acessar o conteúdo de um endereço de memória inexistente, irá gerar um erro.

```
    printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
```

# Alternativa [B]

Como explicado na alternativa anterior, o compilador inicialmente irá emitir uma advertência porque fora atribuído o valor da varíável x (o valor inteiro, não o endereço) ao ponteiro p. 

E, assim como mencionado também no primeiro item, o erro da  última linha da função main acontece porque o compilador espera um ponteiro para um endereço assim como o conteúdo deste, entretanto, como fora atribuido um valor inteiro, o endereço e o conteúdo não existem. 

# Alternativa [C]

A execução não foi bem sucedida, o seguinte erro apareceu:

```
teste.c: In function ‘main’:
teste.c:6:3: warning: assignment to ‘int *’ from ‘int’ makes pointer from integer without a cast [-Wint-conversion]
    6 | p = x;
      |   ^
teste.c:7:8: error: stray ‘\342’ in program
    7 | printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
      |        ^
teste.c:7:9: error: ‘Valor’ undeclared (first use in this function)
    7 | printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
      |         ^~~~~
teste.c:7:9: note: each undeclared identifier is reported only once for each function it appears in
teste.c:7:14: error: expected ‘)’ before ‘de’
    7 | printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
      |       ~      ^~~
      |              )
teste.c:7:24: error: stray ‘\’ in program
    7 | printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
      |                        ^
teste.c:7:42: error: stray ‘\342’ in program
    7 | printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
      |           
```

Não foram os mesmos erros dos quais eu mencionei nos itens anteriores, mas acredito que sejam derivados.

# Alternativa [D]

Para que nenuma mensage seja exibida do compilador, é necessário fazer a seguinte modificação:

```
#include <stdio.h>

int main(void) {
    int x, *p;
    x = 100;
    p = &x; #fora adicionado o operador de endereço
    printf("Valor de p = %p \t Valor de *p = %d", p, *p);

    return 0; # não necessário, mas, por boas práticas, é bom adicionar o return para que saia da função main.
}
```

# Alternativa [E]

Após a compilação e a execução do programa modificado, fora exibido o resultado esperado e nenhum tipo de advertência ou erro.

Resultado da execução:

```
Valor de p = 0x7ffc63069e3c	Valor de *p = 100
```