// Arthur Rocha & Levi Marques
#include "viagem.h"
#include "passageiro.h"
#include "passagem.h"
#include "aeroporto.h"
#include <iostream>

Aeroporto::Aeroporto(string nome, Passagem passagem): passagem(passagem) {
    this->nome = nome;
    this->valor_total = 0.0;
}

string Aeroporto::get_nome() {
    return this->nome;
}

void Aeroporto::set_nome(string nome) {
    this->nome = nome;
}

float Aeroporto::get_valor_total() {
    return this->valor_total;
}

void Aeroporto::set_valor_total(float valor_total) {
    this->valor_total = valor_total;
}

Passagem* Aeroporto::compraPassagem(Passageiro passageiro, Viagem viagem) {
    if (viagem.get_lugares_vendidos() == viagem.get_max_lugares())
        return nullptr;

    if(passageiro.get_idade() <= 5)
        passagem.set_valor_da_passagem(0);

    else if(passageiro.get_idade() >= 6 && passageiro.get_idade() <= 12)
        passagem.set_valor_da_passagem(viagem.get_preco()/2);

    else if(passageiro.get_idade() >= 59)
        passagem.set_valor_da_passagem(viagem.get_preco()/3);

    else {
        string estado = viagem.get_estado_destino();

        if (estado == "Rio Grande do Sul" || 
            estado == "Santa Catarina" || 
            estado == "Paraná");

        passagem.set_valor_da_passagem(viagem.get_preco()*0.85);
    }

    return new Passagem(viagem, passageiro, passagem.get_valor_da_passagem());
}






