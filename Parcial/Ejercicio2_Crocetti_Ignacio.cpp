#include <iostream>

using namespace std;

    //Declarar las variables NumeroInicial, NumeroLimite
    //Pedir al usuario los Numeros
    //Validar los Numeros mediante una funcion que verifique si el numero es positivo si el numero >= 0 si no es positivo pedir de nuevo
    //Mostras con un while el listado de variables


int ValidarNumeroPositivo(int Numero){
    if(Numero>=0){
        return Numero;
    }else{
        cout << "El Numero No es positivo, ingresa uno positivo: \n";
        cin >> Numero;
        Numero = ValidarNumeroPositivo(Numero);
        return Numero;
    }
}

int main(){

    int NumeroInicial, NumeroLimite;

    cout << "Ingresa un numero inicial: ";
    cin >> NumeroInicial;

    cout << "Ingresa un numero final: ";
    cin >> NumeroLimite;

    NumeroInicial = ValidarNumeroPositivo(NumeroInicial);

    NumeroLimite = ValidarNumeroPositivo(NumeroLimite);


    while(NumeroInicial<=NumeroLimite){
            cout << NumeroInicial << "\n";
            NumeroInicial++;
    }
    return 0;
}
