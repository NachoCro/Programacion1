#include <iostream>

using namespace std;

// Declarar el ContadorInverso como int
// Pedir al usuario un numero y ponerlo en ContadorInverso
// Poner el contador en un while hasta que sea 0
// Restarle 1 cada ciclo del while
// Mostrar el proceso

int main(){

    int ContadorInverso;
    cout << "Ingrese un numero: ";
    cin >> ContadorInverso;

    while(ContadorInverso >= 0){
        cout << "El numero actual del contador es: " << ContadorInverso << "\n";

        ContadorInverso = ContadorInverso - 1;
    }
    return 0;
}
