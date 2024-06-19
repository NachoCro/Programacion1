#include <iostream>
#include <cstdlib>
using namespace std;

/* Defina un vector de números enteros, solicite insertar los números por
teclado dentro del vector y para finalizar muestre cual es el mayor de los
números

    [] crear un array de numeros
    [] pedir al usuario una cantidad de numeros
*/
int main(){
    int NumeroGrande = 0;
    int i = 0;
    int CantN;
    cout << "Cuantos numeros queres ingresar? ";
    cin >> CantN;
    int Numeros[CantN];
    while(CantN>i){
        cout << "ingrese un numero ";
        cin >> Numeros[i];
        i++;
        if(Numeros[i]>NumeroGrande){
            NumeroGrande = Numeros[i];
        }
    }
    cout << "El numero mas grande es " << NumeroGrande;
    return 0;
}
