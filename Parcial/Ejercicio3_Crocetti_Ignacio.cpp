#include <iostream>

using namespace std;

int Fibo(int Numero)
{
    if(Numero == 0)
    {
        return 0;
    }
    else if(Numero == 1)
    {
        return 1;
    }else{
        return Fibo(Numero-1)+Fibo(Numero-2);
    }
}

int main()
{
    int NumeroDelCliente;
    cout << "Ingresar un numero: ";
    cin >> NumeroDelCliente;

    cout << "El numero Fibonacci de tu numero es " << Fibo(NumeroDelCliente);
    return 0;
}
