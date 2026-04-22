#ifndef MOTORISTA_H
#define MOTORISTA_H

#include <string>
#include "veiculo.h"

using namespace std;

class Motorista {
    private:
        string nome;
        string cnh;
        Veiculo veiculo;

    public:
        Motorista(string nome, string cnh, Veiculo veiculo);

        string get_nome();
        string get_cnh();
        Veiculo get_veiculo();

        void set_nome(const string nome);
        void set_cnh(const string cnh);
        void set_veiculo(const Veiculo veiculo);

        float abastece(float litros);
        string realiza_viagem(float distancia, float consumo_medio);

        void imprime_info();
};

#endif
