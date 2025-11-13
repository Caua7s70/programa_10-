#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, m;
	cin >> n;
	cin >> m;
	cout << n / m << endl;
	return 0;
}