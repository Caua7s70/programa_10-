#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;



int main()
{
	float numero, potencia, resultado = 0;

	cout << "Digite um numero: ";
	cin >> numero;
	cout << "Digite a potencia: ";
	cin >> potencia;

	resultado = pow(numero, potencia);
	cout << numero << " elevado a " << potencia << " eh igual a " << resultado << endl;


	return 0;
}