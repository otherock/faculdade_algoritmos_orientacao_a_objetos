#include <iostream>
#include <string>
#include "classeCalculadora.h"
using namespace std;

class FuncionarioCaixa {
    private:
        string nome;
        string endereco;
        Calculadora calculadora;

    public:
    FuncionarioCaixa(string n, string e, Calculadora c);
    FuncionarioCaixa();

    string getNome();
    void setNome(string n);
    string getEndereco();
    void setEndereco(string e);
    Calculadora getCalculadora();
    void setCalculadora(Calculadora c);

    float soma(float x, float y);
    float subtrai(float x, float y);
    float multiplica(float x, float y);
    float divide(float x, float y);
    int eleva_ao_quadrado(int x);
    int eleva_ao_cubo(int x);

    void imprime_info();
};