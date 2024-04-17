#include <iostream>

using namespace std;

int main(){

    // Inicio las variables
    int NumeroDelUsuario;

    //Pido el numero al usuario
    cout << "Ingrese un numero: \n";
    cin >> NumeroDelUsuario;

    for(int i = 1; i <= 10; i++){
        int resultado = i*NumeroDelUsuario;
        cout << i << " X " << NumeroDelUsuario << " = " << resultado << "\n";
    }
    return 0;
}
