#include <iostream>

using namespace std;

/*
    CICLO WHILE
    Definir los numeros pares
*/


// ESCRIBIR UN PROGRAMA QUE PIDA UN NUMERO ENTERO "N" AL USUARIO
// Y QUE IMPRIMA TODOS LOS NUMEROS PARES HASTA ESE "N"

// Saber cual es ese numero, hacer un contador , hacer un while sobre N y el contador, del contador sacar el resto de ese contador hasta que termine el while

int main(){
    // Inicializo las variables
    int NumeroDelUsuario;
    int Contador = 0;

    //Le pido al usuario el numero
    cout << "Inserta un numero \n";
    cin >> NumeroDelUsuario;

    //Muestro los numeros
    cout << "Los numeros pares anteriores al tuyo son: \n";
    while(Contador <= NumeroDelUsuario){
        int Resto = Contador%2; // Agarro el resto de la division entre el contador y 2, y si es 0 lo muestro en pantalla
        if(Resto == 0){
            cout << Contador << ", ";
        }
        Contador = Contador + 1; //Sumo el contador + 1 para seguir con el programa
    }


    //Le pido al usuario el numero
    cout << "\nInserta un numero \n";
    cin >> NumeroDelUsuario;

    cout << "Los numeros pares anteriores al tuyo son: \n";
    for(int i = 0; i <= NumeroDelUsuario; i++){
        int Resto = i%2; // Agarro el resto de la division entre el contador y 2, y si es 0 lo muestro en pantalla
        if(Resto == 0){
            cout << i << ", ";
        }
    }

    return 0;
}
