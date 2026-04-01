/*1. Escreva um programa que leia dados para uma matriz quadrada de inteiros. Ao final
da leitura o programa, deverá ser impresso o número da linha que contém o menor
dentre todos os valores lidos.*/

#include <iostream>

using namespace std; 

int main() {
    int n;
    
    cout << "Digite o tamanho da matriz quadrada (n x n): ";
    cin >> n; 

    int matriz[n][n];
    int menorValor;
    int linhaDoMenor = 0;

    cout << "Digite os elementos da matriz:" << endl; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j]; 

            if (i == 0 && j == 0) {
                menorValor = matriz[i][j];
                linhaDoMenor = i;
            } 
            else if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
                linhaDoMenor = i;
            }
        }
    }

    cout << "\nO menor valor encontrado foi: " << menorValor << endl;
    cout << "A linha que contem o menor valor e a: " << linhaDoMenor << endl;

    return 0; 
}