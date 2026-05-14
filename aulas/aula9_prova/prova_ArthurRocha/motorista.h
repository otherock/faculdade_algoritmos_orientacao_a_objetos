// Arthur Rocha Delgado

#ifndef MOTORISTA_H
#define MOTORISTA_H

#include <string>
using namespace std;

class Motorista {
    private:
        string nome;
        string cnh;
        float salario_liquido;
        float salario_bruto;
        float horas_trabalhadas;
        
        string tipo_motorista;
        
    public:
        Motorista(string nome, string cnh, float salario_liquido, float salario_bruto, float horas_trabalhadas);

        string get_nome();
        void set_nome(const string nome);

        string get_cnh();
        void set_cnh(const string cnh);

        float get_salario_liquido();
        void set_salario_liquido(const float salario_liquido );

        float get_salario_bruto();
        void set_salario_bruto(const float salario_bruto);

        bool excedeJornada(const float horas_trabalhadas);

        bool salarioIrregular(const float salario_liquido, float salario_bruto);

        string getInfoEspecifica();

        void imprime_info();
};

#endif