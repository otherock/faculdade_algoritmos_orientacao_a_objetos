#include <stdio.h>

int main() {
    int var, *p;

    printf("Informe um valor inteiro: ");
    scanf("%d", &var);

    printf("Valor informado: %d\n", var);

    p = &var;
    *p = 10;

    printf("O novo valor da variável é: %d\n", var);

    return 0;
}
