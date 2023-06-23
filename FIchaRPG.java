import java.util.Scanner;
import java.util.Random;
import java.util.Locale;

public class FIchaRPG {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String nome = "";
    String raca = "";
    int armor = 0;
    int vida = 0;
    int nivel = 0;
    int xp = 0;
    int op = 0;
    int[] dados = new int[6];
    int classe = 0;

    do {
      System.out.println("\t-MONTE SUA FICHA DE RPG-");
      System.out.println("Escolha uma das opções:");
      System.out.println("\t(1) Montar a ficha Manual");
      System.out.println("\t(2) Montar a ficha Automática");
      System.out.println("\t(3) Mostrar a ficha montada");
      System.out.println("\t(0) Sair");

      op = scanner.nextInt();

      switch (op) {
        case 1:
          System.out.println("Digite o nome do seu personagem:");
          nome = scanner.next();
          System.out.println("Escolha sua raça entre essas: Humano, Orc, Elfo");
          raca = scanner.next();
          System.out.println("Escolha sua classe:\n1 - Guerreiro\n2 - Mago\n3 - Druida");
          classe = scanner.nextInt();
          preencherFichaManual(classe, dados);
          break;

        case 2:
          System.out.println("Digite o nome do seu personagem:");
          nome = scanner.next();
          System.out.println("Escolha sua raça entre essas: Humano, Orc, Elfo");
          raca = scanner.next();
          System.out.println("Escolha sua classe:\n1 - Guerreiro\n2 - Mago\n3 - Druida");
          classe = scanner.nextInt();
          preencherFichaAutomatica(classe, dados);
          break;

        case 3:
          imprimirFicha(classe, nome, raca, dados, armor, vida, nivel, xp);
          break;

        case 0:
          System.out.println("Saindo do programa...");
          break;

        default:
          System.out.println("Opção inválida. Tente novamente.");
          break;
      }

    } while (op != 0);

    scanner.close();
  }

  public static void preencherFichaAutomatica(int classe, int[] dados) {
    Random random = new Random();
    System.out.println("Preenchendo a ficha automaticamente...");

    for (int i = 0; i < 6; i++) {
      dados[i] = random.nextInt(18) + 3;
    }
  }

  public static void preencherFichaManual(int classe, int[] dados) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Preenchendo a ficha manualmente...");

    for (int i = 0; i < 6; i++) {
      System.out.println("Digite o valor para " + getAtributoString(i) + ":");
      dados[i] = scanner.nextInt();
    }

    scanner.close();
  }

  public static void imprimirFicha(int classe, String nome, String raca, int[] dados, int armor, int vida, int nivel,
      int xp) {
    Locale.setDefault(new Locale("pt", "BR"));

    System.out.println("\n--- FICHA DO PERSONAGEM ---");
    System.out.println("Nome: " + nome);
    System.out.print("Classe: ");
    if (classe == 1)
      System.out.println("Guerreiro");
    else if (classe == 2)
      System.out.println("Mago");
    else if (classe == 3)
      System.out.println("Druida");
    System.out.println("Raça: " + raca);
    System.out.println("\tAtributos");
    System.out.println("Força: " + dados[0]);
    System.out.println("Destreza: " + dados[1]);
    System.out.println("Constituição: " + dados[2]);
    System.out.println("Sabedoria: " + dados[3]);
    System.out.println("Inteligência: " + dados[4]);
    System.out.println("Carisma: " + dados[5]);
    System.out.println("Armor: " + armor);
    System.out.println("Vida: " + vida);
    System.out.println("Nível: " + nivel);
    System.out.println("XP: " + xp);
  }

  public static String getAtributoString(int index) {
    switch (index) {
      case 0:
        return "Força";
      case 1:
        return "Destreza";
      case 2:
        return "Constituição";
      case 3:
        return "Sabedoria";
      case 4:
        return "Inteligência";
      case 5:
        return "Carisma";
      default:
        return "";
    }
  }
}