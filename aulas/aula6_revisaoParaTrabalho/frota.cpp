#include "frota.h"
#include <iostream>

using namespace std;

Frota::Frota(string nome,
             Motorista motorista1,
             Motorista motorista2,
             Motorista motorista3)
    : nome(nome), motorista1(motorista1), motorista2(motorista2), motorista3(motorista3) {
}

string Frota::get_nome() { 
    return nome; 
}

Motorista Frota::get_motorista1() { 
    return motorista1;
}

Motorista Frota::get_motorista2() { 
    return motorista2; 
}

Motorista Frota::get_motorista3() { 
    return motorista3; 
}

void Frota::set_nome(string nome) { 
    this->nome = nome; 
}

void Frota::set_motorista1(Motorista motorista) { 
    this->motorista1 = motorista; 
}

void Frota::set_motorista2(Motorista motorista) { 
    this->motorista2 = motorista; 
}

void Frota::set_motorista3(Motorista motorista) { 
    this->motorista3 = motorista; 
}

void Frota::imprime_info() {
    cout << "Frota: " << nome << "\n";
    cout << "----------------------------------------\n";
    motorista1.imprime_info();
    cout << "----------------------------------------\n";
    motorista2.imprime_info();
    cout << "----------------------------------------\n";
    motorista3.imprime_info();
    cout << "----------------------------------------\n";
}
