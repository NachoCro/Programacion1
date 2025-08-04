#include <iostream>

using namespace std;

// Ingresar las variables float (masa y aceleracion)
// pedimos los datos al usuario
// Calcular la fuerza (Fuerza = Masa * aceleracion)
// Mostrar el resultado del calculo osea la fuerza


int main (){

    float MasaDelObjeto;
    float AceleracionDelObjeto;
    cout << "Ingrese la masa ";
    cin >> MasaDelObjeto;
    cout << "ingrese la aseleracion ";
    cin >> AceleracionDelObjeto;

    float FuerzaDelObjeto = MasaDelObjeto * AceleracionDelObjeto;

    cout << "La fuerza es de: " << FuerzaDelObjeto;
    return 0;
}
