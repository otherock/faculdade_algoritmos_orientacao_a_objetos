#include <iostream>
#ifndef MOTORISTA_H
#define MOTORISTA_H

using namespace std;

class Motorista {
    private:
        string nome;
        string cnh;
        string veiculo;
    public:
        Motorista(string nome, string cnh);
        string get_nome();
        void set_nome(string nome);
        string get_cnh();
        void set_cnh(string cnh);
        string get_veiculo();
        void set_veiculo(string veiculo);
};

#endif
    