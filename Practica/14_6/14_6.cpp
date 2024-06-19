#include <iostream>

using namespace std;
/*
//Funcion para intercambiar los elementos
void cambio(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


// ¡Como encontrar el pivote?
// seleccionamos 3 variables del arreglo la primera la ultima y una del medio
// las comparamos para saber cual es la que esta en medio
int particion(vector<int>&arr, int primerElemento, int ultimoElemento)
{

    int pivote = arr[ultimoElemento];
    int i = arr[primerElemento - 1];

    for(int j = primerElemento; j < ultimoElemento - 1; j++)
    {
        if(arr[j] < pivote)
        {
            i++;
            cambio(arr[j], arr[i]);
        }
    }
    cambio(arr[i + 1], arr[ultimoElemento]);
    return (i + 1);
}

//Funcion de quicksort
void quicksort(vector<int>&arr, int primerElemento, int ultimoElemento)
{
    if(primerElemento < ultimoElemento)
    {
        int pivotDelSort = particion(arr, primerElemento, ultimoElemento);
        quicksort(arr, primerElemento, pivotDelSort - 1);
        quicksort(arr, pivotDelSort + 1, ultimoElemento);
    }

}
// funcion para imprimir el array
void imprimirArray(vector<int>&arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int>arr = {4, 2, 7, 9, 3, 1, 5, 7};

    cout << "El array desordenado: \n";
    imprimirArray(arr);

    quicksort(arr, 0, arr.size() - 1);

    cout << "El array ordenado: \n";
    imprimirArray(arr);
    return 0;
}
*/
int main(){
string titulos[5];
string autores[5];
cout << "Por favor ingrese la siguiente información de los Libros: \n";
for(int i = 0; i < 5 ; i ++)
{
    cout << "\n******* Libro " << i + 1 << "********:\n";
    cout << "Titulo: ";
    cin >> titulos[i];
    cout << "Autor: ";
    cin >> autores[i];
}
return 0;
}
