#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
    string nome[10] = { "Antonio","Anabela","Beatriz","Bernardo","Clara","Carlos","Diana","Diogo","Elisabete","Eurico" };
    string disciplinas[10] = { "Portugues","Ingles","Fisica","TLP","TIC","Matematica","ACS","Filosofia","Quimica","Ed.Fis." };

    int nota[10][10];
    int i, j, maior = 0;
    float media1 = 0, media2 = 0, soma;

    for (i = 0; i < 10; i++)
    {
        cout << disciplinas[i] << " disciplina:\n";

        for (j = 0; j < 10; j++)
        {
            cout << "nota do(a) " << nome[j] << ": ";
            cin >> nota[i][j];
        }
    }

    for (i = 0; i < 10; i++)
    {
        soma = 0;
        for (j = 0; j < 10; j++)
        {
          soma = soma + nota[j][i];
        }
        media1 = soma / 10;
        cout << "Media do(a) " << nome[i] << ": " << media1 << "\n";
    }

    for (i = 0; i < 10; i++)
    {
        soma = 0;
        for (j = 0; j < 10; j++)
        {
           soma = soma + nota[i][j];
        }
        media2 = soma / 10;
        cout << "Media da disciplina " << disciplinas[i] << ": " << media2 << "\n";
    }

    maior = nota[0][0];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (nota[i][j] > maior)
                maior = nota[i][j];
        }
    }

    cout << "\nMaior nota: " << maior << "\n";

    return 0;
}