// Arthur Rocha Delgado

#ifndef URBANO_H
#define URBANDO_H

#include "motorista.h"
using namespace std;

class Urbano: public Motorista{
    private:
        string nome;
        string cnh;
        float salario_liquido;
        float salario_bruto;
        float horas_trabalhadas;
        string rotulo;
        string numero_registro;

    public:
        Urbano(string nome, string cnh, float salario_liquido, float salario_bruto, float horas_trabalhadas, float numero_registro);

        string get_nome();
        void set_nome(const string nome);

        string get_cnh();
        void set_cnh(const string cnh);

        float get_salario_liquido();
        void set_salario_liquido(const float salario_liquido );

        float get_salario_bruto();
        void set_salario_bruto(const float salario_bruto);

        string getInfoEspecifica();

        void imprime_info();
};

#endif