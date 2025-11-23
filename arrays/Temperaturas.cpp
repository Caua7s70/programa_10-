#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	string calen[12] = { "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro" };
	float temp[12], media, soma = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Digite a temperatura média de " << calen[i] << ": ";
		cin >> temp[i];
	}
	for (int i = 0; i < 12; i++)
	{
		soma = soma + temp[i];
	}
	media = soma / 12;

	for (int j = 0; j < 12; j++)
	{
		if (temp[j] > media)
		{
			cout << calen[j] << ": " << temp[j] << "°C\n";
		}
	}
	cout << "A média é: " << media << "°C\n";


	return 0;
}