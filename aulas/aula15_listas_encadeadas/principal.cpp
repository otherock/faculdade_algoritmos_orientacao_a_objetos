/**
 * Código exemplo para uso da estrutura:
 * SinglyLinkedList
 */

#include <iostream>
#include "singlyLinkedList.h"
#include "doublyLinkedList.h"

using namespace std;

int n = 0;

int convertToInt(SinglyLinkedList<int>List){
    
    return n;
}

int main() {
    SinglyLinkedList<int> sll;  // Cria uma lista encadeada de tipo int
    DoublyLinkedList<int> dll;  // Cria uma lista duplamente encadeada de tipo int
        
    /**
     * Insere os elementos 4, 1, 0 e 1 em sequência na lista.
     */
    sll.insert(4, 0);
    sll.insert(1, 1);
    sll.insert(0, 2);
    sll.insert(1, 3);

    /**
     * Insere o elemento 9 no início da lista.
     */
    sll.insertFirst(9);
    
    /**
     * Insere o elemento 10 no início da lista.
     */
    sll.insertLast(10);

    /**
     * Imprime os elementos da lista.
     */
    cout << "==== ELEMENTOS NA LISTA ====" << endl;
    int result;
    int num_elements = sll.numElements();
    for(int i = 0; i < num_elements; i++) {
        if(sll.get(i, result) == 0)
            cout << result << " "; 
    }
    cout << "\n";

    return 0;
}
