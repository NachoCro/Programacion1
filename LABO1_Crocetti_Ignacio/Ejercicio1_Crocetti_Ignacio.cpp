#include <iostream>

using namespace std;
    //Declaro la variable AnioDelCliente
    //Pido el año que quiere introducir el cliente
    //Calculo si es bisiesto porque si es bisiesto es divisible por 4 y 400 pero no por 100
    //Entonces seria que si AnioDelCliente%4 es 0 y AnioDelCliente%400 es 0 es bisiesto pero si tambien AnioDelCliente%100 es 0 no es bisiesto
int main(){

    int AnioDelCliente;
    cout << "Elija un año: ";
    cin >> AnioDelCliente;

    if(AnioDelCliente%4 == 0 && AnioDelCliente%100 != 0){
        cout << "Es anio bisiesto";
    }else if (AnioDelCliente%400 == 0){
        cout << "Es anio bisiesto";
    }else{
        cout << "No es anio bisiesto";
    }

    return 0;
}
