#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, operação, ad = 1, sub = 2, mult = 3, div =4 ;

	cout << "Deseja fazer qual operação? Adição(1), Subtração(2), Multiplicação(3), Divisão(4)\n";
	cin >> operação;
	
	if (operação == ad)
	{
		cout << "Digite o primeiro número: ";
		cin >> num1;
		cout << "Digite o segundo número: ";
		cin >> num2;
		cout << "O resultado é: " << num1 + num2 << "\n";
	}
	else if (operação == sub)
	{
		sub;
		cout << "Digite o primeiro número: ";
		cin >> num1;
		cout << "Digite o segundo número: ";
		cin >> num2;
		cout << "O resultado é: " << num1 - num2 << "\n";
	}
	else if (operação == mult)
	{
		cout << "Digite o primeiro número: ";
		cin >> num1;
		cout << "Digite o segundo número: ";
		cin >> num2;
		cout << "O resultado é: " << num1 * num2 << "\n";
	}
	else if (operação == div)
	{
		cout << "Digite o primeiro número: ";
		cin >> num1;
		cout << "Digite o segundo número: ";
		cin >> num2;
		if (num2 != 0)
			cout << "O resultado é: " << num1 / num2 << "\n";
		else
		{
			cout << "Erro: Divisão por zero não é permitida.\n";
		}
	}
	else
	{
		cout << "Operação inválida.\n";
	}

	return 0;
}