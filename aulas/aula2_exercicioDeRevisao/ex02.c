#include <stdio.h>

int main() {
    int a = 3, b = 2, *p = NULL, *q = NULL;

    p = &a;
    q = p;
    *q = *q + 1;
    q = &b;
    b = b + 1;

    printf("O valor apontado por q é: %d\n", *q);
    printf("O valor apontado por p é: %d\n", *p);

    return 0;
}
