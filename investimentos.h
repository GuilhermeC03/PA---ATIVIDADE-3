#include <iostream>
#include <cmath>
using namespace std;

struct tInvestimento{
  double investimento; //Valor investido
  double taxa; //Taxa praticada no investimento
  int tempo; //Prazo do investimento
};

//Conversão da taxa de juros ao ano para ao mês
double taxajs(double taxa){
    return ((taxa/100) / 12) * 100;
}

// Conversão da taxa de juros de ao ano para ao mês.
double taxajc(double taxa){
    double conversao;
    conversao = ((pow((1+(taxa/100)),(1.0/12)))-1) * 100;
    return conversao;
}

// Montante final considerando juros simples
double montantejurosimples(double capital, double taxa, int tempo){
    double montante, juros;
    juros = 1 + ((taxa/100) * tempo);
    montante = capital * juros;
    return montante;
}

// Montante final considerando juros compostos.
double montantejurocomposto(double capital, double taxa, int tempo){
    double montante, juros;
    juros = pow((1 + (taxa/100)),tempo);
    montante = capital * juros;
    return montante;
}