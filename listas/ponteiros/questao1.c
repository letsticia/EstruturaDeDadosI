// Aqui, tem-se a declaração de duas váriaveis inteiras e de um ponteiro inteiro. 
int x, y, *p;


y = 0; // declarando y como 0
p = &y;// declarando p como o endereço da variável y
x = *p; // declarando x como o valor que está no endereço de p (o valor de y)
x = 4; // declarando x como 4

(*p)++; // adicionando 1 ao valor de y (uma vez que p é o endereço de y)
// dessa forma, o valor de y passa a ser 1


--x; // subtraindo uma unidade de x, assim, x passa a ser 3 (4 -1 = 3)


(*p) += x; // adicionando o valor de x ao valor de y (1 + 3 = 4)
// uma vez que (*p) é o próprio y (conteudo do endereço de p)

/*
Assim, o resultado final para os valores de x, y e p é:

    x = 3
    y = 4
    p = endereço de y
*/



