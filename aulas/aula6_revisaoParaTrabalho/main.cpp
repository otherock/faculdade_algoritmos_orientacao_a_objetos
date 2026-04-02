#include <iostream>
#include "veiculo.h"

int main() {
    Veiculo v1 = Veiculo("JAQ0718", "Voyage 1.0 Turbo");
    v1.abastece(50);
    v1.imprime_info();


    return 0;
}
