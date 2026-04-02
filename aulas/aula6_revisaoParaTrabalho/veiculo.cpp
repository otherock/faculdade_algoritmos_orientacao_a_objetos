#include <iostream>
#include "veiculo.h"

Veiculo::Veiculo (string placa, string modelo){
    this-> placa = placa;
    this-> modelo = modelo;
    this-> combustivel = 0;
}

string Veiculo::get_placa(){
    return placa;
}

void Veiculo::set_placa(string placa){
    this-> placa = placa;
}

string Veiculo:: get_modelo(){
    return modelo;
}

void Veiculo::set_modelo(string modelo){
    this-> modelo = modelo;
}

float Veiculo::abastece(float litros){
    float novo_combustivel = combustivel + litros;
    set_combustivel(novo_combustivel);
    return combustivel;
}

float Veiculo::consome_combustivel(float consumo){
    if(combustivel < consumo)
        return -1;
    else 
        combustivel - consumo;
}

float Veiculo::calcula_autonomia(float gastoMedio){
    if (combustivel = 0)
        return -1;
    else
        combustivel / gastoMedio;
}

void Veiculo::imprime_info(){
    cout << "Placa: " << get_placa() << endl;
    cout << "Modelo: " << get_modelo() << endl;
    cout << "Qnt Litros: " << get_combustivel() << endl;
}