#include <iostream>
#include <cstdlib>  // Para rand() y srand()

using namespace std;

int main() {
    const int filas = 5;
    const int columnas = 5;
    int matriz[filas][columnas];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 100;
        }
    }

    int fila, columna;
    cout << "Ingrese la fila (0 a " << filas-1 << "): ";
    cin >> fila;
    cout << "Ingrese la columna (0 a " << columnas-1 << "): ";
    cin >> columna;

    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        int valor = matriz[fila][columna];
        cout << "El valor en la posición (" << fila << ", " << columna << ") es: " << valor << endl;

        if (valor % 2 == 0) {
            cout << "El valor es par." << endl;
        } else {
            cout << "El valor es impar." << endl;
        }
    } else {
        cout << "Posición fuera de los límites de la matriz." << endl;
    }

    return 0;
}
