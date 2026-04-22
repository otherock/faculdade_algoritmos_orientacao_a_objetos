#ifndef FROTA_H
#define FROTA_H

#include <string>
#include "motorista.h"

using namespace std;

class Frota {
    private:
        string nome;
        Motorista motorista1;
        Motorista motorista2;
        Motorista motorista3;

public:
    Frota(string nome,
          Motorista motorista1,
          Motorista motorista2,
          Motorista motorista3);

    string get_nome();
    Motorista get_motorista1();
    Motorista get_motorista2();
    Motorista get_motorista3();

    void set_nome(string nome);
    void set_motorista1(Motorista motorista);
    void set_motorista2(Motorista motorista);
    void set_motorista3(Motorista motorista);

    void imprime_info();
};

#endif
