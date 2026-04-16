// Arthur Rocha & Levi Marques
#include <iostream>
#include "viagem.h"
#include "passageiro.h"
#include "passagem.h"
#include "aeroporto.h"

int main() {
    Viagem v = Viagem("Florianópolis", "Santa Catarina", 500, 7, 5);

    Passageiro passageiro1 = Passageiro("Fausto Everaldo", 49);
    Passageiro passageiro2 = Passageiro("Renato Aragão", 67);
    Passageiro passageiro3 = Passageiro("Jairo Lambari", 6);
    Passageiro passageiro4 = Passageiro("Tiradentes", 12);
    Passageiro passageiro6 = Passageiro("Zumbi dos Palmares", 4);
    Passageiro passageiro7 = Passageiro("Tim Maia", 13);

    Passagem p1 = Passagem(v, passageiro1, v.get_preco());
    Passagem p2 = Passagem(v, passageiro2, v.get_preco());
    Passagem p3 = Passagem(v, passageiro2, v.get_preco());
    Passagem p4 = Passagem(v, passageiro2, v.get_preco());
    Passagem p5 = Passagem(v, passageiro2, v.get_preco());
    Passagem p6 = Passagem(v, passageiro2, v.get_preco());
    Passagem p7 = Passagem(v, passageiro2, v.get_preco());
    
    Aeroporto a = Aeroporto("Aeroporto Boa Viagem", p1);

    return 0;
}


