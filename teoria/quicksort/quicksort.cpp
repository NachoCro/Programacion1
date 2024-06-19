#include <iostream>
#include <vector>
using namespace std;

void cambio(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void quicksort(vector<int> &vec,int izq,int der){
    int i = izq;
    int j = der;
    int t = vec[(izq+der)/2];

    while (i <= j) {
        while (vec[i] < t) {
            i++;
        }
        while (vec[j] > t) {
            j--;
        }
        if (i <= j) {
            cambio(vec[i], vec[j]);
            i++;
            j--;
        }
    }

    if (izq < j) {
        quicksort(vec, izq, j);
    }
    if (i < der) {
        quicksort(vec, i, der);
    }
}

void imprimirArray(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main(){
    vector<int> numeritos = {4, 2, 7, 9, 3, 1, 5, 7};

    cout << "El array desordenado: \n";
    imprimirArray(numeritos);

    quicksort(numeritos, 0, numeritos.size() - 1);

    cout << "El array ordenado: \n";
    imprimirArray(numeritos);
    return 0;
}

