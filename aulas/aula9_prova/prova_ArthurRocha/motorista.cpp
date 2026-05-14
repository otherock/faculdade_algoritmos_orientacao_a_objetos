// Arthur Rocha Delgado

#include "motorista.h"
#include <iostream>

using namespace std;

Motorista::Motorista(const string nome, const string cnh, const float salario_liquido, const float salario_bruto, const float horas_trabalhadas): nome(nome), cnh(cnh), salario_liquido(salario_liquido), salario_bruto(salario_bruto) {}

string Motorista::get_nome() { 
    return nome;
}

void Motorista::set_nome(string nome) { 
    this->nome = nome; 
}

string Motorista::get_cnh() { 
    return cnh;
}

void Motorista::set_cnh(string cnh) { 
    this->cnh = cnh; 
}

float Motorista::get_salario_liquido(){
    return salario_liquido;
}

void Motorista::set_salario_liquido(float salario_liquido){
    this->salario_liquido = salario_liquido;
}

float Motorista::get_salario_bruto(){
    return salario_bruto;
}

void Motorista::set_salario_bruto(float salario_bruto){
    this->salario_bruto = salario_bruto;
}

bool Motorista::excedeJornada(float horas_trabalhadas) {
    if(horas_trabalhadas < 44){
        return true;
    } else 
        return false;  
}

bool Motorista::salarioIrregular(float salario_liquido, float salario_bruto){
    if( salario_liquido < (salario_bruto * 0.7))
        return "Desconto superior a 30% não é permitido pelo INSS e IR";
}

string Motorista::getInfoEspecifica(){
    return tipo_motorista;
}

void Motorista::imprime_info() {
    cout << " --- Motorista ---:\n";
    cout << " Nome: " << nome << "\n";
    cout << " CNH: " << cnh << "\n";
    cout << " Salario Líquido: " << salario_liquido << "\n";
    cout << " Salario Bruto: " << salario_bruto << "\n";
    cout << " Horas Trabalhadas " << horas_trabalhadas << "\n";
}