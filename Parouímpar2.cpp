#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero = 28;
	while (numero != 0)
	{
		cout << "diz um n�mero \n";
		cin >> numero;
		if (numero % 2 == 0)
		{
			cout << "� par \n";
		}
		else
		{
			cout << "� �mpar \n";
		}
	}
	cout << "colocou zero, tchau :)";
}


		
