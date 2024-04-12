#include <iostream>

using namespace std;

// Ingresar las variables float (masa y aseleracion)
// pedimos los datos al usuario
// Calcular la fuerza (Fuerza = Masa * aseleracion)
// Mostrar el resultado del calculo osea la fuerza


int main (){

    float MasaDelObjeto;
    float AseleracionDelObjeto;
    cout << "Ingrese la masa ";
    cin >> MasaDelObjeto;
    cout << "ingrese la aseleracion ";
    cin >> AseleracionDelObjeto;

    float FuerzaDelObjeto = MasaDelObjeto * AseleracionDelObjeto;

    cout << "La fuerza es de: " << FuerzaDelObjeto;
    return 0;
}
