#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int factorial(int i)
{
    if(i==0)
    {
        return 1;
    }
    else
    {
        return i*factorial(i-1);
    }
}

int main()
{

    int NumeroPedido;
    do
    {
        printf("Ingresa un numero (con 0 se para): ");
        scanf("%d", &NumeroPedido);
        for(int j = 1; j <= NumeroPedido; j++)
        {

            printf("El resultado del numero factorial de %d es %d \n", j,factorial(j));
        }
    }
    while(NumeroPedido != 0);

    return 0;
}
