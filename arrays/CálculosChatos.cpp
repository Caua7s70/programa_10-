#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num[10];
	char escolha;

	for (int i = 0; i < 10; i++)
	{
		cout << "Digite o " << i + 1 << "º número ";
		cin >> num[i];
	}
	cout << "quer ver os números negativos ou a soma dos negativos? (n/s) ";
	cin >> escolha;
	if (escolha == 'n')
	{
		cout << "Números negativos: ";
		for (int i = 0; i < 10; i++)
		{
			if (num[i] < 0)
			{
				cout << num[i] << " ";
			}
		}
	}
	else if (escolha == 's')
	{
		int soma = 0;
		for (int i = 0; i < 10; i++)
		{
			if (num[i] < 0)
			{
				soma += num[i];
			}
		}
		cout << "Soma dos números negativos: " << soma;
	}
	else
	{
		cout << "Opção inválida.";
	}	





	return 0;
}