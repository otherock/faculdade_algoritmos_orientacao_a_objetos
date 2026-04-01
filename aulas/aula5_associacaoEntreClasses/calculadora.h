#ifndef CALCULADORA_H
#define CALCULADORA_H

using namespace std;

class Calculadora {
    private:
        float memoria;
        string cor;
    public:
        Calculadora(string cor);
        float get_memoria();
        void set_memoria(float memoria);
        string get_cor();
        void set_cor(string cor);
        float soma(float valor1, float valor2);
        float subtrai(float valor1, float valor2);
        float multiplica(float valor1, float valor2);
        float divide(float valor1, float valor2);
        int eleva_ao_quadrado(int valor);
        int eleva_ao_cubo(int valor); //método para elevar um número ao cubo
        void imprime_info(); //método para imprimir as informações da calculadora
};

#endif
