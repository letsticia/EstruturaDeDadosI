def adiciona_aluno():
    
    arquivo = open("entrada_q3.txt", "a")
    nome = input("Digite o nome do aluno: ")
    notas = []
    for contador in range(0, 3):
        nota = float(input(f"Digite a {contador + 1}ª nota do aluno: "))
        notas.append(nota)
    
    aluno = {"Nome": nome, "Notas": notas}
    
    arquivo.write(f"{aluno['Nome']}\t{aluno['Notas'][0]}\t{aluno['Notas'][1]}\t{aluno['Notas'][2]}\n")
    arquivo.close()
    
def calcula_media():
    
    arquivo = open("entrada_q3.txt", "r")
    saida = open("saida_q3.txt", "w")
    alunos = arquivo.readlines()

    
    for pessoas in  alunos:
        alunos = pessoas.split("\t")
        for contador in range (0, 3):
            media = (float(alunos[1]) + float(alunos[2]) + float(alunos[3]))/3
        
        if media >= 7:
            situacao = "Aprovado"
        else:
            situacao = "Reprovado"
        
        saida.write(f"{alunos[0]}\t{media:.2}\t{situacao}\n")
    
    arquivo.close()
    saida.close()

def menu():
    while True:
        print("=====================================")
        print(f"{'MENU DE ALUNOS':^37}")
        print("=====================================")
        print("1 - Adicionar aluno")
        print("2 - Calcular média")
        print("3 - Sair")
        print("=====================================")
        opcao = int(input("Digite a opção desejada: "))
        
        if opcao == 1:
            adiciona_aluno()
        elif opcao == 2:
            calcula_media()
        elif opcao == 3:
            return 0
        else:
            print("Opção inválida!")

menu()