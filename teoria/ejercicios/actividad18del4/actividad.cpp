#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    //Inicializo las variabes
    int ValorInicial;
    int ValorFinal;

    //Pido al usuario que ingrese los valores
    printf("Inserta un valor inicial: \n");
    scanf("%d", &ValorInicial);

    printf("Inserta un valor final: \n");
    scanf("%d", &ValorFinal);

    printf("Aca esta el rango de valores entre los insertados: \n");
    while(ValorInicial <= ValorFinal){

        printf("%d \n", ValorInicial);

        ValorInicial = ValorInicial + 1;

        if(ValorInicial>ValorFinal){
            printf("A terminado el rango entre los valores");
        }
    }
    return 0;
}
