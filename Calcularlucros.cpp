#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float lucro;
	float PVsandes, PVbolos, PVrefrig, PVcafe, CustoSandes, CustoBolos, CustoRefrig, CustoCafe, Qsandes, Qbolos, Qrefrig, Qcafe;
	float CustoSandes 1.0, CustoBolos 0.8, CustoRefrig 1.5, CustoCafe 0.6;

	cout << "Insira o pre�o de venda da sandes: ";
	cin >> PVsandes;
	cout << "Insira o pre�o de venda do bolo: ";
	cin >> PVbolos;
	cout << "Insira o pre�o de venda do refrigerante: ";
	cin >> PVrefrig;
	cout << "Insira o pre�o de venda do caf�: ";
	cin >> PVcafe;
	
	cout << "Insira a quantidade de sandes vendidas: ";
	cin >> Qsandes;
	cout << "Insira a quantidade de bolos vendidos: ";
	cin >> Qbolos;
    cout << "Insira a quantidade de refrigerantes vendidos: ";
	cin >> Qrefrig;
	cout << "Insira a quantidade de caf�s vendidos: ";
	cin >> Qcafe;
	lucro = (PVsandes - CustoSandes) * Qsandes + (PVbolos - CustoBolos) * Qbolos + (PVrefrig - CustoRefrig) * Qrefrig + (PVcafe - CustoCafe) * Qcafe;
	
	