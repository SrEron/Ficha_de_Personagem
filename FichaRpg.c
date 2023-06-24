#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

/*
    Criação de um programa em C, para criação de uma ficha de personagem para um RPG
*/
/*
    Descrição: procedimento que recebe a escolha de classe e monta a ficha apartir daquela classe
    Procedimento do codigo: A partir  da escolha do usuario, ira ter condições onde a ficha será montada para cada classe
*/
void preencherfichaManu(int classe, char *nome, char *raca, int *dados, int *armor, int *vida, int *nivel, int *xp) {
  // Declarando variáveis
  int i;
  char Classe[50];
  char atributos[6][15] = {"Forca",     "Destreza",     "Constituicao",  "Sabedoria", "Inteligencia", "Carisma"};
  
  
  printf("Digite o nome do seu personagem: ");
  scanf("%s", nome);
  printf("Escolha sua raça que deseja entre essas:\nHumano\nOrc\nElfo\n");
  scanf("%s", raca);

  // 1 - classe guerreiro
  if (classe == 1) {
    strcpy(Classe, "Guerriro");
    for (i = 0; i < 6; i++) {
      printf("Digite o %d dado do atributo %s: ", i + 1, atributos[i]);
      scanf("%d", &dados[i]);
    }
    printf("\nArmor: ");
    scanf("%d", &armor);
    fflush(stdin);
    printf("\nVida: ");
    scanf("%d", &vida);
    fflush(stdin);
    printf("\nNivel: ");
    scanf("%d", &nivel);
    fflush(stdin);
    printf("\nXP: ");
    scanf("%d", &xp);
    fflush(stdin);
    //Caso o raça sejá Humana
    if (raca == 'Humana') {
      for (i = 0; i < 6; i++) {
        dados[i] = dados[i] + 1;
      }

    }
    //Caso a raça escolhida sejá Orc
    else if (raca == 'Orc') {
      dados[1] = dados[1] + 2;
      dados[3] = dados[3] + 1;
      
    }
    //Caso a raça seja Elfica
    else if (raca == 'Elfo') {
      dados[2] = dados[2] + 1;
    }
  }
  //2-Condição para a segunda classe Mago
  if (classe == 2) {
    strcpy(Classe, "Mago");
    for (i = 0; i < 6; i++) {
      printf("Digite o %d dado do atributo %s: ", i + 1, atributos[i]);
      scanf("%d", &dados[i]);
    }
    printf("\nArmor: ");
    scanf("%d", &armor);
    fflush(stdin);
    printf("\nVida: ");
    scanf("%d", &vida);
    fflush(stdin);
    printf("\nNivel: ");
    scanf("%d", &nivel);
    fflush(stdin);
    printf("\nXP: ");
    scanf("%d", &xp);
    fflush(stdin);
    
    if (raca == 'Humana') {
      for (i = 0; i < 6; i++) {
        dados[i] = dados[i] + 1;
      }

    } else if (raca == 'Orc') {
      dados[1] = dados[1] + 2;
      dados[3] = dados[3] + 1;
    } else if (raca == 'Elfo') {
      dados[2] = dados[2] + 1;
    }
  }
  //3-classe druida
  if (classe == 3) {
    strcpy(Classe, "Druida");
    for (i = 0; i < 6; i++) {
      printf("Digite o %d dado do atributo %s: ", i + 1, atributos[i]);
      scanf("%d", &dados[i]);
    }
    printf("\nArmor: ");
    scanf("%d", &armor);
    fflush(stdin);
    printf("\nVida: ");
    scanf("%d", &vida);
    fflush(stdin);
    printf("\nNivel: ");
    scanf("%d", &nivel);
    fflush(stdin);
    printf("\nXP: ");
    scanf("%d", &xp);
    fflush(stdin);
    //Caso o raça sejá Humana
    if (strcmp(raca, "Humano") == 0) {
      for (i = 0; i < 6; i++) {
        dados[i] = dados[i] + 1;
      }
    }
    else if (strcmp(raca, "Orc") == 0) {
      dados[1] = dados[1] + 2;
      dados[3] = dados[3] + 1;
    }
    else if (strcmp(raca, "Elfo") == 0) {
      dados[2] = dados[2] + 1;
    }
  }
  
}
/*
    Descrição:
        procedimento que monta ficha do personagem automatica rolando os dados, sendo eles:
        -4d6 para atributos
        
*/
void preencherficharaut(int classe, char *nome, char *raca, int *dados, int *armor, int *vida, int *nivel, int *xp) {
    int i, j, soma_dados = 0;
    char Classe[50];
    char atributos[6][15] = {"Forca", "Destreza", "Constituicao", "Sabedoria", "Inteligencia", "Carisma"};
  
    srand(time(NULL));
  
    printf("Digite o nome do seu personagem: ");
    scanf("%s", nome);
  
    printf("Escolha sua raça entre essas:\nHumano\nOrc\nElfo\n");
    scanf("%s", raca);

    // 1 - classe guerreiro
    if (classe == 1) {
        strcpy(Classe, "Guerreiro");
        for (i = 0; i < 6; i++) {
            soma_dados = 0;
            for (j = 0; j < 4; j++) {
                // Gerar um número aleatório entre 1 e 6
                int numero = rand() % 6 + 1;
                soma_dados += numero;
            }
            dados[i] = soma_dados;
        }

        printf("\nArmor: ");
        scanf("%d", armor);
        fflush(stdin);
        printf("\nVida: ");
        scanf("%d", vida);
        fflush(stdin);
        printf("\nNivel: ");
        scanf("%d", nivel);
        fflush(stdin);
        printf("\nXP: ");
        scanf("%d", &xp);
        fflush(stdin);
      
        // Caso a raça seja Humana
        if (strcmp(raca, "Humano") == 0) {
            for (i = 0; i < 6; i++) {
                dados[i] = dados[i] + 1;
            }
        }
        else if (strcmp(raca, "Orc") == 0) {
            dados[1] = dados[1] + 2;
            dados[3] = dados[3] + 1;
        }
        else if (strcmp(raca, "Elfo") == 0) {
            dados[2] = dados[2] + 1;
        }
    }
    // 2 - classe Mago
    else if (classe == 2) {
        strcpy(Classe, "Mago");
        for (i = 0; i < 6; i++) {
            soma_dados = 0;
            for (j = 0; j < 4; j++) {
                // Gerar um número aleatório entre 1 e 6
                int numero = rand() % 6 + 1;
                soma_dados += numero;
            }
            dados[i] = soma_dados;
        }
      
        printf("\nArmor: ");
        scanf("%d", armor);
        fflush(stdin);
        printf("\nVida: ");
        scanf("%d", vida);
        fflush(stdin);
        printf("\nNivel: ");
        scanf("%d", nivel);
        fflush(stdin);
        printf("\nXP: ");
        scanf("%d", &xp);
        fflush(stdin);
      
        // Caso a raça seja Humana
        if (strcmp(raca, "Humano") == 0) {
            for (i = 0; i < 6; i++) {
                dados[i] = dados[i] + 1;
            }
        }
        else if (strcmp(raca, "Orc") == 0) {
            dados[1] = dados[1] + 2;
            dados[3] = dados[3] + 1;
        }
        else if (strcmp(raca, "Elfo") == 0) {
            dados[2] = dados[2] + 1;
        }
    }
    // 3 - classe druida
    else if (classe == 3) {
        strcpy(Classe, "Druida");
        for (i = 0; i < 6; i++) {
            soma_dados = 0;
            for (j = 0; j < 4; j++) {
                // Gerar um número aleatório entre 1 e 6
                int numero = rand() % 6 + 1;
                soma_dados += numero;
            }
            dados[i] = soma_dados;
        }
      
        printf("\nArmor: ");
        scanf("%d", armor);
        fflush(stdin);
        printf("\nVida: ");
        scanf("%d", vida);
        fflush(stdin);
        printf("\nNivel: ");
        scanf("%d", nivel);
        fflush(stdin);
        printf("\nXP: ");
        scanf("%d", &xp);
        fflush(stdin);
      
        // Caso a raça seja Humana
        if (strcmp(raca, "Humano") == 0) {
            for (i = 0; i < 6; i++) {
                dados[i] = dados[i] + 1;
            }
        }
        else if (strcmp(raca, "Orc") == 0) {
            dados[1] = dados[1] + 2;
            dados[3] = dados[3] + 1;
        }
        else if (strcmp(raca, "Elfo") == 0) {
            dados[2] = dados[2] + 1;
        }
    }
}

void imprimirFicha(int classe, char *nome, char *raca, int *dados, int *armor, int *vida, int *nivel, int *xp) {
    printf("\n--- FICHA DO PERSONAGEM ---\n");
    printf("Nome: %s\n", nome);
    printf("Classe: ");
    if (classe == 1)
        printf("Guerreiro\n");
    else if (classe == 2)
        printf("Mago\n");
    else if (classe == 3)
        printf("Druida\n");
    printf("Raça: %s\n", raca);
    printf("Atributos:\n");
    printf("Força: %d\n", dados[0]);
    printf("Destreza: %d\n", dados[1]);
    printf("Constituição: %d\n", dados[2]);
    printf("Sabedoria: %d\n", dados[3]);
    printf("Inteligência: %d\n", dados[4]);
    printf("Carisma: %d\n", dados[5]);
    printf("Armor: %d\n", *armor);
    printf("Vida: %d\n", *vida);
    printf("Nivel: %d\n", *nivel);
    printf("XP: %d\n", xp);
}


int main() {
    // Criação do menu, para o usuário escolher como quer sua ficha
    char nome[50];
    char raca[50];
    int armor=0;
    int vida=0;
    int nivel=0;
    int xp=0;
    int op = 0;
    int dados[6] = {0};  // Array to store attribute values
    int classe = 0;
    
    do {
        printf("\t-MONTE SUA FICHA DE RPG-\n");
        printf("Escolha uma das opcoes que desejar nos parametros 5.e:\n");
        printf("\t(1) Montar a ficha Manual\n");
        printf("\t(2) Montar a ficha Automática\n");
        printf("\t(3) Mostrar a ficha montada\n");
        printf("\t(0) Sair\n");
        
        scanf("%d", &op);
        
        switch (op) {
            case 1:
                printf("Escolha sua classe:\n(1) Guerreiro\n(2) Mago\n(3) Druida\n");
                scanf("%d", &classe);
                fflush(stdin);
                preencherfichaManu(classe, nome, raca, dados, &armor, &vida, &nivel, xp);
                break;
                
            case 2:
                printf("Escolha sua classe:\n(1) Guerreiro\n(2) Mago\n(3) Druida\n");
                scanf("%d", &classe);
                fflush(stdin);
                preencherficharaut(classe, nome, raca, dados, &armor, &vida, &nivel, &xp);
                break;
                
            case 3:                
                imprimirFicha(classe, nome, raca, dados, &armor, &vida, &nivel, &xp);
                break;
                
            case 0:
                printf("Saindo do programa...\n");
                break;
                
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
        
    } while (op != 0);
    
    return 0;
}


