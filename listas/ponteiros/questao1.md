No ínicio do código tem-se a declaração de duas váriaveis inteiras e de um ponteiro inteiro. 

```
int x, y, *p;
```

Inicialmente, declara-se y tendo um valor de 0. Depois, o valor de p é declarado como o endereço da variável y. Após isso, x é declarado como o valor que está no endereço de p (o valor de y). Entretanto, o x logo depois é mudado para o valor 4. 

```y = 0;
p = &y;
x = *p;
x = 4;
```

Na próxima linha, o conteudo do endereço para qual o ponteiro p aponta (o valor de y, 0) é adicionado mais uma unidade, assim, adicionando à váriavel inteira mais uma unidade, assim, mudando o conteúdo de p para 1 também.

```
(*p)++;
```

Logo após, é subtraido uma unidade da váriavel de x, deixando o seu valor igual a 3.

```
--x;
```

E, por último, o conteúdo do endereço para qual o ponteiro p aponta (y) é mudado para ele mesmo (1) mais o valor de x (3), dessa forma, o conteudo do endereço que p aponta é mudado para 4, tornando o valor de y igual a 4. 

```
(*p) += x;
```

Dessa forma, o resultado final para os valores de x, y e p é:

```
 x = 3
 y = 4
 p = endereço de y
```