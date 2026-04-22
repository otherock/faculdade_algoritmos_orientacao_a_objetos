#include "motorista.h"
#include <iostream>

using namespace std;

Motorista::Motorista(const string nome, const string cnh, const Veiculo veiculo)
    : nome(nome), cnh(cnh), veiculo(veiculo) {
}

string Motorista::get_nome() { 
    return nome;
}

string Motorista::get_cnh() { 
    return cnh;
}

Veiculo Motorista::get_veiculo() { 
    return veiculo;
}

void Motorista::set_nome(string nome) { 
    this->nome = nome; 
}

void Motorista::set_cnh(string cnh) { 
    this->cnh = cnh; 
}

void Motorista::set_veiculo(Veiculo veiculo) { 
    this->veiculo = veiculo; 
}

float Motorista::abastece(float litros) {
    return veiculo.abastece(litros);
}

string Motorista::realiza_viagem(float distancia, float consumo_medio) {
    float combustivel_necessario = distancia / consumo_medio;
    float resultado = veiculo.consome_combustivel(combustivel_necessario);
    if (resultado == -1) {
        return "Viagem não realizada: combustível insuficiente.";
    }
    return "Viagem de " + to_string((int)distancia) + " km realizada com sucesso!";
}

void Motorista::imprime_info() {
    cout << "  Motorista:\n";
    cout << "    Nome: " << nome << "\n";
    cout << "    CNH:  " << cnh << "\n";
    veiculo.imprime_info();
}
