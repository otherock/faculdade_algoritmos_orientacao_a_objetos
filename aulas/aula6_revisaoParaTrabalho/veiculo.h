#include <iostream>
#ifndef VEICULO_H
#define VEICULO_H

using namespace std;

class Veiculo {
    private:
        string placa;
        string modelo;
        float combustivel = 0;
    public:
        Veiculo(string placa, string modelo);
        string get_placa();
        void set_placa(string placa);

        string get_modelo();
        void set_modelo(string modelo);

        float get_combustivel();
        void set_combustivel(float combustivel);

        float consome_combustivel(float consumo);
        float calcula_autonomia(float gastoMedio);
        float abastece(float litros);

        void imprime_info();
};

#endif
