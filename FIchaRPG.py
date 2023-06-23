import random


def preencher_ficha_manual(classe, dados):
  atributos = [
    "Força", "Destreza", "Constituição", "Sabedoria", "Inteligência", "Carisma"
  ]
  nome = input("Digite o nome do seu personagem: ")
  raca = input("Escolha sua raça que deseja entre essas:\nHumano\nOrc\nElfo\n")

  # 1 - classe guerreiro
  if classe == 1:
    Classe = "Guerreiro"
    for i in range(6):
      dado = int(input(f"Digite o {i + 1} dado do atributo {atributos[i]}: "))
      dados[i] = dado
    armor = int(input("\nArmor: "))
    vida = int(input("\nVida: "))
    nivel = int(input("\nNível: "))
    xp = int(input("\nXP: "))

    # Caso a raça seja Humana
    if raca == "Humano":
      for i in range(6):
        dados[i] += 1
    # Caso a raça seja Orc
    elif raca == "Orc":
      dados[1] += 2
      dados[3] += 1
    # Caso a raça seja Elfo
    elif raca == "Elfo":
      dados[2] += 1

  # 2 - classe mago
  elif classe == 2:
    Classe = "Mago"
    for i in range(6):
      dado = int(input(f"Digite o {i + 1} dado do atributo {atributos[i]}: "))
      dados[i] = dado
    armor = int(input("\nArmor: "))
    vida = int(input("\nVida: "))
    nivel = int(input("\nNível: "))
    xp = int(input("\nXP: "))

    # Caso a raça seja Humana
    if raca == "Humano":
      for i in range(6):
        dados[i] += 1
    # Caso a raça seja Orc
    elif raca == "Orc":
      dados[1] += 2
      dados[3] += 1
    # Caso a raça seja Elfo
    elif raca == "Elfo":
      dados[2] += 1

  # 3 - classe druida
  elif classe == 3:
    Classe = "Druida"
    for i in range(6):
      dado = int(input(f"Digite o {i + 1} dado do atributo {atributos[i]}: "))
      dados[i] = dado
    armor = int(input("\nArmor: "))
    vida = int(input("\nVida: "))
    nivel = int(input("\nNível: "))
    xp = int(input("\nXP: "))

    # Caso a raça seja Humana
    if raca == "Humano":
      for i in range(6):
        dados[i] += 1
    # Caso a raça seja Orc
    elif raca == "Orc":
      dados[1] += 2
      dados[3] += 1
    # Caso a raça seja Elfo
    elif raca == "Elfo":
      dados[2] += 1


#Ficha montagem auto
def preencher_ficha_automatica(classe, dados):
  atributos = [
    "Força", "Destreza", "Constituição", "Sabedoria", "Inteligência", "Carisma"
  ]
  nome = input("Digite o nome do seu personagem: ")
  raca = random.choice(["Humano", "Orc", "Elfo"])

  # 1 - classe guerreiro
  if classe == 1:
    Classe = "Guerreiro"
    for i in range(6):
      dado = random.randint(1, 20)
      dados[i] = dado
    armor = int(input("\nArmor: "))
    vida = int(input("\nVida: "))
    nivel = int(input("\nNível: "))
    xp = int(input("\nXP: "))

    # Caso a raça seja Humana
    if raca == "Humano":
      for i in range(6):
        dados[i] += 1
    # Caso a raça seja Orc
    elif raca == "Orc":
      dados[1] += 2
      dados[3] += 1
    # Caso a raça seja Elfo
    elif raca == "Elfo":
      dados[2] += 1

  # 2 - classe mago
  elif classe == 2:
    Classe = "Mago"
    for i in range(6):
      dado = random.randint(1, 20)
      dados[i] = dado
    armor = int(input("\nArmor: "))
    vida = int(input("\nVida: "))
    nivel = int(input("\nNível: "))
    xp = int(input("\nXP: "))

    # Caso a raça seja Humana
    if raca == "Humano":
      for i in range(6):
        dados[i] += 1
    # Caso a raça seja Orc
    elif raca == "Orc":
      dados[1] += 2
      dados[3] += 1
    # Caso a raça seja Elfo
    elif raca == "Elfo":
      dados[2] += 1

  # 3 - classe druida
  elif classe == 3:
    Classe = "Druida"
    for i in range(6):
      dado = random.randint(1, 20)
      dados[i] = dado
    armor = int(input("\nArmor: "))
    vida = int(input("\nVida: "))
    nivel = int(input("\nNível: "))
    xp = int(input("\nXP: "))

    # Caso a raça seja Humana
    if raca == "Humano":
      for i in range(6):
        dados[i] += 1
    # Caso a raça seja Orc
    elif raca == "Orc":
      dados[1] += 2
      dados[3] += 1
    # Caso a raça seja Elfo
    elif raca == "Elfo":
      dados[2] += 1


#Procedimento que imprime ficha
def imprimir_ficha(classe, nome, raca, dados, armor, vida, nivel, xp):
  print("\n--- FICHA DO PERSONAGEM ---")
  print("Nome:", nome)
  print("Classe:", end=" ")
  if classe == 1:
    print("Guerreiro")
  elif classe == 2:
    print("Mago")
  elif classe == 3:
    print("Druida")
  print("Raça:", raca)
  print("Atributos:")
  print("Força:", dados[0])
  print("Destreza:", dados[1])
  print("Constituição:", dados[2])
  print("Sabedoria:", dados[3])
  print("Inteligência:", dados[4])
  print("Carisma:", dados[5])
  print("Armor:", armor)
  print("Vida:", vida)
  print("Nível:", nivel)
  print("XP:", xp)


def main():
  nome = ""
  raca = ""
  armor = 0
  vida = 0
  nivel = 0
  xp = 0
  op = 0
  dados = [0] * 6
  classe = 0

  while op != 0:
    print("\t-MONTE SUA FICHA DE RPG-")
    print("Escolha uma das opcoes que desejar nos parametros 5.e:")
    print("\t(1) Montar a ficha Manual")
    print("\t(2) Montar a ficha Automática")
    print("\t(3) Mostrar a ficha montada")
    print("\t(0) Sair")

    op = int(input())

    if op == 1:
      print("Escolha sua classe:")
      print("(1) Guerreiro")
      print("(2) Mago")
      print("(3) Druida")
      classe = int(input())
      preencher_ficha_manu(classe, dados)
    elif op == 2:
      print("Escolha sua classe:")
      print("(1) Guerreiro")
      print("(2) Mago")
      print("(3) Druida")
      classe = int(input())
      preencher_ficha_aut(classe, dados)
    elif op == 3:
      imprimir_ficha(classe, nome, raca, dados, armor, vida, nivel, xp)
    elif op == 0:
      print("Saindo do programa...")
    else:
      print("Opção inválida. Tente novamente.")


if __name__ == "__main__":
  main()
