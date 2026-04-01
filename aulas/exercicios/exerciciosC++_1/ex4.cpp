/*4. Escreva um programa que leia uma matriz M de tamanho 6x6 e um valor A.
Multiplique os elementos da matriz M pelo valor A armazenando o resultado das
multiplicações em um vetor V de tamanho 36. Imprima na tela os valores
armazenados em V.
*/

#include <iostream>

using namespace std;

int main() {
    int M[6][6];
    int V[36];
    int A;

    cout << "Digite o valor de A: ";
    cin >> A;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
            V[i * 6 + j] = M[i][j] * A;
        }
    }

    cout << "Vetor V: ";
    for (int i = 0; i < 36; i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}