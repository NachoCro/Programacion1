#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;
int factorial(int i);
int main()
{

    int NumeroPedido; // Variable que se usa para preguntar el numero
    printf("Ingresa un numero: ");
    scanf("%d", &NumeroPedido);
    for(int j = 1; j <= NumeroPedido; j++)
    {
        printf("El resultado del numero factorial es %d \n", factorial(j));
    }
    return 0;
}
int factorial(int i)
{
    int f = 1;
    int Contador = 1;
    while (Contador<=i)
    {
        f = f*Contador;
        Contador = Contador + 1;
    }
    i = f;
    return i;
}
int FactRecur(int i){
    if(i==0)}{
        return 1;
    }else{
        FactRecur(i-1);
    }
}







