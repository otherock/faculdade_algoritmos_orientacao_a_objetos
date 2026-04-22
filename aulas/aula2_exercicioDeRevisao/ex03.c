#include <stdio.h>

#define SIZE 10

int main() {
    int i, 
        v[SIZE],
        *p = v;

    for(i = 0; i < SIZE; i++) {
        printf("Informe o %do valor: ", i + 1);
        scanf("%d", p);
        *p *= 10;
        p++;
    }

    p = v;
    for(i = 0; i < SIZE; i++) {
        printf("%d ", *p++);
    }
    //OU:
    /*for(i = 0; i < SIZE; i++) {
        printf("%d ", v[i]);
    }*/
    printf("\n");
    
    return 0;
}
