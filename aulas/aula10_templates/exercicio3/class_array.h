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
        T* bubbleSort();
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

template <typename T>
T* MyArray<T>::bubbleSort() {
    // Laço externo: percorre todo o array
    for (int i = 0; i < size - 1; i++) {
        
        // Laço interno: empurra o maior elemento para o final
        for (int j = 0; j < size - i - 1; j++) {
            
            // Se o elemento atual for maior que o próximo, eles trocam de lugar
            if (p[j] > p[j + 1]) {
                T temp = p[j];       // Guarda o valor atual numa variável temporária
                p[j] = p[j + 1];     // O atual recebe o valor do próximo
                p[j + 1] = temp;     // O próximo recebe o valor guardado
            }
        }
    }
    
    return p; // Retorna o ponteiro do array que agora está ordenado
}