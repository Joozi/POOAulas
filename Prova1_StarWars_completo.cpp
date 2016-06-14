/*
	Prova de Programa��o Orientada a Objetos (POO)
	Curso T�cnico em Prog. de Jogos Digitais
 
	Prof. Marcelo de Barros			IFRN - 14/06/2016
  
	Aluno:
 
 */
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void fim();

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
	/*
		----- QUEST�O 1. Imprima 5 (cinco) linhas utilizando um la�o for. -----
		
		Dica: Como eu imprimo uma linha?
		Dica: Sei como imprimir uma linha? Se sim, repito isso 5 (cinco) vezes!
		Dica: N�o vale fazer cout << endl << endl << endl << endl << endl;
	*/
	// Coloque o c�digo aqui!
	for (int cont = 0; cont < 5; cont++) cout << endl;
	cout << "		A long time ago in a galaxy far," << endl;
	cout << "		far away...." << endl;

	/*
		----- QUEST�O 1. Repita o c�digo da Quest�o 1 aqui. -----
	*/
	// Coloque o c�digo aqui!
	for (int cont = 0; cont < 5; cont++) cout << endl;
	system("pause");
	system("cls");

	cout << endl << endl;
	cout << "	     8888888888  888    88888" << endl;
	cout << " 	    88     88   88 88   88  88" << endl;
	cout << "	     8888  88  88   88  88888" << endl;
	cout << "	        88 88 888888888 88   88" << endl;
	cout << "	 88888888  88 88     88 88    888888" << endl;
	cout << endl;
	/*
		----- QUEST�O 2. Um programador, por acidente, deu espa�os a mais no come�o dos seus "cout". 
		Remova os espa�os desnecess�rios, de modo que forme a palavra "WARS" corretamente na tela. -----
		
		Dica: Na tela do editor, o texto deve ficar igual ao que voc� deseja mostrar na tela do programa!
		Dica: N�o mexa nas linhas marcadas! Elas j� est�o na posi��o correta.
	*/
	cout << "	 88  88  88   888    88888    888888" << endl;	// N�o mexa nessa linha.
	cout << "	 88  88  88  88 88   88  88  88" << endl;
	cout << "	 88 8888 88 88   88  88888    8888" << endl;
	cout << "	  888  888 888888888 88   88     88" << endl;
	cout << "	   88  88  88     88 88    8888888" << endl;	// N�o mexa nessa linha.

	cout << endl << endl;
	system("pause");
	system("cls");

	bool sair = false;

	int vida_tie = 40, vida_xwing = 40;
	int atq_tie = 2, atq_xwing = 1;
	int def_tie = 3, def_xwing = 4;
	
	string estado_tie = "Inteiro";
	string estado_xwing = "Inteiro";

	int dano;

	srand((int)time(0));

	// Enquanto sair for falso.
	while (!sair)
	{
		cout << endl;
		cout << "Tie-Fighter ataca com Ataque " << atq_tie << " contra defesa " << def_xwing << " da X-Wing." << endl;
		/*
			QUEST�O 3. Conserte a linha abaixo para gerar um n�mero aleat�rio que comece em atq_tie (o valor de ataque 
			do tie fighter)	e v� at� 10.
		*/
		dano = rand() % 10 + atq_tie;
		dano = dano - def_xwing;
		if (dano < 0) dano = 0;
		cout << "Tie-Fighter causa " << dano << " de dano na X-Wing." << endl;
		vida_xwing -= dano;

		cout << endl;
		cout << "X-Wing ataca com Ataque " << atq_xwing << " contra defesa " << def_tie << " do Tie-Fighter." << endl;
		dano = rand() % 10 + atq_xwing;
		dano = dano - def_tie;
		if (dano < 0) dano = 0;
		cout << "X-Wing causa " << dano << " de dano no Tie-Fighter." << endl;
		vida_tie -= dano;

		if (vida_xwing > 30 && vida_xwing < 40) estado_xwing = "Danos na Nave";
		else if (vida_xwing > 20) estado_xwing = "Nave Avariada";
		else if (vida_xwing > 10) estado_xwing = "Enfraquecida";
		else if (vida_xwing > 0) estado_xwing = "Estado Critico";
		else if (vida_xwing <= 0) estado_xwing = "Destruida";

		if (vida_tie > 30 && vida_tie < 40) estado_tie = "Danos na Nave";
		else if (vida_tie > 20) estado_tie = "Nave Avariada";
		else if (vida_tie > 10) estado_tie = "Enfraquecida";
		else if (vida_tie > 0) estado_tie = "Estado Critico";
		else if (vida_tie <= 0) estado_tie = "Destruida";


		cout << "	        			*       *" << endl;
		cout << "	 /  _  \\		         \\     /" << endl;
		cout << "	|-=(_)=-|		          :>o<:" << endl;
		cout << "	 \\     /		         /     \\" << endl;
		cout << "				        *       *" << endl;
		cout << endl;
		cout << "	Tie-Fighter			X-Wing" << endl;
		cout << "	Energia: " << vida_tie << "			Energia: " << vida_xwing << endl;
		cout << "	" << estado_tie << "			" << estado_xwing << endl;

		cout << endl;
		system("pause");
		system("cls");

		if (vida_xwing <= 0 || vida_tie <= 0) sair = true;
	}

	fim();

	return 0;
}

void fim()
{
	cout << "		FIM DE JOGO " << endl;
	cout << "      _______              _______" << endl;
	cout << "     /\\:::::/\\            /\\:::::/\\" << endl;
	cout << "    /::\\:::/::\\          /==\\:::/::\\" << endl;
	cout << "   /::::\\_/::::\\   .--. /====\\_/::::\\" << endl;
	cout << "  /_____/ \\_____\\-' .-.`-----' \\_____\\" << endl;
	cout << "  \\:::::\\_/:::::/-. `-'.-----._/:::::/" << endl;
	cout << "   \\::::/:\\::::/   `--' \\::::/:\\::::/" << endl;
	cout << "    \\::/:::\\::/          \\::/:::\\::/" << endl;
	cout << "     \\/:::::\\/            \\/:::::\\/" << endl;
	cout << "      \"\"\"\"\"\"               \"\"\"\"\"\"" << endl;
}


/*
	C�digo por https://github.com/marcelomesmo/POOAulas
	Desenhos ASCII retirados de http://www.asciimation.co.nz
*/