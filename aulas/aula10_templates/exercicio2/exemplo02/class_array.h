#include <iostream>

using namespace std;

template <typename T>
class MyArray {
    private:
        T* p;
        int size;
    public:
        MyArray(T array[], int s);
        void print();
};

template <typename T>
MyArray<T>::MyArray(T array[], int s) {
    p = new T[s];
    size = s;
    for(int i = 0; i < size; i++) {
        p[i] = array[i];
    }
}

template <typename T>
void MyArray<T>::print() {
    for(int i = 0; i < size; i++) {
        cout << " " << *(p + i);
    }
    cout << endl;
}

/*
2. Analise os códigos do Exemplo 2 fornecido, e responda as seguintes perguntas:
a) O que faz o código do arquivo ‘class_array.h’? 
É criado uma classe template chamada MyArray, o ponteiro p é alocado pra armazenar um array do tipo T, e a função print() é criada para imprimir os elementos do array.
Também é criado um construtor MyArray que recebe um array do tipo T e um inteiro s, aloca o ponteiro p pra armazenar um novo array do tipo T. O construtor copia os elementos do array recebido para o novo array alocado. O for faz com que cada elemento do array 

b) Qual será a saída a partir da execução do código do arquivo ‘principal.cpp’? Ele imprime os elementos inteiros do array, sairá: 4, 3, 2, 1

*/