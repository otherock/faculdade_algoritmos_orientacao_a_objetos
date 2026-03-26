#include "classeFuncionarioCaixa.h"

FuncionarioCaixa::FuncionarioCaixa(string n, string e, Calculadora c) {
    nome = n;
    endereco = e;
    calculadora = c; 
}

FuncionarioCaixa::FuncionarioCaixa() {
    nome = "Sem nome";
    endereco = "Sem endereco";
}