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
	int Matriz[5][3], Array[5][3], soma[5][3], escolha;
	for (int i = 0; i < 5; i++)
	{


		for (int j = 0; j < 3; j++)
		{
			cout << "Digite o valor da Matriz na posicao [" << i << "][" << j << "]: ";
			cin >> Matriz[i][j];

		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Digite o valor do Array na posicao [" << i << "][" << j << "]: ";
			cin >> Array[i][j];


		}
	}
	system("cls");
	cout << "********************************************************************\n";
	cout << "Quer subtrair ou somar as matrizes? (1 - somar, 2- subtrair, 3 - sair): ";
	cin >> escolha;
	if (escolha == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				soma[i][j] = Matriz[i][j] + Array[i][j];
				cout << soma[i][j] <<"   ";
			}
		}
	}
	else if (escolha == 2)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				soma[i][j] = Matriz[i][j] - Array[i][j];
				cout << soma[i][j] << "   ";
			}
			cout << "\n";
		}
	}
	else
	{
		cout << "Saindo do programa..." << endl;
	}
	return 0;
}