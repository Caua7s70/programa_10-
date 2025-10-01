/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
int mat, pt, ing, fq, media;


"por favor, escreva sua nota de mat";
std::cin >> mat;
std::cout << "por favor, escreva sua nota de pt";
std::cin >> pt;
std::cout << "por favor, escreva sua nota de ing";
std::cin >> ing;
std::cout << "por favor, escreva sua nota de fq";
std::cin >> fq;

media = (mat + pt + ing + fq) / 4;
std::cout << "a media das notas é"  << media <<  ".";
}