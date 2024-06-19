#include <iostream>

using namespace std;

//La funcion tiene que pedir una variable entera con un nombre Numero
//En la funcion este numero hace mod por 2 y hacer un if si el resto da 0 es par y si no es impar
//Declaramos las variables como entero NumeroPedido
//en el main pedir al cliente que numero quiere que ingrese e ingresamos la variable en la funcion

void NumeroParOImpar(int Numero)
{
    int ParOimpar = Numero%2;
    if(ParOimpar == 0)
    {
        cout << "El numero es par \n";
    }
    else
    {
        cout << "El numero es impar \n";
    }
}

void NumerosNaturales(int Numero)
{

    cout << "Todos los numeros naturales antes de este numero son: \n";
    for(int i = 0; i <= Numero; i++)
    {
        cout << i << "\n";
    }
}

//Verifico si el numero es mayor que 0 es natural

void ValidarDato(int Numero)
{
    if( Numero > 0)
    {

        cout << "Es un numero natural \n";

        NumeroParOImpar(Numero);
        NumerosNaturales(Numero);
    }
    else if(Numero < 0)
    {
        cout << "Es un numero negativo";
    }else{
        cout << "Es un numero decimal";
    }
}

int main()
{

    int NumeroPedido;

    cout << "ingrese un numero: ";
    cin >> NumeroPedido;

    ValidarDato(NumeroPedido);
    return 0;
}
