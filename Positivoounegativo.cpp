#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero = 28;
	while (numero != 0)
	{ 
		cout << "digite um n�mero \n";
		cin >> numero;
		if (numero > 0)
		{
			cout << "O n�mero � positivo \n";
		} 
		else if (numero < 0)
		{ 
			cout << "O n�mero � negativo \n";
		}
	} 
	cout << "O n�mero � zero, fechou o programa \n";
}