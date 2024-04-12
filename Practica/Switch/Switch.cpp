#include <iostream>

using namespace std;

int main(){

    int MesesDelAnio;

    cout << "Ingresa el numero del mes del 1 al \n";
    cin >> MesesDelAnio;


    switch (MesesDelAnio){

case 1:
    cout << "enero";
    break;

case 2:
    cout << "Febrero";
    break;

case 3:
    cout << "Marzo";
    break;

case 4:
    cout << "Abril";
    break;

case 5:
    cout << "Mayo";
    break;

case 6:
    cout << "Junio";
    break;

case 7:
    cout << "Julio";
    break;

case 8:
    cout << "Agosto";
    break;

case 9:
    cout << "Septiembre";
    break;

case 10:
    cout << "octubre";
    break;

case 11:
    cout << "Noviembre";
    break;

case 12:
    cout << "Diciembre";
    break;

default:
    cout << "El numero que ingresaste no existe";
    break;
    }

    return 0;
}
