#include <iostream>
#include "investimentos.h"

using namespace std;

int main()
{
  tInvestimento i;
  int tempo;
  double capital, taxa;

  cout << "Informe o capital que pretende investir: R$";
  cin >> i.investimento;
  cout << "Informe a taxa de juros (% Ao Ano) praticada: ";
  cin >> i.taxa;
  cout << "Informe o tempo, em anos, em que o valor permanecerá investido: ";
  cin >> i.tempo;

  cout << "Montante: R$" << i.investimento << endl;
  cout << "Taxa dos Juros: " << i.taxa << "%" << endl;
  cout << "Tempo: " << i.tempo << endl << endl;

  cout << "Montante ao final de " << i.tempo << " anos, à juros simples: R$" << montantejurosimples (i.investimento, i.taxa, i.tempo) << endl;
  cout << "Montante ao final de " << i.tempo << " anos, à juros compostos: R$" << montantejurocomposto(i.investimento, i.taxa, i.tempo) << endl;
  cout << "Taxa juro simples " << i.taxa << "%a.a. = " << taxajs(i.taxa) << "%a.m." << endl;
  cout << "Taxa juro composto " << i.taxa << "%a.a. = " << taxajc(i.taxa) << "%a.m." << endl;

   return 0;
}
