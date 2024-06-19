#include <iostream>
using namespace std;

int ValidarNumero(int Numero){
    if(Numero>=0){
        return Numero;
    }else if(Numero<0){
        cout << "El Numero No es positivo, ingresa uno positivo: \n";
        cin >> Numero;
        Numero = ValidarNumero(Numero);
        return Numero;
    }else{
        cout << "El Numero no es entero, ingresa uno positivo: \n";
        cin >> Numero;
        return Numero;
    }
}

int main(){
    int NumeroMultiplicado, NumeroMaximo, i=0;

    cout << "Ingrese un numero para multiplicar: ";
    cin >> NumeroMultiplicado;
    NumeroMultiplicado = ValidarNumero(NumeroMultiplicado);
    cout << "ingrese un numero limite de multiplicaciones: ";
    cin >> NumeroMaximo;
    NumeroMaximo = ValidarNumero(NumeroMaximo);

    while(NumeroMaximo>=i){
        cout << NumeroMultiplicado << " X " << i << " = " << NumeroMultiplicado*i << "\n";
        i++;
    }
    return 0;
}
