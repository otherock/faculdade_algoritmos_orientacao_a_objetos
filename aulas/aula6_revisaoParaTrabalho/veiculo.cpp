#include "veiculo.h"
#include <iostream>

using namespace std;

Veiculo::Veiculo(const string placa, const string modelo) {
    this->placa = placa;
    this->modelo = modelo;
    this->nivel_combustivel = 0.0;
}

string Veiculo::get_placa() { 
    return placa;
}

string Veiculo::get_modelo() { 
    return modelo; 
}

float Veiculo::get_nivel_combustivel() { 
    return nivel_combustivel; 
}

void Veiculo::set_placa(string placa) { 
    this->placa = placa;
}

void Veiculo::set_modelo(const string modelo) { 
    this->modelo = modelo;
}

void Veiculo::set_nivel_combustivel(float nivel) { 
    this->nivel_combustivel = nivel;
}

float Veiculo::abastece(float litros) {
    nivel_combustivel += litros;
    return nivel_combustivel;
}

float Veiculo::consome_combustivel(float litros) {
    if (litros > nivel_combustivel) return -1;
    nivel_combustivel -= litros;
    return nivel_combustivel;
}

float Veiculo::calcula_autonomia(float consumo_medio) {
    return nivel_combustivel * consumo_medio;
}

void Veiculo::imprime_info() {
    cout << "  Veiculo:\n";
    cout << "    Placa:             " << placa << "\n";
    cout << "    Modelo:            " << modelo << "\n";
    cout << "    Nivel combustivel: " << nivel_combustivel << " L\n";
}
