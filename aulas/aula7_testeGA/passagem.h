// Arthur Rocha & Levi Marques
#ifndef PASSAGEM_H
#define PASSAGEM_H

#include "viagem.h"
#include "passageiro.h"

class Passagem {
    private:
        Viagem viagem;
        Passageiro passageiro;
        float valor_da_passagem;

    public:
        Passagem(Viagem viagem, Passageiro passageiro, float valor_da_passagem);

        Viagem get_viagem();
        Passageiro get_passageiro();
        float get_valor_da_passagem();

        void set_viagem(Viagem viagem);
        void set_passageiro(Passageiro passageiro);
        void set_valor_da_passagem(float valor_da_passagem);

        void imprime_info();
};

#endif
