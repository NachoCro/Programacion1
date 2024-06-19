#include <iostream>

using namespace std;

void burbujita(char letras[],int largo)
{

    for(int i = 0; i < largo - 1 ; i++)
    {

        for(int j = 0; j < largo - 1 ; j++)
        {
            if(letras[j] > letras[j + 1])
            {
                char datoTemporal = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = datoTemporal;
            }

        }
    }

}

int main()
{
    char letras[] = {'j','b','r','a','z'};

    int largoDelArray = sizeof(letras)/sizeof(*letras);

    cout << "Array desordenado: ";
    for(int i = 0; i< largoDelArray; i++)
    {
        cout << letras[i];
    }

    burbujita(letras, largoDelArray);

    cout << "\n Array ordenado: ";

    for(int i = 0; i< largoDelArray; i++)
    {
        cout << letras[i];
    }
    return 0;

}
