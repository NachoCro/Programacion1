#include <iostream>

using namespace std;

// Declarar las variables GradosCelsius y GradosFahrenhein como float
// Pedir los GradosCelsius al usuario
// Calcular los GradosFahrenhein (GradosCelsius*(9/5)+32)
// Mostrar el resultado

int main(){

    float GradosCelsius;
    cout << "Ingresa los grados celsius: ";
    cin >> GradosCelsius;
    float GradosFahrenhein = GradosCelsius*9/5+32;
    cout << "Los Grados celsius a Fahrenhein: " << GradosFahrenhein;

    return 0;
}
