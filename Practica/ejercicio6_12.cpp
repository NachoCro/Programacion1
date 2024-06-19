#include <iostream>
#include <stdio.h>
#include <vector>
#include <conio.h>
#include <cstring>

using namespace std;

int main() {

    struct persona
    {
        char apellido[20];
        float nota1;
        float nota2;
        float nota3;
        float nota4;
        float nota5;
        float notaFinal;
    };

    int notaIngresadaError = 0;
    int swich = 1;
    int alumnos;
    int ejercicios = 5;

    cout << "Ingrese la cantidad de alumnos que rindieron el parcial: ";
    cin >> alumnos;

    persona personas[alumnos];

    cout << endl << "Tenga en cuenta que la nota maxima de cada ejercicio es un 2..." << endl << endl;

    while (swich) {

        for (int i = 0; i < alumnos; i++) {

            char nombre[20];

            cout << "Ingrese el apellido del alumno n" << i+1 <<": ";
            cin >> nombre;

            strcpy(personas[i].apellido, nombre);

            float notaFinalAlumno = 0;

            for (int j = 0; j < ejercicios; j++) {

                float nota = 0;

                cout << "Ingrese la nota del ejercicio " << j+1 << ": ";
                cin >> nota;

                if (nota > 2 or nota < 0) {

                    swich = 0;
                    notaIngresadaError = 1;

                }

                else {

                    if (j == 0) personas[i].nota1 = nota;

                    else if (j == 1) personas[i].nota2 = nota;

                    else if (j == 2) personas[i].nota3 = nota;

                    else if (j == 3) personas[i].nota4 = nota;

                    else if (j == 4) personas[i].nota5 = nota;

                    notaFinalAlumno = notaFinalAlumno + nota;

                }

            }

            personas[i].notaFinal = notaFinalAlumno;
            cout << endl;

        }

        swich = 0;

    }

    if (notaIngresadaError) cout << "Alguna de las notas de los ejercicios no es valida";

    else {

        cout << "Aqui la lista de alumnos que han rendido el parcial, con sus notas..." << endl;

        for (int i = 0; i < alumnos; i++) {

            cout << "Alumno n" << i+1 << ":" << endl;

            cout << "Apellido: " << personas[i].apellido << endl
                 << "  1er nota: " << personas[i].nota1 << endl
                 << "  2da nota: " << personas[i].nota2 << endl
                 << "  3ra nota: " << personas[i].nota3 << endl
                 << "  4ta nota: " << personas[i].nota4 << endl
                 << "  5ta nota: " << personas[i].nota5 << endl
                 << "  Nota final: " << personas[i].notaFinal << endl << endl << endl;

            }

        cout << "Ahora se mostrara una lista con los alumnos aprobados: " << endl << endl;

        for (int i = 0; i < alumnos; i++) {

            if (personas[i].notaFinal >= 6) cout << personas[i].apellido << endl << endl;

        }

    }

    getch();

    return 0;
}
