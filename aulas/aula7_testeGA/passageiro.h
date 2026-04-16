// Arthur Rocha & Levi Marques
#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H

#include <string>

using namespace std;

class Passageiro {
    private:
        string nome;
        int idade;

    public:
        Passageiro(string nome, int idade);

        string get_nome();
        int get_idade();

        void set_nome(string nome);
        void set_idade(int idade);

        void imprime_info();
};

#endif