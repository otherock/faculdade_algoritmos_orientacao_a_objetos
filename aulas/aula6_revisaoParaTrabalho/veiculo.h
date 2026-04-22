#ifndef VEICULO_H
#define VEICULO_H

#include <string>

using namespace std;

class Veiculo {
    private:
        string placa;
        string modelo;
        float nivel_combustivel;

    public:
        Veiculo(const string placa, const string modelo);

        string get_placa();
        string get_modelo();
        float get_nivel_combustivel();

        void set_placa(string placa);
        void set_modelo(string modelo);
        void set_nivel_combustivel(float nivel);

        float abastece(float litros);
        float consome_combustivel(float litros);
        float calcula_autonomia(float consumo_medio);

        void imprime_info();
};

#endif
