#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero = 28;
	while (numero != 0)
	{ 
		cout << "digite um número \n";
		cin >> numero;
		if (numero > 0)
		{
			cout << "O número é positivo \n";
		} 
		else if (numero < 0)
		{ 
			cout << "O número é negativo \n";
		}
	} 
	cout << "O número é zero, fechou o programa \n";
}