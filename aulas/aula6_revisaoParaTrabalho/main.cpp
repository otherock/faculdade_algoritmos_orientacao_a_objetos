#include <iostream>
#include "veiculo.h"
#include "motorista.h"
#include "frota.h"

using namespace std;

int main() {

    // Criando os veículos
    Veiculo v1("ABC-1234", "Fiat Strada");
    Veiculo v2("DEF-5678", "Volkswagen Gol");
    Veiculo v3("GHI-9012", "Chevrolet S10");

    // Criando os motoristas
    Motorista m1("Carlos Silva",   "12345678900", v1);
    Motorista m2("Ana Souza",      "98765432100", v2);
    Motorista m3("Pedro Oliveira", "11122233344", v3);

    // Motorista 1
    cout << "=== Motorista 1 ===\n";
    cout << "Abastecendo com 40 litros. Nivel atual: "
              << m1.abastece(40) << " L\n";
    cout << m1.realiza_viagem(200, 10) << "\n\n";

    // Motorista 2
    cout << "=== Motorista 2 ===\n";
    cout << "Abastecendo com 20 litros. Nivel atual: "
              << m2.abastece(20) << " L\n";
    cout << m2.realiza_viagem(300, 10) << "\n\n";

    // Motorista 3 
    cout << "=== Motorista 3 ===\n";
    cout << "Abastecendo com 50 litros. Nivel atual: "
              << m3.abastece(50) << " L\n";
    Veiculo v3_temp = m3.get_veiculo();
    cout << "Autonomia estimada (12 km/l): "
              << v3_temp.calcula_autonomia(12) << " km\n\n";

    // Criando a frota e imprimindo as informações
    Frota frota("Frota Transportes Brasil", m1, m2, m3);
    cout << "=== Informacoes da Frota ===\n";
    frota.imprime_info();

    return 0;
}
