/*  
5. Escreva um programa que leia uma matriz de tamanho 20x20 e um valor inteiro
qualquer. O programa deverá fazer uma busca por esse valor na matriz e, ao final,
escrever sua localização (linha e coluna) na matriz ou a mensagem de “Valor não
encontrado”.
*/

#include <iostream>

using namespace std;

int main() {
    int matriz[20][20];
    int busca;
    bool encontrado = false;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Valor para busca: ";
    cin >> busca;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (matriz[i][j] == busca) {
                cout << "Localizacao: Linha " << i << ", Coluna " << j << endl;
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "Valor nao encontrado" << endl;
    }

    return 0;
}