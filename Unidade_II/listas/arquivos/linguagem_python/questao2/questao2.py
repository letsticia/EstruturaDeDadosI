def adiciona_numeros():
    entrada = open("entrada_q2.txt", "r")
    
    for contador in range(0, 10):
        numero = int(input(f"Digite o {contador + 1}º número: "))
        entrada.write(f"{numero}\n")
    
    entrada.close()

def preenche_vetor():
    vetor = []
    entrada = open("entrada_q2.txt", "r")
    numeros = entrada.readlines()
    
    for numero in numeros:
        vetor.append(int(numero))
    
    entrada.close()
    
    return vetor

def menor_valor(vetor):
    menor = vetor[0]
    
    for contador in range(0, len(vetor)):
        if vetor[contador] < menor:
            menor = vetor[contador]
    
    return menor

def maior_valor(vetor):
    maior = vetor[0]
    
    for contador in range(0, len(vetor)):
        if vetor[contador] > maior:
            maior = vetor[contador]
    
    return maior

def media(vetor):
    soma = 0
    
    for contador in range(0, len(vetor)):
        soma += vetor[contador]
    
    return soma/len(vetor)

saida = open("saida_q2.txt", "w")
vetor = preenche_vetor()

saida.write(f"Menor valor: {menor_valor(vetor)}\n")
saida.write(f"Maior valor: {maior_valor(vetor)}\n")
saida.write(f"Media: {media(vetor)}\n")
saida.close()

    
    
    