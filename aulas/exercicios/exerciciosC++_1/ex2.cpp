/* 2. Escreva um programa que apresenta a seguinte saída, perguntando ao usuário o
número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
    1 2 3 4 5 6 7 8 9
      2 3 4 5 6 7 8
        3 4 5 6 7
          4 5 6
            5
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Digite um numero impar: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Erro: O numero deve ser impar." << endl;
        return 1;
    }

    int espacos = 0;
    for (int i = 1, j = n; i <= j; i++, j--) {
        cout << setw(espacos) << ""; 
        for (int k = i; k <= j; k++) {
            cout << k;
        }
        cout << endl;
        espacos++;
    }

    return 0;
}