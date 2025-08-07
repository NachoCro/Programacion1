#include <iostream>

using namespace std;

// Para saber el largo de un vector podemos dividir el total de bites del vector por la cantidas de bites de su primer elemento

int largodearray(int arreglo[])
{
    return sizeof(arreglo) /* Total de bites del arreglo */ / sizeof(arreglo[0]) /* Total de bites de su primer elemento*/
}

int main()
{

    int numeros[] = {1, 2, 3, 4, 5};

    cout << "Longitud del arreglo: " 0 << largodearray(numeros[]) << endl;

    return 0;
}