def adiciona_fruta():
    arquivo = open("frutas.txt", "a")
    
    nome = input("Digite o nome da fruta: ")
    preco = float(input("Digite o preço da fruta: "))
    
    fruta = {"Nome": nome, "Preço": preco}
    
    arquivo.write(f"{fruta['Nome']}, {fruta['Preço']}\n")
    
    print("Fruta cadastrada com sucesso!")
    
    arquivo.close()
    
def main():
    quantidade = int(input("Digite a quantidade de frutas que deseja cadastrar: "))
    
    if quantidade < 1:
        print("Saindo do programa")
        return 0
    else:
        for contador in range(0, quantidade):
            print("=====================================")
            print(f"Cadastro da fruta {contador + 1}")
            print("=====================================")
            adiciona_fruta()

        print("Fim do cadastro de frutas! Saindo do programa...")

main()