def adiciona_alunos():
    arquivo = open("alunos.txt", "a")
    
    notas = []
    
    nome = input("Digite o nome do aluno: ")
    for contador in range(0, 3):
        nota = float(input(f"Digite a {contador + 1}ª nota do aluno: "))
        notas.append(nota)
    
    aluno = {"Nome": nome, "Notas": notas}
    
    arquivo.write(f"{aluno['Nome']}\t{aluno['Notas'][0]}\t{aluno['Notas'][1]}\t{aluno['Notas'][2]}\n")
    arquivo.close()
    
def main():
    quantidade = int(input("Digite a quantidade de alunos que deseja cadastrar: "))
    
    if quantidade < 1:
        print("Saindo do programa")
        return 0
    else:
        for contador in range(0, quantidade):
            print("=====================================")
            print(f"Cadastro do aluno {contador + 1}")
            print("=====================================")
            adiciona_alunos()
            print("Aluno cadastrado com sucesso!")
        return 0
    
main()