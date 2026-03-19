/*
Crie uma classe chamada Retângulo. Um retângulo possui uma base e uma altura.
Crie as funções necessárias para que o usuário possa obter informações sobre a
base, a altura e a área do retângulo.
*/

#include <iostream>

using namespace std;

class Retangulo {
//atributo = variável:
    private:
        double base;
        double altura;

    public:
        //construtor
        Retangulo(double b, double h){
            base = b;
            altura = h;
        };

        double getBase(){
            return base;
        };

        double getAltura(){
            return altura;
        };

        double getArea(){
            return base * altura;
        }
};

int main() {
    Retangulo meuRetangulo(12.0, 4.0);

    cout << "Base: " << meuRetangulo.getBase() << endl;
    cout << "Altura: " << meuRetangulo.getAltura() << endl;
    cout << "Área: " << meuRetangulo.getArea() << endl;

    return 0;
}