#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int cod[4], codi[4], atte, atte2, chutes = 0, chutes2 = 0;
	for (int i = 0; i < 4; i++)
	{
		cod[i] = rand() % 2;
	}
		cout << "Bem vindo ao jogo do Master Mind!" << endl;
		cout << "Jogador 1, Tente adivinhar o codigo de 4 digitos (0 ou 1)." << endl;
		cin >> atte;
		chutes++;
		while (atte != cod[0] * 1000 + cod[1] * 100 + cod[2] * 10 + cod[3])
		{
			cout << "Errado! Tente novamente." << endl;
			cin >> atte;
			chutes++;
		}
		cout << "Parabéns! Você acertou o código em " << chutes << " tentativas." << endl;

		for (int i = 0; i < 4; i++)
		{
			codi[i] = rand() % 2;
		}
		cout << "Jogador 2, Tente adivinhar o codigo de 4 digitos (0 ou 1)." << endl;
		cin >> atte2;
		chutes2++;
		while (atte2 != codi[0] * 1000 + codi[1] * 100 + codi[2] * 10 + codi[3])
			{
			cout << "Errado! Tente novamente." << endl;
			cin >> atte2;
			chutes2++;
			}
		cout << "Parabéns! Você acertou o código em " << chutes2 << " tentativas." << endl;
		if (chutes < chutes2)
		{
			cout << "Jogador 1 venceu!" << endl;
		}
		else if (chutes2 < chutes)
		{
			cout << "Jogador 2 venceu!" << endl;
		}
		else
		{
			cout << "Empate!" << endl;
		}
	return 0;
}