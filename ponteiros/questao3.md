Inicialmente, tem-se a declaração das váriaveis inteiras a, b, c e d. Depois, a declaração dos ponteiros p1, p2 (apontando para o endereço de A), p3 (apontando para o endereço de C).

```
    int a, b, c, d; 
    int *p1;
    int *p2 = &a;
    int *p3 = &c;
    p1 = p2;
```

Após isso, há uma mudança no conteúdo do endereço para qual o ponteiro p2 aponta, mudando assim, o contéudo do ponteiro p1, e da variável o qual ocupa esse endereço, A. 

```
    *p2 = 10;
```

Logo após, tem-se que o valor de b é 20; a declaração do ponteiro de ponteiro inteiro pp e a atribuição de seu valor que é o endereço do ponteiro p1.

```
    b = 20;
    int **pp;
    pp = &p1;
```

Na pŕoxima linha, tem-se que o conteúdo do endereço para o qual o ponteiro p3 aponta é mudado para o conteúdo do endereço para qual o ponteiro pp aponta (que é o mesmo do p1 que é o mesmo do p2 que é igual a 10); 

```
    *p3 = **pp;
```

Depois, tem-se atribuição (e a criação) do ponteiro p4 que recebe o endereço da váriavel inteira d. E, após isso, tem-se a declaração de o contéudo do endereço de D é mudado para a soma de b (20) com o conteudo do endereço o qual o p1 guarda (10), deixando d com o valor de 30 e, com o ++ aṕos o conteúdo de p1, mudando o conteúdo de p1 para ele mesmo (10) com (1) deixando o conteúdo de p1 igual 11 e, com isso, fazendo com que o valor de a também seja igual a 11, uma vez que o endereço de p1 é o endereço do A. Entretanto, é importante frizar que, apesar de, na linha anterior o contéudo de p3 ser igual ao conteudo do pp, o valor de c continuará a ser igual a 10 e o de a será 11.
```
    int *p4 = &d;
    *p4 = b + (*p1)++;
```

Por fim, será exibido no terminal os valores de a, b, c e d. O programa, depois disso, saíra da função main e terminará.

```
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    return 0;
```

Os valores das variáveis são:

```
    a = 11
    b = 20
    c = 10
    d = 30
```