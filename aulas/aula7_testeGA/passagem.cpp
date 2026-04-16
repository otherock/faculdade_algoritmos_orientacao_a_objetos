// Arthur Rocha & Levi Marques
#include "passagem.h"
#include <iostream>


Passagem::Passagem(Viagem viagem, Passageiro passageiro, float valor_da_passagem): viagem(viagem), passageiro(passageiro) {
}

Viagem Passagem::get_viagem() {
    return this->viagem;
}

void Passagem::set_viagem(Viagem viagem) {
    this->viagem = viagem;
}

Passageiro Passagem::get_passageiro() {
    return this->passageiro;
}

void Passagem::set_passageiro(Passageiro passageiro) {
    this->passageiro = passageiro;
}

float Passagem::get_valor_da_passagem() {
    return valor_da_passagem;
}

void Passagem::set_valor_da_passagem(float valor_da_passagem) {
    this->valor_da_passagem = valor_da_passagem;
}

void Passagem::imprime_info() {
    cout << "-- Viagem --" << endl;
    viagem.imprime_info();
    cout << "Valor da passagem: " << get_valor_da_passagem << endl;
    cout << "-- Passageiro --" << endl;
    passageiro.imprime_info();
}