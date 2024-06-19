#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n>1){
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
    if(n==1){
        return 1;
    }

}

int main(){
    int NumeroPedido;
    printf("Ingrese un numero: ");
    scanf("%d", &NumeroPedido);

    printf("El numero de fibonacci de tu numero es %d", Fibonacci(NumeroPedido));


    return 0;
}
