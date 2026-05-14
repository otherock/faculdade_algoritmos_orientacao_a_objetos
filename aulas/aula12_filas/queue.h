/**
1. Implemente   a   função  contains,   definida   abaixo,   que   informa   se   a   fila   contém determinado elemento: bool contains(T element)
2. Implemente uma função que inverte a ordem dos elementos da fila: void flip()
3. Implemente a função abaixo, que insere um elemento na primeira posição da fila.
int enqueue: WithPriority(T element)
*/

#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

template <typename T>
class Queue {
    public:
        /**
         * Informa se a fila está vazia.
         */
        virtual bool isEmpty() = 0;

        /**
         * Informa se a fila contém um determinado elemento.
         */
        virtual bool contains(T element) = 0;

        /**
         * Inverte a ordem dos elementos da fila.
         */
        virtual void flip() = 0;

        /**
         * Insere um elemento na primeira posição da fila.
         */
        virtual int enqueueWithPriority(T element) = 0;

        /**
         * Informa se a fila está cheia.
         */
        virtual bool isFull() = 0;

        /**
         * Retorna a quantidade de elementos armazenados na fila.
         */
        virtual int numElements() = 0;

        /**
         * Insere um novo elemento na fila.
         */
        virtual int enqueue(T Element) = 0;

        /**
         * Retira um elemento da fila.
         */
        virtual int dequeue(T& result) = 0;

        /**
         * Informa qual é o primeiro elemento da fila.
         */
        virtual int front(T& result) = 0;

        /**
         * Informa qual é o último elemento da fila.
         */
        virtual int back(T& result) = 0;
};

#endif
