using System;

class Program
{
    static void Main()
    {
        // Criação do menu, para o usuário escolher como quer sua ficha
        int classe=0;
        string nome = "";
        string raca = "";
        int[] dados = new int[6];
        int armor = 0;
        int vida = 0;
        int nivel = 0;
        int xp = 0;
        int op;

        do
        {
            Console.WriteLine("\t-MONTE SUA FICHA DE RPG-");
            Console.WriteLine("Escolha uma das opcoes que desejar nos parametros 5.e:");
            Console.WriteLine("\t(1) Montar a ficha Manual");
            Console.WriteLine("\t(2) Montar a ficha Automática");
            Console.WriteLine("\t(3) Mostrar a ficha montada");
            Console.WriteLine("\t(0) Sair");

            op = Convert.ToInt32(Console.ReadLine());

            switch (op)
            {
                case 1:
                    Console.WriteLine("Escolha sua classe:\n(1) Guerreiro\n(2) Mago\n(3) Druida");
                    classe = Convert.ToInt32(Console.ReadLine());
                    PreencherFichaManu(classe, dados);
                    break;

                case 2:
                    Console.WriteLine("Escolha sua classe:\n(1) Guerreiro\n(2) Mago\n(3) Druida");
                    classe = Convert.ToInt32(Console.ReadLine());
                    PreencherFichaRaut(classe, dados);
                    break;

                case 3:
                  
                    ImprimirFicha(classe, nome, raca, dados, armor, vida, nivel, xp);
                    break;

                case 0:
                    Console.WriteLine("Saindo do programa...");
                    break;

                default:
                    Console.WriteLine("Opção inválida. Tente novamente.");
                    break;
            }

        } while (op != 0);
    }
    //Criação da ficha manualmente
    static void PreencherFichaManu(int classe, int[] dados)
    {
        int vida = 0, armor = 0, nivel = 0, xp = 0, i;
        string nome;
        string raca;
        string[] atributos = { "Força", "Destreza", "Constituição", "Sabedoria", "Inteligência", "Carisma" };
        string Classe = " ";

        Console.WriteLine("Digite o nome do seu personagem: ");
        nome = Console.ReadLine();
        Console.WriteLine("Escolha sua raça que deseja entre essas:\nHumano\nOrc\nElfo");
        raca = Console.ReadLine();

        if (classe == 1)
        {
            Classe = "Guerreiro";
            for (i = 0; i < 6; i++)
            {
                Console.Write($"Digite o {i + 1}º dado do atributo {atributos[i]}: ");
                dados[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Write("\nArmor: ");
            armor = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nVida: ");
            vida = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nNível: ");
            nivel = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nXP: ");
            xp = Convert.ToInt32(Console.ReadLine());

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
        else if (classe == 2)
        {
            Classe = "Mago";
            for (i = 0; i < 6; i++)
            {
                Console.Write($"Digite o {i + 1}º dado do atributo {atributos[i]}: ");
                dados[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Write("\nArmor: ");
            armor = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nVida: ");
            vida = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nNível: ");
            nivel = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nXP: ");
            xp = Convert.ToInt32(Console.ReadLine());

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
        else if (classe == 3)
        {
            Classe = "Druida";
            for (i = 0; i < 6; i++)
            {
                Console.Write($"Digite o {i + 1}º dado do atributo {atributos[i]}: ");
                dados[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Write("\nArmor: ");
            armor = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nVida: ");
            vida = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nNível: ");
            nivel = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nXP: ");
            xp = Convert.ToInt32(Console.ReadLine());

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

        Console.WriteLine("Ficha preenchida.");
    }

    static void PreencherFichaRaut(int classe, int[] dados)
    {
       int vida = 0, armor = 0, nivel = 0, xp = 0, i;
        string nome;
        string raca;
        string[] atributos = { "Força", "Destreza", "Constituição", "Sabedoria", "Inteligência", "Carisma" };
        string Classe = "";

        Console.WriteLine("Digite o nome do seu personagem: ");
        nome = Console.ReadLine();
        Console.WriteLine("Escolha sua raça que deseja entre essas:\nHumano\nOrc\nElfo");
        raca = Console.ReadLine();
        Random random = new Random();

        if (classe == 1)
        {
            Classe = "Guerreiro";
            //Preenche rodando os dados
            for (i = 0; i < 6; i++){
                int soma_dados = 0;
                for (int j  = 0; j < 4; j++){
                    // Gerar um número aleatório entre 1 e 6
                    int numero = random.Next(1, 7);
                    soma_dados += numero;
                }
                dados[i] = soma_dados;
            }
            Console.Write("\nArmor: ");
            armor = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nVida: ");
            vida = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nNível: ");
            nivel = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nXP: ");
            xp = Convert.ToInt32(Console.ReadLine());

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
        else if (classe == 2)
        {
            Classe = "Mago";
            //Preenche rodando os dados
            for (i = 0; i < 6; i++){
                int soma_dados = 0;
                for (int j = 0; j < 4; j++){
                    // Gerar um número aleatório entre 1 e 6
                    int numero = random.Next(1, 7);
                    soma_dados += numero;
                }
                dados[i] = soma_dados;
            }
            Console.Write("\nArmor: ");
            armor = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nVida: ");
            vida = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nNível: ");
            nivel = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nXP: ");
            xp = Convert.ToInt32(Console.ReadLine());

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
        else if (classe == 3)
        {
            Classe = "Druida";
            //Preenche rodando os dados
            for (i = 0; i < 6; i++){
                int soma_dados = 0;
                for (int j = 0; j < 4; j++){
                    // Gerar um número aleatório entre 1 e 6
                    int numero = random.Next(1, 7);
                    soma_dados += numero;
                }
                dados[i] = soma_dados;
            }
            Console.Write("\nArmor: ");
            armor = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nVida: ");
            vida = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nNível: ");
            nivel = Convert.ToInt32(Console.ReadLine());
            Console.Write("\nXP: ");
            xp = Convert.ToInt32(Console.ReadLine());

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

        Console.WriteLine("Ficha preenchida.");


    }

    static void ImprimirFicha(int classe, string nome, string raca, int[] dados, int armor, int vida, int nivel, int xp){
      
      Console.WriteLine("\n--- FICHA DO PERSONAGEM ---");
      Console.WriteLine($"Nome: {nome}");
      Console.Write("Classe: ");
      if (classe == 1)
          Console.WriteLine("Guerreiro");
      else if (classe == 2)
          Console.WriteLine("Mago");
      else if (classe == 3)
          Console.WriteLine("Druida");
      Console.WriteLine($"Raça: {raca}");
      Console.WriteLine("Atributos");
      Console.WriteLine($"Força: {dados[0]}");
      Console.WriteLine($"Destreza: {dados[1]}");
      Console.WriteLine($"Constituição: {dados[2]}");
      Console.WriteLine($"Sabedoria: {dados[3]}");
      Console.WriteLine($"Inteligência: {dados[4]}");
      Console.WriteLine($"Carisma: {dados[5]}");
      Console.WriteLine($"Armor: {armor}");
      Console.WriteLine($"Vida: {vida}");
      Console.WriteLine($"Nível: {nivel}");
      Console.WriteLine($"XP: {xp}");
  }
}
