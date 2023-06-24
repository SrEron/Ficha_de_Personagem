#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <limits>
using namespace std;

/*
    Criação de um programa em C++, para criação de uma ficha de personagem para um RPG
*/
/*
    Descrição: procedimento que recebe a escolha de classe e monta a ficha a partir daquela classe
    Procedimento do código: A partir da escolha do usuário, haverá condições onde a ficha será montada para cada classe
*/
void preencherFichaManu(int classe, int *dados)
{
    // Declarando variáveis
    int vida = 0, armor = 0, nivel = 0, xp = 0, i;
    string nome;
    string Classe;
    string atributos[6] = {"Força", "Destreza", "Constituição", "Sabedoria", "Inteligência", "Carisma"};
    string raca;

    cout << "Digite o nome do seu personagem: ";
    cin >> nome;
    cout << "Escolha sua raça entre essas:\nHumano\nOrc\nElfo\n";
    cin >> raca;

    // 1 - classe guerreiro
    if (classe == 1)
    {
        Classe = "Guerreiro";
        for (i = 0; i < 6; i++)
        {
            cout << "Digite o " << i + 1 << "º dado do atributo " << atributos[i] << ": ";
            cin >> dados[i];
        }
        cout << "\nArmor: ";
        cin >> armor;
        cout << "\nVida: ";
        cin >> vida;
        cout << "\nNível: ";
        cin >> nivel;
        cout << "\nXP: ";
        cin >> xp;

        // Caso a raça seja humana
        if (raca == "Humano")
        {
            for (i = 0; i < 6; i++)
            {
                dados[i] = dados[i] + 1;
            }
        }
        // Caso a raça escolhida seja Orc
        else if (raca == "Orc")
        {
            dados[1] = dados[1] + 2;
            dados[3] = dados[3] + 1;
        }
        // Caso a raça seja Elfica
        else if (raca == "Elfo")
        {
            dados[2] = dados[2] + 1;
        }
    }
    // 2 - classe Mago
    else if (classe == 2)
    {
        Classe = "Mago";
        for (i = 0; i < 6; i++)
        {
            cout << "Digite o " << i + 1 << "º dado do atributo " << atributos[i] << ": ";
            cin >> dados[i];
        }
        cout << "\nArmor: ";
        cin >> armor;
        cout << "\nVida: ";
        cin >> vida;
        cout << "\nNível: ";
        cin >> nivel;
        cout << "\nXP: ";
        cin >> xp;

        if (raca == "Humano")
        {
            for (i = 0; i < 6; i++)
            {
                dados[i] = dados[i] + 1;
            }
        }
        else if (raca == "Orc")
        {
            dados[1] = dados[1] + 2;
            dados[3] = dados[3] + 1;
        }
        else if (raca == "Elfo")
        {
            dados[2] = dados[2] + 1;
        }
    }
    // 3 - classe druida
    else if (classe == 3)
    {
        Classe = "Druida";
        for (i = 0; i < 6; i++)
        {
            cout << "Digite o " << i + 1 << "º dado do atributo " << atributos[i] << ": ";
            cin >> dados[i];
        }
        cout << "\nArmor: ";
        cin >> armor;
        cout << "\nVida: ";
        cin >> vida;
        cout << "\nNível: ";
        cin >> nivel;
        cout << "\nXP: ";
        cin >> xp;

        // Caso a raça seja humana
        if (raca == "Humano")
        {
            for (i = 0; i < 6; i++)
            {
                dados[i] = dados[i] + 1;
            }
        }
        else if (raca == "Orc")
        {
            dados[1] = dados[1] + 2;
            dados[3] = dados[3] + 1;
        }
        else if (raca == "Elfo")
        {
            dados[2] = dados[2] + 1;
        }
    }
}
/*
    Descrição:
        Procedimento que monta a ficha do personagem automaticamente rolando os dados
        - 4d6 para atributos
*/
void preencherFicharaut(int classe, int* dados) {
  int vida = 0, armor = 0, nivel = 0, xp = 0, i, j, soma_dados = 0;
  string nome, raca, Classe;
  string atributos[6] = {"Força", "Destreza", "Constituição", "Sabedoria", "Inteligência", "Carisma"};

  srand(time(NULL));

  cout << "Digite o nome do seu personagem: ";
  cin >> nome;
  cout << "Escolha sua raça entre essas: Humano, Orc, Elfo" << endl;
  cin >> raca;

  // Classe Guerreiro
  if (classe == 1) {
    Classe = "Guerreiro";
    for (i = 0; i < 6; i++) {
      soma_dados = 0;
      for (j = 0; j < 4; j++) {
        // Generate a random number between 1 and 6
        int numero = rand() % 6 + 1;
        soma_dados += numero;
      }
      dados[i] = soma_dados;
    }

    cout << "\nArmor: ";
    cin >> armor;
    cout << "\nVida: ";
    cin >> vida;
    cout << "\nNivel: ";
    cin >> nivel;
    cout << "\nXP: ";
    cin >> xp;

    // Caso a raça seja Humana
    if (raca == "Humano") {
      for (i = 0; i < 6; i++) {
        dados[i] = dados[i] + 1;
      }
    }
    else if (raca == "Orc") {
      dados[1] = dados[1] + 2;
      dados[3] = dados[3] + 1;
    }
    else if (raca == "Elfo") {
      dados[2] = dados[2] + 1;
    }
  }
  // Classe Mago
  else if (classe == 2) {
    Classe = "Mago";
    for (i = 0; i < 6; i++) {
      soma_dados = 0;
      for (j = 0; j < 4; j++) {
        // Generate a random number between 1 and 6
        int numero = rand() % 6 + 1;
        soma_dados += numero;
      }
      dados[i] = soma_dados;
    }
    cout << "\nArmor: ";
    cin >> armor;
    cout << "\nVida: ";
    cin >> vida;
    cout << "\nNivel: ";
    cin >> nivel;
    cout << "\nXP: ";
    cin >> xp;

    // Caso a raça seja Humana
    if (raca == "Humano") {
      for (i = 0; i < 6; i++) {
        dados[i] = dados[i] + 1;
      }
    }
    else if (raca == "Orc") {
      dados[1] = dados[1] + 2;
      dados[3] = dados[3] + 1;
    }
    else if (raca == "Elfo") {
      dados[2] = dados[2] + 1;
    }
  }

  // Classe Druida
  else if (classe == 3) {
    Classe = "Druida";
    for (i = 0; i < 6; i++) {
      soma_dados = 0;
      for (j = 0; j < 4; j++) {
        // Gerar um número aleatório entre 1 e 6
        int numero = rand() % 6 + 1;
        soma_dados += numero;
      }
      dados[i] = soma_dados;
    }
    cout << "\nArmor: ";
    cin >> armor;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "\nVida: ";
    cin >> vida;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "\nNivel: ";
    cin >> nivel;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "\nXP: ";
    cin >> xp;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Caso a raça seja Humana
    if (raca == "Humano") {
      for (i = 0; i < 6; i++) {
        dados[i] = dados[i] + 1;
      }
    }
    else if (raca == "Orc") {
      dados[1] = dados[1] + 2;
      dados[3] = dados[3] + 1;
    }
    else if (raca == "Elfo") {
      dados[2] = dados[2] + 1;
    }
  }
}

/*
    Descrição:
        Procedimento que irá imprimir a ficha do personagem criado para o jogador
*/
void imprimirFicha(int classe, string nome, string raca, int* dados, int armor, int vida, int nivel, int xp){
  setlocale(LC_ALL, "Portuguese");
  cout << "\n\033[1m--- FICHA DO PERSONAGEM ---\033[0m\n";
  cout << "\033[1mNome:\033[0m " << nome;
  cout << "\t\033[1mClasse:\033[0m ";
  if (classe == 1)
    cout << "Guerreiro\n";
  else if (classe == 2)
    cout << "Mago\n";
  else if (classe == 3)
    cout << "Druida\n";
  cout << "\033[1mRaça:\033[0m " << raca << "\n";
  cout << "\t\033[1mAtributos\033[0m\n";
  cout << "Força: " << dados[0] << endl;
  cout << "Destreza: " << dados[1] << endl;
  cout << "Constituição: " << dados[2] << endl;
  cout << "Sabedoria: " << dados[3] << endl;
  cout << "Inteligência: " << dados[4] << endl;
  cout << "Carisma: " << dados[5] << endl;
  cout << "\033[1mArmor:\033[0m " << armor << endl;
  cout << "\033[1mVida:\033[0m " << vida << endl;
  cout << "\033[1mNível:\033[0m " << nivel << endl;
  cout << "\033[1mXP:\033[0m " << xp << endl;
}

int main() {
    char nome[50];
    char raca[50];
    int armor;
    int vida;
    int nivel;
    int xp;
    int op = 0;
    int dados[6] = {0};
    int classe = 0;

    do {
        cout << "\t-MONTE SUA FICHA DE RPG-" << endl;
        cout << "Escolha uma das opcoes que desejar nos parametros 5.e:" << endl;
        cout << "\t(1) Montar a ficha Manual" << endl;
        cout << "\t(2) Montar a ficha Automática" << endl;
        cout << "\t(3) Mostrar a ficha montada" << endl;
        cout << "\t(0) Sair" << endl;

        cin >> op;

        switch (op) {
            case 1:
                cout << "Escolha sua classe:" << endl;
                cout << "(1) Guerreiro" << endl;
                cout << "(2) Mago" << endl;
                cout << "(3) Druida" << endl;
                cin >> classe;
                preencherFichaManu(classe, dados);
                break;

            case 2:
                cout << "Escolha sua classe:" << endl;
                cout << "(1) Guerreiro" << endl;
                cout << "(2) Mago" << endl;
                cout << "(3) Druida" << endl;
                cin >> classe;
                preencherFicharaut(classe, dados);
                break;

            case 3:
                imprimirFicha(classe, nome, raca, dados, armor, vida, nivel, xp);
                break;

            case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }

    } while (op != 0);

    return 0;
}