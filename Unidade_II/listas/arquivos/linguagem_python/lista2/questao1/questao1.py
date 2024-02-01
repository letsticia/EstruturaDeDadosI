def preenche_arquivos():
    
    arquivos = open("funcionarios.txt", "a")
    
    num_id = input("Digite o id do funcionário: ")
    nome = input("Digite o nome do funcionário: ")
    salario = float(input("Digite o salário do funcionário: "))
    
    funcionario = {"ID": num_id, "Nome": nome, "Salário": salario}
    
    arquivos.write(f"{funcionario['ID']}\t{funcionario['Nome']}\t{funcionario['Salário']}\n")

    arquivos.close()
    
def pergunta():
    
    quantidade = int(input("Digite a quantidade de funcionários que deseja cadastrar: "))
    
    if quantidade < 1:
        print("Saindo do programa")
        return 0
    else:
        for contador in range(0, quantidade):
            print("=====================================")
            print(f"Cadastro do funcionario {contador + 1}")
            print("=====================================")
            preenche_arquivos()
            print("Funcionário cadastrado com sucesso!")
        return 0
    
pergunta()
