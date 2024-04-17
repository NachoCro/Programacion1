#include <iostream>

using namespace std;

int main(){

    string DiaDeLaSemana;
    int DiaDeLaSemanaEntero;
    cout << "Ingresa el dia de la semana \n";
    cin >> DiaDeLaSemana;

    if(DiaDeLaSemana == "Lunes" || DiaDeLaSemana == "lunes"){
        DiaDeLaSemanaEntero = 1;
    }else if(DiaDeLaSemana == "Martes" || DiaDeLaSemana == "martes"){
        DiaDeLaSemana = 2;
    }else if(DiaDeLaSemana == "Miercoles" || DiaDeLaSemana == "miercoles"){
        DiaDeLaSemana = 3;
    }else if(DiaDeLaSemana == "jueves" || DiaDeLaSemana == "Jueves"){
        DiaDeLaSemana = 4;
    }else{
        DiaDeLaSemana = 5;
    }

    switch(DiaDeLaSemanaEntero){

case 1:
    cout << "Hoy tenes Arq. y S.O, y Org. Empresarial";
    break;
case 2:
    cout << "Hoy Org. Empresarial, y Matematica";
    break;
case 3:
    cout << "Hoy teness Arq y S.O, y programacion";
    break;
case 4:
    cout << "Hoy tenes Matematicas, y Programacion";
    break;
case 5:
    cout << "Hoy tenes programacion todo el dia ";
    }

    return 0;
}
