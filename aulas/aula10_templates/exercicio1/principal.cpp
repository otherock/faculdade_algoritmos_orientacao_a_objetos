// Com base no exemplo de código a seguir, implemente um programa com uma função template que multiplica dois valores e retorna o resultado da multiplicação. A função main() deverá chamar essa função duas vezes: uma passando valores de tipo  int  e   outra   passando   valores   de   tipo  double.   Mostre   o   resultado   das operações na tela

#include <iostream>
using namespace std;
template <typename T> 
T max_function(T a, T b) {
     return (a * b); // Operador ternário
}
int main() {
     // Chama a função para um inteiro
     cout << max_function<int>(5, 3) << endl;
     // Chama a função para um double
     cout << max_function<double>(7.5, 9.3) << endl;
     return 0;
}