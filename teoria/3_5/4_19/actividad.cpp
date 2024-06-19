#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{

    //Variables
    int SelectorDeOpciones;
    do{
        printf("Elige las opciones 1 Datos personales, 2 Sado o 0 Salir del programa");
        scanf("%d", SelectorDeOpciones);

        if(SelectorDeOpciones == 1)
        {
            printf("Tus datos personales son:");
        }
        else
        {
            printf("Tu saldo es de: ");
        }
    }while(SelectorDeOpciones != 0);
    return 0;
}
