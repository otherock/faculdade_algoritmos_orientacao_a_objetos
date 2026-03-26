#include <iostream>
#include <cmath>

using namespace std;

class Calculadora {
    private:
        int a = 0;
        int b = 0;
        float x = 0;
        float y = 0;
        string cor;

    public:
        Calculadora(string cor_calculadora) {
            a = 0; 
            cor = cor_calculadora;
        }
        
        Calculadora() {
            a = 0;
            cor = "Padrão";
        }
        
        float getMemoria() {
            return a; 
        }
        
        void setMemoria(float nova_memoria) {
            a = nova_memoria; 
        }
        
        string getCor() {
            return cor;
        }
        
        void setCor(string nova_cor) {
            cor = nova_cor;
        }
        
        float soma(float x, float y);
        float subtrai(float x, float y);
        float multiplica(float x, float y);
        float divide(float x, float y);
        int eleva_ao_quadrado(int x);
        int eleva_ao_cubo(int x);
        void imprime_info();
};
