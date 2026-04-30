#include <iostream>
#include "class_array.h"

#define SIZE 4

using namespace std;

int main() {
    int array[SIZE] = {4, 3, 1, 2};
    MyArray<int> a(array, SIZE);
 
    a.bubbleSort();
    a.print();

    return 0;
}


/*
2. Analise os códigos do Exemplo 2 fornecido, e responda as seguintes perguntas:
a) O que faz o código do arquivo ‘class_array.h’? 


b) Qual será a saída a partir da execução do código do arquivo ‘principal.cpp’? Ele ordena o array com Bubble Sort e imprime: 1, 2, 3, 4

*/