#include <iostream>
#include <iomanip>
using namespace std;

    // Declarar las variables CantidadDeMaterias como entero, PromedioPonderado, Nota, PonderacionTotal, Ponderado, Ponderacion como float, Materia como char
    // Preguntar cuantas materias tiene y guardar ese numero en CantidadDeMaterias
    // Preguntar el nombre de cada materia con su nota y su ponderacion la cantidad de veces que materias tiene, en el proceso sumar Nota + Ponderacion y guardarla en ponderado, tambien hacer un total de las ponderaciones
    // Dividir ponderado y PonderacionTotal y guardarlo en PromedioPonderado
    // Mostrar el resultado de PromedioPonderado

int main(){

    int CantidadDeMaterias;
    float Ponderacion, Nota, PromedioPonderado, Ponderado, PonderacionTotal;
    char Materia;

    cout << "Cuantas materias tenes? ";
    cin >> CantidadDeMaterias;

    for(int i = 0; i<CantidadDeMaterias; i++){

        cout << "Cual es el nombre de la materia? ";
        cin >> Materia;
        cout << "Cual es la ponderacion?";
        cin >> Ponderacion;
        cout << "Cual es la nota? ";
        cin >> Nota;

        Ponderado = Ponderado + (Nota * Ponderacion);
        PonderacionTotal = PonderacionTotal+Ponderacion;
    }

    PromedioPonderado = PonderacionTotal/Ponderado;

    cout << "El Promedio ponderado es " << fixed << setprecision(2) << PromedioPonderado;
    return 0;
}
