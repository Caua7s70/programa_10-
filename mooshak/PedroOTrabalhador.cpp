#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, l, c;
	cin >> a;
	cin >> l;
	cin >> c;
	if (a * l * c >= 50 && a >= 3)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
}