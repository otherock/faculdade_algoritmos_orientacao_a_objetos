// Arthur Rocha & Levi Marques
#ifndef VIAGEM_H
#define VIAGEM_H

#include <string>

using namespace std;

class Viagem {
    private:
        string cidade_destino;
        string estado_destino;
        float preco;
        int lugares_vendidos;
        int max_lugares;

    public:
        Viagem(string cidade_destino, string estado_destino, float preco, int lugares_vendidos, int max_lugares);

        string get_cidade_destino();
        string get_estado_destino();
        float get_preco();
        int get_lugares_vendidos();
        int get_max_lugares();

        void set_cidade_destino(string cidade_destino);
        void set_estado_destino(string estado_destino);
        void set_preco(float preco);
        void set_lugares_vendidos(int lugares_vendidos);
        void set_max_lugares(int max_lugares);

        void imprime_info();
};

#endif
