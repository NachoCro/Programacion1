#include <iostream>

using namespace std;
// Declarar la variable NumerosPrimos, total de ceros para saber que si da mas de 2 ceros no es primo
// Calcular si el numero es divisible por 1 y por si mismo
// Si es divisible por algo mas no es un numero primo
//
int main(){

    int NumeroPrimo;
    do{

    int totalDeCeros = 0;
    cout << "ingresa un numero (0 parar el programa): ";
    cin >> NumeroPrimo;

    for(int i = 1; i <= NumeroPrimo; i++){
        int resto = NumeroPrimo%i;
        if(resto == 0){
            totalDeCeros = totalDeCeros + 1;
        }
    }

    if(totalDeCeros == 2){
        cout << "Es primo \n";
    }else{
        cout << "No es primo \n18";
    }
    }while(NumeroPrimo != 0);
    return 0;
}
