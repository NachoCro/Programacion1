#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{

    //Inicio las variables
    int EdadDelUsuario;
    int AniosPares = 0;
    int AniosImpares = 0;
    //Solicito la variable al usuario
    printf("Inserte su edad: \n");
    scanf("%d", &EdadDelUsuario);


    for(int i=0; i<EdadDelUsuario; i++)
    {
        if(i%2==0)
        {
            AniosPares = AniosPares + 1;
        }
        else
        {
            AniosImpares = AniosImpares + 1;
        }
    }

    printf("Tu edad es %d\n", EdadDelUsuario);
    printf("Los años pares vividos son %d\n", AniosPares);
    printf("Los años impares vividos son %d\n", AniosImpares);
    return 0;
}
