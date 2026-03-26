#include "classeCalculadora.h"

float soma (float x, float y){
    return x+y;
}

float subtracao (float x, float y){
    return x-y;
}

float multiplicacao (float x, float y){
    return x*y;
}

float divisao (float x, float y){
    return x/y;
}

int elevarAoQuadrado (int x){
    return pow(x, 2);
}

int elevarAoCubo (int x){
    return pow(x, 3);
}

void Calculadora::imprime_info() {
    cout << "--- Calculadora ---" << endl;
    cout << "Cor: " << cor << endl;
    cout << "Memoria: " << a << endl;
}