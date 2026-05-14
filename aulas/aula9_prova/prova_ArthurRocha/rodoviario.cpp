// Arthur Rocha Delgado

#include "urbano.h"
#include <iostream>

using namespace std;

Urbano::Urbano(const string nome, const string cnh, const float salario_liquido, const float salario_bruto, const float horas_trabalhadas, const float numero_registro, const string rota): nome(nome), cnh(cnh), salario_liquido(salario_liquido), salario_bruto(salario_bruto), numero_registro(numero_registro), rota(rota) {

}

string Urbano::get_nome() { 
    return nome;
}

void Urbano::set_nome(string nome) { 
    this->nome = nome; 
}

string Urbano::get_cnh() { 
    return cnh;
}

void Urbano::set_cnh(string cnh) { 
    this->cnh = cnh; 
}

float Urbano::get_salario_liquido(){
    return salario_liquido;
}

void Urbano::set_salario_liquido(float salario_liquido){
    this->salario_liquido = salario_liquido;
}

float Urbano::get_salario_bruto(){
    return salario_bruto;
}

void Urbano::set_salario_bruto(float salario_bruto){
    this->salario_bruto = salario_bruto;
}

string Urbano:: get_rota(){
    return rota;
}

void Urbano::set_rota(string rota){
    this->rota = rota;
}

string getInfoEspecifica();

void Urbano::imprime_info() {
    cout << " --- Motorista Rodoviário ---:\n";
    cout << " Nome: " << nome << "\n";
    cout << " CNH: " << cnh << "\n";
    cout << " Salario Líquido: " << salario_liquido << "\n";
    cout << " Salario Bruto: " << salario_bruto << "\n";
    cout << " Horas Trabalhadas: " << horas_trabalhadas << "\n";
    cout << " Nome da Rota (trecho): " << rota << "\n";
}