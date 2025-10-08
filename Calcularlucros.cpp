#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float lucro;
	float PVsandes, PVbolos, PVrefrig, PVcafe, CustoSandes, CustoBolos, CustoRefrig, CustoCafe, Qsandes, Qbolos, Qrefrig, Qcafe;
	float CustoSandes 1.0, CustoBolos 0.8, CustoRefrig 1.5, CustoCafe 0.6;

	cout << "Insira o preço de venda da sandes: ";
	cin >> PVsandes;
	cout << "Insira o preço de venda do bolo: ";
	cin >> PVbolos;
	cout << "Insira o preço de venda do refrigerante: ";
	cin >> PVrefrig;
	cout << "Insira o preço de venda do café: ";
	cin >> PVcafe;
	
	cout << "Insira a quantidade de sandes vendidas: ";
	cin >> Qsandes;
	cout << "Insira a quantidade de bolos vendidos: ";
	cin >> Qbolos;
    cout << "Insira a quantidade de refrigerantes vendidos: ";
	cin >> Qrefrig;
	cout << "Insira a quantidade de cafés vendidos: ";
	cin >> Qcafe;
	lucro = (PVsandes - CustoSandes) * Qsandes + (PVbolos - CustoBolos) * Qbolos + (PVrefrig - CustoRefrig) * Qrefrig + (PVcafe - CustoCafe) * Qcafe;
	
	