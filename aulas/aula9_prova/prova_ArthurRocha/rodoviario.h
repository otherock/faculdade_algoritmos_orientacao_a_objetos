// Arthur Rocha Delgado

#ifndef RODOVIARIO_H
#define RODOVIARIO_H

#include "motorista.h"
using namespace std;

class Urbano: public Motorista{
    private:
        string nome;
        string cnh;
        float salario_liquido;
        float salario_bruto;
        float horas_trabalhadas;
        float numero_registro;
        string rota;


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

        string get_rota();
        void set_rota(const string rota);

        string getInfoEspecifica();

        void imprime_info();
};

#endif