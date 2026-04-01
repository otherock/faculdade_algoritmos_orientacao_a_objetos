/*3. Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O
resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.
*/

#include <iostream>

using namespace std;

void somarLinhas(int matriz[10][10], int L1, int L2, int colunas) {
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] = matriz[L1][j] + matriz[L2][j];
    }
}

void multiplicarLinhas(int matriz[10][10], int L1, int L2, int colunas) {
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] = matriz[L1][j] * matriz[L2][j];
    }
}

int main() {
    int M[10][10] = {{1, 2}, {3, 4}};
    somarLinhas(M, 0, 1, 2);
    cout << "Resultado soma na linha 1: " << M[1][0] << " " << M[1][1] << endl;
    return 0;
}