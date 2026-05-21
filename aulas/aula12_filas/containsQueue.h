#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "queue.h"

using namespace std;

template <typename T>
class ContainsQueue: public Queue<T> {
    protected:
        // Índice para o primeiro elemento
        int first;

        // Índice para o segundo elemento
        int last;

        // Tamanho da fila
        int size;

        // Array que armazena as referências para os elementos
        T* elements;
    public:
        /**
         * Constrói uma fila com tamanho máximo
         */
        ContainsQueue(int max_size);

        bool isEmpty();
        bool isFull();
        int numElements();
        int enqueue(T element);
        int dequeue(T& result);
        int front(T& result);
        int back(T& result);
};

template <typename T>
ContainsQueue<T>::ContainsQueue(int max_size) {
    elements = new T[max_size];
    size = max_size;
    first = -1;
    last = -1;
}

template <typename T>
bool ContainsQueue<T>::isEmpty() {
    return first == -1;
}

template <typename T>
bool ContainsQueue<T>::isFull() {
    return last == ((last + 1) % size);
}

template <typename T>
int ContainsQueue<T>::numElements() {
    if(isEmpty())
        return 0;
    else {
        int n = size;
        return ((n + last - first) % n) + 1;
    }
}

/** 
* Retorna 0 se o elemento foi inserido da fila.
* Retorna 2 se a fila estiver cheia.
*/
template <typename T>
int ContainsQueue<T>::enqueue(T element) {
    if(isFull())
        return 2;
    else {
        if(last == -1) {
            first = 0;
            last = 0;
        }
        else
            last = (last + 1) % size;

        elements[last] = element;

        return 0;
    }
}