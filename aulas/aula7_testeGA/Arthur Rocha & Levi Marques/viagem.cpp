// Arthur Rocha & Levi Marques
#include "viagem.h"
#include <iostream>

Viagem::Viagem(string cidade_destino, string estado_destino, float preco, int lugares_vendidos, int max_lugares) {
    this->cidade_destino = cidade_destino;
    this->estado_destino = estado_destino;
    this->preco = preco;
    this->lugares_vendidos = 0;
    this->max_lugares = max_lugares;
}

string Viagem::get_cidade_destino() {
    return cidade_destino;
}

void Viagem::set_cidade_destino(string cidade_destino) {
    this->cidade_destino = cidade_destino;
}

string Viagem::get_estado_destino() {
    return estado_destino;
}

void Viagem::set_estado_destino(string estado_destino) {
    this->estado_destino = estado_destino;
}
        
float Viagem::get_preco() {
    return preco;
}

void Viagem::set_preco(float preco) {
    this->preco = preco;
}

int Viagem::get_lugares_vendidos() {
    return lugares_vendidos;
}

void Viagem::set_lugares_vendidos(int lugares_vendidos) {
    this->lugares_vendidos = lugares_vendidos;
}

int Viagem::get_max_lugares() {
    return max_lugares;
}

void Viagem::set_max_lugares(int max_lugares) {
    this->max_lugares = max_lugares;
}

void Viagem::imprime_info() {
    cout << "Cidade de destino: " << get_cidade_destino << endl;
    cout << "Estado de destino: " << get_estado_destino << endl;
    cout << "Preço: " << get_preco << endl;
    cout << "Lugares vendidos: " << get_lugares_vendidos << endl;
    cout << "Máximo de lugares: " << get_max_lugares << endl;
}