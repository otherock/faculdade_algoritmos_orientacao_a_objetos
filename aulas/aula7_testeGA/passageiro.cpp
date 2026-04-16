// Arthur Rocha & Levi Marques
#include "passageiro.h"
#include <iostream>

Passageiro::Passageiro(string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
}

string Passageiro::get_nome() {
    return nome;
}

void Passageiro::set_nome(string nome) {
    this->nome = nome;
}

int Passageiro::get_idade() {
    return idade;
}

void Passageiro::set_idade(int idade) {
    this->idade = idade;
}

void Passageiro::imprime_info() {
    cout << "Nome: " << get_nome << endl;
    cout << "Idade: " << get_idade << endl;
}