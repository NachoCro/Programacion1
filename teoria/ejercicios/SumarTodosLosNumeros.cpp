#include <iostream>

using namespace std;

// Declarar la variable NumeroLimite
// Pedirle al usuario un numero limite
// Declarar un contador y sumar todos su numeros hasta llegar
// a ese limite con un while
// Mostrar el numero

int main(){

    int NumeroLimite;
    int Total = 0;
    cout << "Ingrese un numero: ";
    cin >> NumeroLimite;
    for(int i = 0; i <= NumeroLimite;i++){
        cout << i << "\n";
        Total = i + Total;
    }
    cout << "La suma de todos los numeros anteriores es: " << Total;
    return 0;
}
