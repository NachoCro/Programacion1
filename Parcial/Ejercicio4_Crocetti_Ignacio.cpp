#include <iostream>
#include <iomanip>
using namespace std;

// Declarar las variables CantidadDeMaterias como entero, PromedioPonderado, Nota, PonderacionTotal, Ponderado, Ponderacion como float, Materia como char
// Preguntar cuantas materias tiene y guardar ese numero en CantidadDeMaterias
// Preguntar el nombre de cada materia con su nota y su ponderacion la cantidad de veces que materias tiene, en el proceso sumar Nota + Ponderacion y guardarla en ponderado, tambien hacer un total de las ponderaciones
// Dividir ponderado y PonderacionTotal y guardarlo en PromedioPonderado
// Mostrar el resultado de PromedioPonderado
int validarponderacion(int ponderacion)
{
    int nuevaponderacion;
    if(ponderacion!=100)
    {
        cout << "la suma de la ponderacion no da 100, pon un numero que no lo supere: ";
        cin >> nuevaponderacion;
        return nuevaponderacion;
    }
    else
    {
        return ponderacion;
    }
}

int main()
{

    int CantidadDeMaterias;
    float Ponderacion, Nota, PromedioPonderado, Ponderado, PonderacionTotal=0;
    char Materia;

    cout << "Cuantas materias tenes? ";
    cin >> CantidadDeMaterias;

    for(int i = 1; i<=CantidadDeMaterias; i++)
    {

        cout << "Cual es el nombre de la materia? ";
        cin >> Materia;
        cout << "Cual es la ponderacion?";
        cin >> Ponderacion;
        cout << "Cual es la nota? ";
        cin >> Nota;

        if(CantidadDeMaterias == i)
        {
            Ponderacion = validarponderacion(PonderacionTotal+Ponderacion);
        }

        Ponderado = Ponderado + (Nota * Ponderacion);
        PonderacionTotal = PonderacionTotal+Ponderacion;
    }

    PromedioPonderado = Ponderado/PonderacionTotal;

    cout << "El Promedio ponderado es " << fixed << setprecision(2) << PromedioPonderado;
    return 0;
}
