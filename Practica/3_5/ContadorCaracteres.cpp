#include <iostream>

using namespace std;

//Crear una variable char por ejemplo texto con un hola mundo
//hacer la funcion la cual tiene que dividir los caracteres y contar cuantos hay en el char
//La misma funcion tiene que decir el numero de la cantidad de letras o caracteres que hay

int ContarCaracteres(char frase[]){;
    int numero=0;
    while(frase[numero]!=NULL){
        cout << numero++ << "\n";
    }
    return numero;
}
int main(){
    char texto[] = "Holanda weseresfdgg ";
    cout << ContarCaracteres(texto);
    return 0;
}
