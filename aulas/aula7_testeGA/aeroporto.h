// Arthur Rocha & Levi Marques
#ifndef AEROPORTO_H
#define AEROPORTO_H

#include <string>
#include "passagem.h"

using namespace std;

class Aeroporto {
    private:
        string nome;
        float valor_total;
        Passagem passagem;

    public:
        Aeroporto(string nome, Passagem passagem);

        string get_nome();
        float get_valor_total();

        void set_nome(string nome);
        void set_valor_total(float valor_total);

        Passagem* compraPassagem(Passageiro passageiro, Viagem viagem);
};

#endif