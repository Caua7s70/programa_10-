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
	int Matriz[5][3], Array[5][3], soma;
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
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			soma = Matriz[i][j] + Array[i][j];
			cout << "A soma da posicao [" << i << "][" << j << "] é: " << soma << endl;
		}
	}

	return 0;
}