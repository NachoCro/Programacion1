#include <iostream>
#include <cctype>

using namespace std;
int ContarCaracteres(string frase){;
    int numero=0;
    while(numero <= frase[numero]){
        numero++;
    }
    return numero;
}

void pasartextoamayusculas(string &texto){
    int a = ContarCaracteres(texto);
    for(int i=0;i<a;i++){
        texto[i] = toupper(texto[i]);
    }
}
int main(){
    string frase;
    cout << "Ingrese una frase: ";
    cin >> frase;
    pasartextoamayusculas(frase);
    cout << frase;
    return 0;
}
