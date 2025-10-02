#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero = 28;
	while (numero != 0)
	{
		cout << "diz um número \n";
		cin >> numero;
		if (numero % 2 == 0)
		{
			cout << "é par \n";
		}
		else
		{
			cout << "é ímpar \n";
		}
	}
	cout << "colocou zero, tchau :)";
}


		
