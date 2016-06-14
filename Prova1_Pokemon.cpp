/*
	Prova de Programa��o Orientada a Objetos (POO)
	Curso T�cnico em Prog. de Jogos Digitais

	Prof. Marcelo de Barros			IFRN - 14/06/2016

	Aluno:

				BEM VINDO AO MUNDO DE POKEMON

	Nesse jogo, iremos fazer uma tela de personagem e testar
				os poderes do nosso Pikachu.
			
				Vamos captura-los! Boa prova!

*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

/*
	Leia atentamente as instru��es.
	Responda a prova em sil�ncio.

	Instru��es:

	O c�digo est� incompleto!

	1. Leia a prova de cabo a rabo.
	2. Entenda o que o c�digo faz. Execute se necess�rio.
	3. Preencha os coment�rios em ----- MAI�SCULO ----- com o c�digo que est� faltando.
	4. Teste!
	5. Repita 3 e 4.

	Se necess�rio, use uma folha para lhe auxiliar! Copie o nome das vari�veis e seus valores.

	Boa sorte!

*/
int main()
{
	cout << endl << endl << endl << endl << endl;
	cout << "		Gotta catch 'em" << endl;
	cout << "		Gotta catch 'em all" << endl;
	cout << endl << endl << endl << endl << endl;

	system("pause");
	system("cls");

	/*
		----- QUEST�O 1. Um programador, por acidente, colocou o nome do jogo em duas linhas diferentes.
		Fa�a a corre��o no texto, de modo que forme a palavra "POKEMON" em uma �nica linha. -----

		Dica: Na tela do editor, o texto deve ficar igual ao que voc� deseja mostrar na tela do programa!
		Dica: Adicione o texto dos "couts" de baixo nos "couts" de cima.
	*/
	cout << endl << endl;
	cout << "                        88" << endl;
	cout << "                        88" << endl;
	cout << "                        88" << endl;
	cout << "8b,dPPYba,   ,adPPYba,  88   ,d8  ,adPPYba, 88,dPYba,,adPYba," << endl;
	cout << "88P'     8a a8       8a 88 ,a8   a8P_____88 88P'    88      8a" << endl;
	cout << "88       d8 8b       d8 8888[    8PP'''''   88      88      88" << endl;
	cout << "88b,   ,a8  `8a,   ,a8  88` Yba,  8b,   ,aa 88      88      88" << endl;
	cout << "88`YbbdP'     `YbbdP'   88   `Y8a  `Ybbd8'  88      88      88" << endl;
	cout << "88" << endl;
	cout << "88" << endl;

	cout << "  ,adPPYba,  8b,dPPYba," << endl;
	cout << " a8       8a 88P'    `8a" << endl;
	cout << " 8b       d8 88       88" << endl;
	cout << " `8a,   ,a8  88       88" << endl;
	cout << "   `YbbdP'   88       88" << endl;

	cout << endl << endl;

	system("pause");
	system("cls");

	bool sair = false;

	// Vida do personagem.
	int vida = 10;
	// Os atributos de Resist�ncia, For�a e Velocidade do personagem.
	int resistencia = 1, forca = 4, velocidade = 2;
	// Indica o n�vel de treinamento do personagem.
	string nivel = "Normal";

	int dano;
	srand((int)time(0));

	// Enquanto sair for falso.
	while (!sair)
	{
		// Mostra o personagem tela e seus atributos.
		cout << "`;-.          ___," << endl;
		cout << "  `.`\\_...._/`.-\"`				Vida: " << vida << endl;
		cout << "    \\        /      ," << endl;
		cout << "    / _   _ \\    .' `-._			Forca: " << forca << endl;
		cout << "   |)   .   ()\\  /   _.'			Velocidade: " << velocidade << endl;
		cout << "   \\   ~~~    ,; '. <" << endl;
		cout << "    ;.__     ,;|   > \\				" << nivel << endl;
		cout << "   / ,    / ,  |.-'.-'" << endl;
		cout << "  (_/    (_/ ,;|.<`				Pikachu" << endl;
		cout << "    \\    ,     ;-`" << endl;
		cout << "     >   \\    /" << endl;
		cout << "    (_,-'`> .'" << endl;
		cout << "      (_,'" << endl;
		cout << endl << endl;

		// Pede para o usu�rio digitar uma das 3 (tr�s) op��es.
		cout << "Voce deseja aumentar:" << endl << "(Digite o numero correspondente e aperte ENTER)" << endl;
		cout << "1- Resistencia" << endl << "2- Forca" << endl << "3- Velocidade" << endl;
		int opcao;
		/*
			----- QUEST�O 2. Fa�a um comando que leia a vari�vel "opcao" do teclado. -----

			Dica: Como fa�o para ler uma vari�vel digitada pelo usu�rio?
		*/
		// Coloque o c�digo aqui!

		// Aumenta os atributos de acordo com a op��o selecionada pelo usu�rio.
		if (opcao == 1)	resistencia++;
		else if (opcao == 2) forca++;
		else if (opcao == 3) velocidade++;

		/*
			----- QUEST�O 3. Adicione um comando para somar o dobro da Resist�ncia � Vida do personagem. -----

			Dica: Como fa�o para somar um valor na vari�vel "vida"?
			Dica: Sei como fazer isso? Ent�o devo somar o dobro da Resist�ncia.
		*/
		// Coloque o c�digo aqui!

		/*
			----- QUEST�O 4. Complete o condicional abaixo. -----
		
			Deve mudar o n�vel de treinamento do personagem de acordo com a seguinte tabela:
			Vida					N�vel
			entre 12 e 16			"Treinando"
			entre 17 e 22			"Forte"
			maior que 22			"Muito Forte"

			Complete com os que est�o faltando.

			Dica: Coloque o c�digo onde se pede!
		*/
		if (vida > 12 && vida <= 16) nivel = "Treinando";
		// Coloque o c�digo aqui!

		/*
			----- QUEST�O 5. Fa�a um la�o para repetir as instru��es abaixo 3 (tr�s) vezes. -----

			Dica: Precisamos repetir as 4 (quatro) linhas abaixo.
			Dica: Sei como repetir um comando? Da mesma forma repetimos mais de um, basta colocar tudo junto no la�o.
			Dica: Lembre-se de usar o { } corretamente.
		*/
		// Coloque o c�digo aqui!
			cout << "Pikachu esta testando seus ataques." << endl;
			dano = rand() % 20 + 1;
			dano = dano * forca;
			cout << "Pikachu causa " << dano << " de dano." << endl;

		cout << endl;
		system("pause");
		system("cls");

		/*
			----- QUEST�O 6. Adicione um condicional para encerrar o jogo quando o 
							 "nivel" do personagem for "Muito Forte". -----
		*/
		// Coloque o c�digo aqui!
	}
	
	cout << endl << endl;
	cout << "             _" << endl;
	cout << "            | |" << endl;
	cout << " _ __   ___ | | _____ _ __ ___   ___  _ __" << endl;
	cout << "| '_ \\ / _ \\| |/ / _ \\ '_ ` _ \\ / _ \\| '_ \\" << endl;
	cout << "| |_) | (_) |   <  __/ | | | | | (_) | | | |" << endl;
	cout << "| .__/ \\___/|_|\\_\\___|_| |_| |_|\\___/|_| |_|" << endl;
	cout << "| |" << endl;
	cout << "|_|" << endl;
	cout << endl << endl;

	return 0;
}

/*
C�digo por https://github.com/marcelomesmo/POOAulas
Desenhos ASCII retirados de http://ascii.co.uk/art/pokemon
*/